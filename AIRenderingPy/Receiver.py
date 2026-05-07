import sys
import os
import multiprocessing

# ----------------------------
# 1) 模块加载路径准备
# ----------------------------
# 这里不用“当前工作目录 cwd”来拼路径，而是使用脚本自身所在目录 SCRIPT_DIR。
# 这样无论你从哪里启动脚本（IDE、终端、任务调度），都能稳定找到 SpoutSDK。
SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
LIB_CANDIDATES = [
    os.path.abspath(os.path.join(SCRIPT_DIR, 'Library')),        # 优先路径：AIRenderingPy/Library
    os.path.abspath(os.path.join(SCRIPT_DIR, '..', 'Library')),  # 兼容旧结构：../Library
]
ACTIVE_LIB_DIR = None
for lib_dir in LIB_CANDIDATES:
    # 把存在的目录加入 sys.path（前置插入，确保优先搜索）。
    if os.path.isdir(lib_dir) and lib_dir not in sys.path:
        sys.path.insert(0, lib_dir)
    # 记录第一处找到 SpoutSDK.pyd 的目录，用于后续错误提示诊断。
    if ACTIVE_LIB_DIR is None and os.path.isfile(os.path.join(lib_dir, 'SpoutSDK.pyd')):
        ACTIVE_LIB_DIR = lib_dir

import argparse

try:
    # SpoutSDK 是 C++ 扩展模块（.pyd），不是纯 Python 包。
    import SpoutSDK
except ImportError as exc:
    # 报错时给出可操作信息：当前 Python 版本、搜索路径、检测到的 pyd 位置。
    # 方便快速判断是“路径问题”还是“ABI/位数不匹配”。
    py_ver = "{}.{}".format(sys.version_info.major, sys.version_info.minor)
    searched = ", ".join("'{}'".format(p) for p in LIB_CANDIDATES)
    active = ACTIVE_LIB_DIR if ACTIVE_LIB_DIR else "none"
    raise ImportError(
        "Failed to import SpoutSDK. Searched: {}. Active SpoutSDK.pyd path: '{}'. "
        "If SpoutSDK.pyd exists there, verify it matches current Python ABI and architecture. "
        "Current Python is {}."
        .format(searched, active, py_ver)
    ) from exc
import pygame
from pygame.locals import *
from OpenGL.GL import *
from OpenGL.GLU import *

"""参数解析与运行配置"""


def parse_args():
    # 说明：默认把两路 Spout sender 分成两个独立窗口（两个进程）。
    desc = "Spout for Python dual texture receiving example"
    parser = argparse.ArgumentParser(description=desc)

    # 每路接收纹理的默认尺寸（仅用于初始化本地纹理，实际可由 sender 报告尺寸）。
    parser.add_argument('--spout_size', nargs=2, type=int, default=[1920, 1080],
                        help='Width and height of each spout receiver texture')
    # 与 UE5 中 Sender Name 对应；名字不匹配会导致接收失败。
    parser.add_argument('--spout_name_left', type=str, default='UENormalRT', help='Left view sender name')
    parser.add_argument('--spout_name_right', type=str, default='UEDepthRT', help='Right view sender name')
    # 每个窗口的输出尺寸；默认与接收纹理一致。
    parser.add_argument('--window_size', nargs=2, type=int, default=[1920, 1080],
                        help='Width and height of each output window')
    # 默认把左右两路分成两个窗口；可传 --single_window 回到旧的并排显示模式。
    parser.add_argument('--single_window', action='store_true',
                        help='Render both receivers in one window (legacy mode)')
    # 打开后每秒刷新窗口标题与终端输出 FPS（该 FPS 是接收端显示循环帧率）。
    parser.add_argument('--show_fps', action='store_true',
                        help='Show FPS in window title and print once per second')

    return parser.parse_args()


"""主流程"""


