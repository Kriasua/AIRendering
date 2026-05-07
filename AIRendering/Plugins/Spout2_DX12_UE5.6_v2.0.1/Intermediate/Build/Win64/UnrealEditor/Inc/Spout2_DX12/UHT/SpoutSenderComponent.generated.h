// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpoutSenderComponent.h"

#ifdef SPOUT2_DX12_SpoutSenderComponent_generated_h
#error "SpoutSenderComponent.generated.h already included, missing '#pragma once' in SpoutSenderComponent.h"
#endif
#define SPOUT2_DX12_SpoutSenderComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UTextureRenderTarget2D;

// ********** Begin Class USpoutSenderComponent ****************************************************
#define FID_MyResearch_UE_Projects_AIRendering_AIRendering_Plugins_Spout2_DX12_UE5_6_v2_0_1_Source_Spout2_DX12_Public_SpoutSenderComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTickAfterActor); \
	DECLARE_FUNCTION(execChangeRenderTarget); \
	DECLARE_FUNCTION(execStopBroadcast); \
	DECLARE_FUNCTION(execStartBroadcast); \
	DECLARE_FUNCTION(execStartBroadcastGameViewport); \
	DECLARE_FUNCTION(execStartBroadcastFromRenderTarget);


SPOUT2_DX12_API UClass* Z_Construct_UClass_USpoutSenderComponent_NoRegister();

#define FID_MyResearch_UE_Projects_AIRendering_AIRendering_Plugins_Spout2_DX12_UE5_6_v2_0_1_Source_Spout2_DX12_Public_SpoutSenderComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpoutSenderComponent(); \
	friend struct Z_Construct_UClass_USpoutSenderComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPOUT2_DX12_API UClass* Z_Construct_UClass_USpoutSenderComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USpoutSenderComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Spout2_DX12"), Z_Construct_UClass_USpoutSenderComponent_NoRegister) \
	DECLARE_SERIALIZER(USpoutSenderComponent)


#define FID_MyResearch_UE_Projects_AIRendering_AIRendering_Plugins_Spout2_DX12_UE5_6_v2_0_1_Source_Spout2_DX12_Public_SpoutSenderComponent_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpoutSenderComponent(USpoutSenderComponent&&) = delete; \
	USpoutSenderComponent(const USpoutSenderComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpoutSenderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpoutSenderComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpoutSenderComponent) \
	NO_API virtual ~USpoutSenderComponent();


#define FID_MyResearch_UE_Projects_AIRendering_AIRendering_Plugins_Spout2_DX12_UE5_6_v2_0_1_Source_Spout2_DX12_Public_SpoutSenderComponent_h_22_PROLOG
#define FID_MyResearch_UE_Projects_AIRendering_AIRendering_Plugins_Spout2_DX12_UE5_6_v2_0_1_Source_Spout2_DX12_Public_SpoutSenderComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyResearch_UE_Projects_AIRendering_AIRendering_Plugins_Spout2_DX12_UE5_6_v2_0_1_Source_Spout2_DX12_Public_SpoutSenderComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyResearch_UE_Projects_AIRendering_AIRendering_Plugins_Spout2_DX12_UE5_6_v2_0_1_Source_Spout2_DX12_Public_SpoutSenderComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_MyResearch_UE_Projects_AIRendering_AIRendering_Plugins_Spout2_DX12_UE5_6_v2_0_1_Source_Spout2_DX12_Public_SpoutSenderComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpoutSenderComponent;

// ********** End Class USpoutSenderComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyResearch_UE_Projects_AIRendering_AIRendering_Plugins_Spout2_DX12_UE5_6_v2_0_1_Source_Spout2_DX12_Public_SpoutSenderComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
