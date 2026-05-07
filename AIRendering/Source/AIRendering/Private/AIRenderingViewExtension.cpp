#include "AIRenderingViewExtension.h"

#include "GlobalShader.h"
#include "PixelShaderUtils.h"
#include "RenderGraphBuilder.h"
#include "RenderGraphResources.h"
#include "RenderGraphUtils.h"
#include "RendererInterface.h"
#include "SceneTexturesConfig.h"
#include "SceneView.h"
#include "ShaderCompilerCore.h"
#include "ShaderParameterStruct.h"

DEFINE_LOG_CATEGORY_STATIC(LogAIRenderingViewExt, Log, All);

namespace AIRendering
{
	static TAutoConsoleVariable<int32> CVarForceRedBaseColor(
		TEXT("r.AIRendering.ForceRedBaseColor"),
		1,
		TEXT("Force GBuffer BaseColor to red in runtime game views.\n")
		TEXT("0: Disabled\n")
		TEXT("1: Enabled"),
		ECVF_RenderThreadSafe);

	static TAutoConsoleVariable<int32> CVarDebugLog(
		TEXT("r.AIRendering.ForceRedBaseColor.DebugLog"),
		0,
		TEXT("Print debug logs for GBuffer override decisions.\n")
		TEXT("0: Off\n")
		TEXT("1: On"),
		ECVF_RenderThreadSafe);

	static TAutoConsoleVariable<int32> CVarRequireGameWorld(
		TEXT("r.AIRendering.ForceRedBaseColor.RequireGameWorld"),
		0,
		TEXT("Require World->IsGameWorld() to apply override.\n")
		TEXT("0: Off (debug-friendly)\n")
		TEXT("1: On"),
		ECVF_RenderThreadSafe);

	static TAutoConsoleVariable<int32> CVarAllowSceneCapture(
		TEXT("r.AIRendering.ForceRedBaseColor.AllowSceneCapture"),
		1,
		TEXT("Allow override in SceneCapture views.\n")
		TEXT("0: Off\n")
		TEXT("1: On (debug-friendly)"),
		ECVF_RenderThreadSafe);
}

class FGBufferForceRedCS : public FGlobalShader
{
public:
	DECLARE_GLOBAL_SHADER(FGBufferForceRedCS);
	SHADER_USE_PARAMETER_STRUCT(FGBufferForceRedCS, FGlobalShader);

	BEGIN_SHADER_PARAMETER_STRUCT(FParameters, )
		SHADER_PARAMETER(FIntPoint, ViewRectMin)
		SHADER_PARAMETER(FIntPoint, ViewRectMax)
		SHADER_PARAMETER_RDG_TEXTURE_UAV(RWTexture2D<float4>, RWGBufferC)
	END_SHADER_PARAMETER_STRUCT()
};

IMPLEMENT_GLOBAL_SHADER(FGBufferForceRedCS, "/AIRendering/Private/GBufferForceRed.usf", "GBufferForceRedCS", SF_Compute);

FAIRenderingViewExtension::FAIRenderingViewExtension(const FAutoRegister& AutoRegister)
	: FSceneViewExtensionBase(AutoRegister)
{
	UE_LOG(LogAIRenderingViewExt, Warning, TEXT("ViewExtension ctor: created"));
}

void FAIRenderingViewExtension::PostRenderViewFamily_RenderThread(FRDGBuilder& GraphBuilder, FSceneViewFamily& InViewFamily)
{
	static uint32 ViewFamilyLogCounter = 0;
	if ((ViewFamilyLogCounter++ % 120u) == 0u)
	{
		UE_LOG(
			LogAIRenderingViewExt,
			Warning,
			TEXT("Entry: PostRenderViewFamily_RenderThread called. NumViews=%d"),
			InViewFamily.Views.Num());
	}
}

