import os
os.environ["HF_HOME"] = "C:/MyResearch/AiModels"
import torch
from diffusers import StableDiffusionControlNetPipeline, ControlNetModel, LCMScheduler
from PIL import Image

# 1. 加载双重 ControlNet：深度 (Depth) 和 法线 (Normal)
print("正在加载 ControlNet...")
controlnet_depth = ControlNetModel.from_pretrained(
    "lllyasviel/control_v11f1p_sd15_depth",
    torch_dtype=torch.float16
)
controlnet_normal = ControlNetModel.from_pretrained(
    "lllyasviel/control_v11p_sd15_normalbae",
    torch_dtype=torch.float16
)

# 2. 加载 Stable Diffusion 基础管线
print("正在加载主模型...")
# 这里用的是基础 1.5 模型，之后你可以换成任何你喜欢的二次元/动漫底模 (比如 Anything V5)
pipe = StableDiffusionControlNetPipeline.from_pretrained(
    "runwayml/stable-diffusion-v1-5",
    controlnet=[controlnet_depth, controlnet_normal],
    torch_dtype=torch.float16,
    safety_checker=None
).to("cuda")

# 3. 注入 LCM 魔法 (4步出图的核心)
print("正在注入 LCM 加速模块...")
pipe.load_lora_weights("latent-consistency/lcm-lora-sdv1-5")
pipe.scheduler = LCMScheduler.from_config(pipe.scheduler.config)
# 将 LCM LoRA 的权重稍微降低一点，避免画面崩坏
pipe.fuse_lora(lora_scale=0.8)

# 4. 读取你从 UE 导出的图像
print("读取 G-Buffer 图像...")
# 请确保你的文件名和路径对应得上！
depth_image = Image.open("testImages/Depth_Tex.PNG").convert("RGB")
normal_image = Image.open("testImages/Normal_Tex.PNG").convert("RGB")

# 5. 咒语配置 (这就是你的“语义控制”)
prompt = "masterpiece, best quality, anime style, 1man, wearing white clothes, intricate details"
negative_prompt = "low quality, bad anatomy, worst quality"

# 6. 开始极速推理
print("开始 4 步极速生成！")
image = pipe(
    prompt=prompt,
    negative_prompt=negative_prompt,
    image=[depth_image, normal_image],
    # 分别控制 深度 和 法线 的权重，1.0 表示强约束
    controlnet_conditioning_scale=[1.0, 0.8],
    num_inference_steps=4, # LCM 的奇迹：只需 4 步！
    guidance_scale=1.5,    # LCM 的 CFG 必须非常低 (通常在 1.0 到 2.0 之间)
).images[0]

# 7. 保存结果
image.save("final_outfit.png")
print("生成完毕！快去打开 final_outfit.png 看看效果！")