def run_single_receiver(spout_name, spout_size, window_size, show_fps=False, window_title='Spout Receiver'):
    width = window_size[0]
    height = window_size[1]
    display = (width, height)

    pygame.init()
    pygame.display.set_caption(window_title)
    pygame.display.set_mode(display, DOUBLEBUF | OPENGL)
    clock = pygame.time.Clock()
    fps_timer_ms = pygame.time.get_ticks()

    glMatrixMode(GL_PROJECTION)
    glLoadIdentity()
    glOrtho(0, width, height, 0, 1, -1)
    glMatrixMode(GL_MODELVIEW)
    glDisable(GL_DEPTH_TEST)
    glClearColor(0.0, 0.0, 0.0, 0.0)
    glEnable(GL_TEXTURE_2D)

    spoutReceiverWidth = spout_size[0]
    spoutReceiverHeight = spout_size[1]
    receiver = SpoutSDK.SpoutReceiver()
    created = receiver.pyCreateReceiver(spout_name, spoutReceiverWidth, spoutReceiverHeight, False)
    print('CreateReceiver:', created, 'name=', spout_name, 'size=', spoutReceiverWidth, 'x', spoutReceiverHeight)
    print('Sender reported size:', receiver.GetWidth(spout_name), 'x', receiver.GetHeight(spout_name))

    textureID = glGenTextures(1)
    glBindTexture(GL_TEXTURE_2D, textureID)
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE)
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE)
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST)
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST)
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, spoutReceiverWidth, spoutReceiverHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, None)
    glBindTexture(GL_TEXTURE_2D, 0)

    while True:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                receiver.ReleaseReceiver()
                pygame.quit()
                return

        receiver.pyReceiveTexture(spout_name, spoutReceiverWidth, spoutReceiverHeight, textureID, GL_TEXTURE_2D, False, 0)

        glActiveTexture(GL_TEXTURE0)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
        glLoadIdentity()

        glBindTexture(GL_TEXTURE_2D, textureID)
        glBegin(GL_QUADS)
        glTexCoord(0, 0)
        glVertex2f(0, 0)
        glTexCoord(1, 0)
        glVertex2f(width, 0)
        glTexCoord(1, 1)
        glVertex2f(width, height)
        glTexCoord(0, 1)
        glVertex2f(0, height)
        glEnd()

        pygame.display.flip()
        clock.tick(240)

        if show_fps:
            now_ms = pygame.time.get_ticks()
            if now_ms - fps_timer_ms >= 1000:
                fps = clock.get_fps()
                pygame.display.set_caption('{} - FPS: {:.1f}'.format(window_title, fps))
                print('[{}] FPS: {:.1f}'.format(window_title, fps))
                fps_timer_ms = now_ms