bool FAIRenderingViewExtension::ShouldOverrideForView(const FSceneView& InView) const
{
	static uint32 LogFrameCounter = 0;
	const bool bDebugLog = AIRendering::CVarDebugLog.GetValueOnRenderThread() != 0;
	const bool bShouldLogThisFrame = bDebugLog && ((LogFrameCounter++ % 60u) == 0u);

	if (AIRendering::CVarForceRedBaseColor.GetValueOnRenderThread() == 0)
	{
		if (bShouldLogThisFrame)
		{
			UE_LOG(LogAIRenderingViewExt, Warning, TEXT("Skip override: main cvar disabled"));
		}
		return false;
	}

	if (!InView.Family || !InView.Family->Scene)
	{
		if (bShouldLogThisFrame)
		{
			UE_LOG(LogAIRenderingViewExt, Warning, TEXT("Skip override: missing view family or scene"));
		}
		return false;
	}

	const UWorld* World = InView.Family->Scene->GetWorld();
	if (!World)
	{
		if (bShouldLogThisFrame)
		{
			UE_LOG(LogAIRenderingViewExt, Warning, TEXT("Skip override: world is null"));
		}
		return false;
	}

	if (AIRendering::CVarRequireGameWorld.GetValueOnRenderThread() != 0 && !World->IsGameWorld())
	{
		if (bShouldLogThisFrame)
		{
			UE_LOG(LogAIRenderingViewExt, Warning, TEXT("Skip override: non-game world type=%d"), static_cast<int32>(World->WorldType));
		}
		return false;
	}

	if (AIRendering::CVarAllowSceneCapture.GetValueOnRenderThread() == 0 && InView.bIsSceneCapture)
	{
		if (bShouldLogThisFrame)
		{
			UE_LOG(LogAIRenderingViewExt, Warning, TEXT("Skip override: scene capture view"));
		}
		return false;
	}

	if (bShouldLogThisFrame)
	{
		UE_LOG(
			LogAIRenderingViewExt,
			Warning,
			TEXT("Will override view. worldType=%d sceneCapture=%d viewRect=(%d,%d)-(%d,%d)"),
			static_cast<int32>(World->WorldType),
			InView.bIsSceneCapture ? 1 : 0,
			InView.UnconstrainedViewRect.Min.X,
			InView.UnconstrainedViewRect.Min.Y,
			InView.UnconstrainedViewRect.Max.X,
			InView.UnconstrainedViewRect.Max.Y);
	}

	return true;
}

void FAIRenderingViewExtension::PostRenderBasePassDeferred_RenderThread(
	FRDGBuilder& GraphBuilder,
	FSceneView& InView,
	const FRenderTargetBindingSlots& RenderTargets,
	TRDGUniformBufferRef<FSceneTextureUniformParameters> SceneTextures)
{
	static uint32 BasePassLogCounter = 0;
	if ((BasePassLogCounter++ % 120u) == 0u)
	{
		UE_LOG(
			LogAIRenderingViewExt,
			Warning,
			TEXT("Entry: PostRenderBasePassDeferred_RenderThread called. SceneCapture=%d"),
			InView.bIsSceneCapture ? 1 : 0);
	}

	if (!ShouldOverrideForView(InView))
	{
		return;
	}

	const FSceneTexturesConfig& Config = FSceneTexturesConfig::Get();
	const FGBufferBindings& Bindings = Config.GBufferBindings[GBL_Default];
	const int32 GBufferCIndex = Bindings.GBufferC.Index;
	if (GBufferCIndex < 0 || GBufferCIndex >= RenderTargets.Output.Num())
	{
		if (AIRendering::CVarDebugLog.GetValueOnRenderThread() != 0)
		{
			UE_LOG(
				LogAIRenderingViewExt,
				Warning,
				TEXT("Skip override pass: invalid GBufferC index=%d, outputCount=%d"),
				GBufferCIndex,
				RenderTargets.Output.Num());
		}
		return;
	}

	FRDGTextureRef GBufferC = RenderTargets[GBufferCIndex].GetTexture();
	if (!GBufferC)
	{
		if (AIRendering::CVarDebugLog.GetValueOnRenderThread() != 0)
		{
			UE_LOG(LogAIRenderingViewExt, Warning, TEXT("Skip override pass: GBufferC texture is null"));
		}
		return;
	}

	const FIntRect ViewRect = InView.UnconstrainedViewRect;
	TShaderMapRef<FGBufferForceRedCS> ComputeShader(GetGlobalShaderMap(GMaxRHIFeatureLevel));

	FGBufferForceRedCS::FParameters* PassParameters = GraphBuilder.AllocParameters<FGBufferForceRedCS::FParameters>();
	PassParameters->ViewRectMin = ViewRect.Min;
	PassParameters->ViewRectMax = ViewRect.Max;
	PassParameters->RWGBufferC = GraphBuilder.CreateUAV(GBufferC);

	const FIntVector GroupCount = FComputeShaderUtils::GetGroupCount(ViewRect.Size(), FIntPoint(8, 8));
	FComputeShaderUtils::AddPass(
		GraphBuilder,
		RDG_EVENT_NAME("AIRendering.ForceRedBaseColor"),
		ERDGPassFlags::Compute | ERDGPassFlags::NeverCull,
		ComputeShader,
		PassParameters,
		GroupCount);

	if (AIRendering::CVarDebugLog.GetValueOnRenderThread() != 0)
	{
		UE_LOG(
			LogAIRenderingViewExt,
			Warning,
			TEXT("Submitted override pass. GBufferCIndex=%d viewSize=%dx%d"),
			GBufferCIndex,
			ViewRect.Width(),
			ViewRect.Height());
	}
}
