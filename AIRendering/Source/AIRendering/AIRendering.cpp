// Copyright Epic Games, Inc. All Rights Reserved.

#include "AIRendering.h"
#include "Engine/Engine.h"
#include "Misc/CoreDelegates.h"
#include "Modules/ModuleManager.h"
#include "Misc/Paths.h"
#include "SceneViewExtension.h"
#include "ShaderCore.h"
#include "AIRenderingViewExtension.h"

DEFINE_LOG_CATEGORY_STATIC(LogAIRenderingModule, Log, All);

IMPLEMENT_PRIMARY_GAME_MODULE(FAIRenderingModule, AIRendering, "AIRendering");

void FAIRenderingModule::StartupModule()
{
	const FString ShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Source/AIRendering/Shaders"));
	AddShaderSourceDirectoryMapping(TEXT("/AIRendering"), ShaderDirectory);
	UE_LOG(LogAIRenderingModule, Warning, TEXT("StartupModule: mapped shader dir to %s"), *ShaderDirectory);

	if (GEngine)
	{
		RegisterViewExtension();
	}
	else
	{
		PostEngineInitHandle = FCoreDelegates::OnPostEngineInit.AddRaw(this, &FAIRenderingModule::RegisterViewExtension);
		UE_LOG(LogAIRenderingModule, Warning, TEXT("StartupModule: GEngine not ready, deferring extension registration"));
	}
}

void FAIRenderingModule::ShutdownModule()
{
	if (PostEngineInitHandle.IsValid())
	{
		FCoreDelegates::OnPostEngineInit.Remove(PostEngineInitHandle);
		PostEngineInitHandle.Reset();
	}

	UE_LOG(LogAIRenderingModule, Warning, TEXT("ShutdownModule: resetting view extension"));
	ViewExtension.Reset();
}

void FAIRenderingModule::RegisterViewExtension()
{
	if (ViewExtension.IsValid())
	{
		UE_LOG(LogAIRenderingModule, Warning, TEXT("RegisterViewExtension: already valid, skipping"));
		return;
	}

	ViewExtension = FSceneViewExtensions::NewExtension<FAIRenderingViewExtension>();
	UE_LOG(LogAIRenderingModule, Warning, TEXT("RegisterViewExtension: created (valid=%d, GEngine=%d)"), ViewExtension.IsValid() ? 1 : 0, GEngine ? 1 : 0);
}