def main():
    # 2) 解析运行参数
    args = parse_args()

    # 3) 窗口尺寸配置
    width = args.window_size[0]
    height = args.window_size[1]
    display = (width, height)

    # 默认模式：两路 sender 分别在两个窗口显示（两个进程）。
    if not args.single_window:
        left_proc = multiprocessing.Process(
            target=run_single_receiver,
            args=(args.spout_name_left, args.spout_size, args.window_size, args.show_fps, 'Spout Receiver - Normal')
        )
        right_proc = multiprocessing.Process(
            target=run_single_receiver,
            args=(args.spout_name_right, args.spout_size, args.window_size, args.show_fps, 'Spout Receiver - Depth')
        )
        left_proc.start()
        right_proc.start()
        try:
            left_proc.join()
            right_proc.join()
        except KeyboardInterrupt:
            left_proc.terminate()
            right_proc.terminate()
            left_proc.join()
            right_proc.join()
        return

    # 4) 初始化 pygame + OpenGL 上下文
    pygame.init()
    pygame.display.set_caption('Spout Receiver')
    pygame.display.set_mode(display, DOUBLEBUF | OPENGL)
    # clock 用于限帧与 FPS 统计（仅统计本循环渲染速度）。
    clock = pygame.time.Clock()
    fps_timer_ms = pygame.time.get_ticks()

    # 5) OpenGL 固定管线基础状态
    # 使用正交投影，坐标系原点放在左上角，便于按像素绘制纹理矩形。
    glMatrixMode(GL_PROJECTION)
    glLoadIdentity()
    glOrtho(0, width, height, 0, 1, -1)
    glMatrixMode(GL_MODELVIEW)
    glDisable(GL_DEPTH_TEST)
    glClearColor(0.0, 0.0, 0.0, 0.0)
    glEnable(GL_TEXTURE_2D)

    # 6) 初始化 Spout Receiver（左路/右路）
    leftReceiverName = args.spout_name_left
    rightReceiverName = args.spout_name_right
    spoutReceiverWidth = args.spout_size[0]
    spoutReceiverHeight = args.spout_size[1]
    leftReceiver = SpoutSDK.SpoutReceiver()
    rightReceiver = SpoutSDK.SpoutReceiver()

    # pyCreateReceiver 会尝试按名字连接 sender。
    # 最后一个参数 False 表示不使用 Active Sender 自动选择，而是按给定名字连接。
    leftCreated = leftReceiver.pyCreateReceiver(leftReceiverName, spoutReceiverWidth, spoutReceiverHeight, False)
    rightCreated = rightReceiver.pyCreateReceiver(rightReceiverName, spoutReceiverWidth, spoutReceiverHeight, False)
    print('CreateReceiver(left):', leftCreated, 'name=', leftReceiverName, 'size=', spoutReceiverWidth, 'x',
          spoutReceiverHeight)
    print('Sender reported size(left):', leftReceiver.GetWidth(leftReceiverName), 'x',
          leftReceiver.GetHeight(leftReceiverName))
    print('CreateReceiver(right):', rightCreated, 'name=', rightReceiverName, 'size=', spoutReceiverWidth, 'x',
          spoutReceiverHeight)
    print('Sender reported size(right):', rightReceiver.GetWidth(rightReceiverName), 'x',
          rightReceiver.GetHeight(rightReceiverName))

    # 7) 为两路接收结果创建本地 OpenGL 纹理
    # 后续 pyReceiveTexture 会把共享纹理内容写入这两个 texture ID。
    textureLeftID, textureRightID = glGenTextures(2)

    # 7.1 初始化左路纹理参数与显存
    glBindTexture(GL_TEXTURE_2D, textureLeftID)
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE)
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE)
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST)
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST)
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, spoutReceiverWidth, spoutReceiverHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, None)
    glBindTexture(GL_TEXTURE_2D, 0)

    # 7.2 初始化右路纹理参数与显存
    glBindTexture(GL_TEXTURE_2D, textureRightID)
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE)
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE)
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST)
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST)
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, spoutReceiverWidth, spoutReceiverHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, None)
    glBindTexture(GL_TEXTURE_2D, 0)

    # 8) 主循环：事件处理 -> 接收纹理 -> 绘制 -> 刷新
    while (True):
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                # 退出前主动释放 Spout Receiver，避免共享资源残留。
                leftReceiver.ReleaseReceiver()
                rightReceiver.ReleaseReceiver()
                pygame.quit()
                quit()

        # 8.1 每帧从 Spout 拉取左右两路纹理到本地 OpenGL 纹理
        # 注意：这里没有走 CPU 像素回读，主要是 GPU 纹理路径。
        leftReceiver.pyReceiveTexture(leftReceiverName, spoutReceiverWidth, spoutReceiverHeight, textureLeftID,
                                      GL_TEXTURE_2D, False, 0)
        rightReceiver.pyReceiveTexture(rightReceiverName, spoutReceiverWidth, spoutReceiverHeight, textureRightID,
                                       GL_TEXTURE_2D, False, 0)

        # 8.2 设置绘制状态并清屏
        glActiveTexture(GL_TEXTURE0)

        # 清理颜色/深度缓冲，确保本帧从干净画面开始。
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
        # 重置模型矩阵，避免上帧变换影响本帧。
        glLoadIdentity()

        # 8.3 左路纹理绘制到窗口左半边（x: 0 -> spoutReceiverWidth）
        glBindTexture(GL_TEXTURE_2D, textureLeftID)
        glBegin(GL_QUADS)
        glTexCoord(0, 0)
        glVertex2f(0, 0)
        glTexCoord(1, 0)
        glVertex2f(spoutReceiverWidth, 0)
        glTexCoord(1, 1)
        glVertex2f(spoutReceiverWidth, spoutReceiverHeight)
        glTexCoord(0, 1)
        glVertex2f(0, spoutReceiverHeight)
        glEnd()

        # 8.4 右路纹理绘制到窗口右半边（x: spoutReceiverWidth -> spoutReceiverWidth*2）
        glBindTexture(GL_TEXTURE_2D, textureRightID)
        glBegin(GL_QUADS)
        glTexCoord(0, 0)
        glVertex2f(spoutReceiverWidth, 0)
        glTexCoord(1, 0)
        glVertex2f(spoutReceiverWidth * 2, 0)
        glTexCoord(1, 1)
        glVertex2f(spoutReceiverWidth * 2, spoutReceiverHeight)
        glTexCoord(0, 1)
        glVertex2f(spoutReceiverWidth, spoutReceiverHeight)
        glEnd()

        # 8.5 交换前后缓冲，把本帧显示到窗口
        pygame.display.flip()
        # 限制本循环上限到 240 FPS，避免空转占满 CPU/GPU。
        # 这是“显示循环帧率”上限，不等于 UE5 发送新帧帧率。
        clock.tick(240)

        if args.show_fps:
            now_ms = pygame.time.get_ticks()
            if now_ms - fps_timer_ms >= 1000:
                # get_fps() 统计的是本渲染循环速度，不是 sender 端广播帧率。
                fps = clock.get_fps()
                pygame.display.set_caption('Spout Receiver - FPS: {:.1f}'.format(fps))
                print('FPS: {:.1f}'.format(fps))
                fps_timer_ms = now_ms


if __name__ == '__main__':
    multiprocessing.freeze_support()
    main()
