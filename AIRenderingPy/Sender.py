import os
import sys
import argparse

import pygame
from pygame.locals import DOUBLEBUF, OPENGL
from OpenGL.GL import (
    GL_COLOR_BUFFER_BIT,
    GL_CLAMP_TO_EDGE,
    GL_LINEAR,
    GL_QUADS,
    GL_RGBA,
    GL_TEXTURE_2D,
    GL_TEXTURE_MAG_FILTER,
    GL_TEXTURE_MIN_FILTER,
    GL_TEXTURE_WRAP_S,
    GL_TEXTURE_WRAP_T,
    GL_UNSIGNED_BYTE,
    glBegin,
    glBindTexture,
    glClear,
    glClearColor,
    glEnd,
    glEnable,
    glGenTextures,
    glLoadIdentity,
    glMatrixMode,
    glOrtho,
    glTexCoord2f,
    glTexImage2D,
    glTexParameterf,
    glTexParameteri,
    glVertex2f,
    GL_MODELVIEW,
    GL_PROJECTION,
    GL_TEXTURE_2D,
)
from PIL import Image


SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
LIB_CANDIDATES = [
    os.path.abspath(os.path.join(SCRIPT_DIR, "Library")),
    os.path.abspath(os.path.join(SCRIPT_DIR, "..", "Library")),
]

for lib_dir in LIB_CANDIDATES:
    if os.path.isdir(lib_dir) and lib_dir not in sys.path:
        sys.path.insert(0, lib_dir)

ACTIVE_LIB_DIR = None
for lib_dir in LIB_CANDIDATES:
    if ACTIVE_LIB_DIR is None and os.path.isfile(os.path.join(lib_dir, "SpoutSDK.pyd")):
        ACTIVE_LIB_DIR = lib_dir

try:
    import SpoutSDK  # noqa: E402
except ImportError as exc:
    py_ver = "{}.{}".format(sys.version_info.major, sys.version_info.minor)
    searched = ", ".join("'{}'".format(p) for p in LIB_CANDIDATES)
    active = ACTIVE_LIB_DIR if ACTIVE_LIB_DIR else "none"
    raise ImportError(
        "Failed to import SpoutSDK. Searched: {}. Active SpoutSDK.pyd path: '{}'. "
        "If SpoutSDK.pyd exists there, verify interpreter/ABI/architecture matches current Python {}."
        .format(searched, active, py_ver)
    ) from exc


def parse_args():
    parser = argparse.ArgumentParser(description="Minimal Spout sender for UE5 validation")
    parser.add_argument("--name", type=str, default="PyToUE5", help="Spout sender name")
    parser.add_argument(
        "--image",
        type=str,
        default=os.path.join(SCRIPT_DIR, "final_outfit.png"),
        help="Image path to send repeatedly",
    )
    return parser.parse_args()


def main():
    args = parse_args()
    image_path = os.path.abspath(args.image)
    if not os.path.isfile(image_path):
        raise FileNotFoundError("Image not found: {}".format(image_path))

    # Flip once before upload so Spout receiver in UE gets upright image.
    img = Image.open(image_path).convert("RGBA").transpose(Image.FLIP_TOP_BOTTOM)
    width, height = img.size
    pixels = img.tobytes("raw", "RGBA", 0, -1)

    pygame.init()
    pygame.display.set_caption("Spout Sender")
    pygame.display.set_mode((max(64, width), max(64, height)), DOUBLEBUF | OPENGL)
    glMatrixMode(GL_PROJECTION)
    glLoadIdentity()
    glOrtho(0, width, height, 0, -1, 1)
    glMatrixMode(GL_MODELVIEW)
    glLoadIdentity()
    glClearColor(0.0, 0.0, 0.0, 1.0)
    glEnable(GL_TEXTURE_2D)

    texture_id = glGenTextures(1)
    glBindTexture(GL_TEXTURE_2D, texture_id)
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE)
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE)
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR)
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR)
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, pixels)
    glBindTexture(GL_TEXTURE_2D, 0)

    sender = SpoutSDK.SpoutSender()
    created = sender.CreateSender(args.name, width, height, 0)
    print("CreateSender:", created, "name=", args.name, "size=", width, "x", height)
    print("Sending image:", image_path)
    print("Press ESC or close window to stop.")

    clock = pygame.time.Clock()
    running = True
    while running:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                running = False
            elif event.type == pygame.KEYDOWN and event.key == pygame.K_ESCAPE:
                running = False

        sender.SendTexture(texture_id, GL_TEXTURE_2D, width, height, False, 0)
        glClear(GL_COLOR_BUFFER_BIT)
        glLoadIdentity()
        glBindTexture(GL_TEXTURE_2D, texture_id)
        glBegin(GL_QUADS)
        glTexCoord2f(0.0, 0.0)
        glVertex2f(0.0, 0.0)
        glTexCoord2f(1.0, 0.0)
        glVertex2f(float(width), 0.0)
        glTexCoord2f(1.0, 1.0)
        glVertex2f(float(width), float(height))
        glTexCoord2f(0.0, 1.0)
        glVertex2f(0.0, float(height))
        glEnd()
        pygame.display.flip()
        clock.tick(60)

    sender.ReleaseSender(0)
    pygame.quit()


if __name__ == "__main__":
    main()
