// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpoutSenderComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpoutSenderComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
SPOUT2_DX12_API UClass* Z_Construct_UClass_USpoutSenderComponent();
SPOUT2_DX12_API UClass* Z_Construct_UClass_USpoutSenderComponent_NoRegister();
SPOUT2_DX12_API UEnum* Z_Construct_UEnum_Spout2_DX12_ESpoutSenderSourceType();
SPOUT2_DX12_API UEnum* Z_Construct_UEnum_Spout2_DX12_ESpoutWorldBootstrapPolicy();
UPackage* Z_Construct_UPackage__Script_Spout2_DX12();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USpoutSenderComponent Function ChangeRenderTarget ************************
struct Z_Construct_UFunction_USpoutSenderComponent_ChangeRenderTarget_Statics
{
	struct SpoutSenderComponent_eventChangeRenderTarget_Parms
	{
		UTextureRenderTarget2D* NewRenderTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/SpoutSenderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewRenderTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpoutSenderComponent_ChangeRenderTarget_Statics::NewProp_NewRenderTarget = { "NewRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpoutSenderComponent_eventChangeRenderTarget_Parms, NewRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpoutSenderComponent_ChangeRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutSenderComponent_ChangeRenderTarget_Statics::NewProp_NewRenderTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutSenderComponent_ChangeRenderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpoutSenderComponent_ChangeRenderTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpoutSenderComponent, nullptr, "ChangeRenderTarget", Z_Construct_UFunction_USpoutSenderComponent_ChangeRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutSenderComponent_ChangeRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpoutSenderComponent_ChangeRenderTarget_Statics::SpoutSenderComponent_eventChangeRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutSenderComponent_ChangeRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpoutSenderComponent_ChangeRenderTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USpoutSenderComponent_ChangeRenderTarget_Statics::SpoutSenderComponent_eventChangeRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpoutSenderComponent_ChangeRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpoutSenderComponent_ChangeRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpoutSenderComponent::execChangeRenderTarget)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_NewRenderTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeRenderTarget(Z_Param_NewRenderTarget);
	P_NATIVE_END;
}
// ********** End Class USpoutSenderComponent Function ChangeRenderTarget **************************

// ********** Begin Class USpoutSenderComponent Function SetTickAfterActor *************************
struct Z_Construct_UFunction_USpoutSenderComponent_SetTickAfterActor_Statics
{
	struct SpoutSenderComponent_eventSetTickAfterActor_Parms
	{
		AActor* NewTickAfterActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/SpoutSenderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTickAfterActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpoutSenderComponent_SetTickAfterActor_Statics::NewProp_NewTickAfterActor = { "NewTickAfterActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpoutSenderComponent_eventSetTickAfterActor_Parms, NewTickAfterActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpoutSenderComponent_SetTickAfterActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutSenderComponent_SetTickAfterActor_Statics::NewProp_NewTickAfterActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutSenderComponent_SetTickAfterActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpoutSenderComponent_SetTickAfterActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpoutSenderComponent, nullptr, "SetTickAfterActor", Z_Construct_UFunction_USpoutSenderComponent_SetTickAfterActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutSenderComponent_SetTickAfterActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpoutSenderComponent_SetTickAfterActor_Statics::SpoutSenderComponent_eventSetTickAfterActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutSenderComponent_SetTickAfterActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpoutSenderComponent_SetTickAfterActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USpoutSenderComponent_SetTickAfterActor_Statics::SpoutSenderComponent_eventSetTickAfterActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpoutSenderComponent_SetTickAfterActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpoutSenderComponent_SetTickAfterActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpoutSenderComponent::execSetTickAfterActor)
{
	P_GET_OBJECT(AActor,Z_Param_NewTickAfterActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTickAfterActor(Z_Param_NewTickAfterActor);
	P_NATIVE_END;
}
// ********** End Class USpoutSenderComponent Function SetTickAfterActor ***************************

// ********** Begin Class USpoutSenderComponent Function StartBroadcast ****************************
struct Z_Construct_UFunction_USpoutSenderComponent_StartBroadcast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/SpoutSenderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpoutSenderComponent_StartBroadcast_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpoutSenderComponent, nullptr, "StartBroadcast", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutSenderComponent_StartBroadcast_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpoutSenderComponent_StartBroadcast_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USpoutSenderComponent_StartBroadcast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpoutSenderComponent_StartBroadcast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpoutSenderComponent::execStartBroadcast)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartBroadcast();
	P_NATIVE_END;
}
// ********** End Class USpoutSenderComponent Function StartBroadcast ******************************

// ********** Begin Class USpoutSenderComponent Function StartBroadcastFromRenderTarget ************
struct Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget_Statics
{
	struct SpoutSenderComponent_eventStartBroadcastFromRenderTarget_Parms
	{
		UTextureRenderTarget2D* RenderTarget;
		FString SenderName;
		int32 FPS;
		bool bEnableDoubleBuffer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "CPP_Default_bEnableDoubleBuffer", "false" },
		{ "CPP_Default_FPS", "60" },
		{ "CPP_Default_SenderName", "Sender Component" },
		{ "ModuleRelativePath", "Public/SpoutSenderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SenderName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FPS;
	static void NewProp_bEnableDoubleBuffer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDoubleBuffer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpoutSenderComponent_eventStartBroadcastFromRenderTarget_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget_Statics::NewProp_SenderName = { "SenderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpoutSenderComponent_eventStartBroadcastFromRenderTarget_Parms, SenderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenderName_MetaData), NewProp_SenderName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget_Statics::NewProp_FPS = { "FPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpoutSenderComponent_eventStartBroadcastFromRenderTarget_Parms, FPS), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget_Statics::NewProp_bEnableDoubleBuffer_SetBit(void* Obj)
{
	((SpoutSenderComponent_eventStartBroadcastFromRenderTarget_Parms*)Obj)->bEnableDoubleBuffer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget_Statics::NewProp_bEnableDoubleBuffer = { "bEnableDoubleBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpoutSenderComponent_eventStartBroadcastFromRenderTarget_Parms), &Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget_Statics::NewProp_bEnableDoubleBuffer_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget_Statics::NewProp_RenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget_Statics::NewProp_SenderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget_Statics::NewProp_FPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget_Statics::NewProp_bEnableDoubleBuffer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpoutSenderComponent, nullptr, "StartBroadcastFromRenderTarget", Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget_Statics::SpoutSenderComponent_eventStartBroadcastFromRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget_Statics::SpoutSenderComponent_eventStartBroadcastFromRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpoutSenderComponent::execStartBroadcastFromRenderTarget)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
	P_GET_PROPERTY(FStrProperty,Z_Param_SenderName);
	P_GET_PROPERTY(FIntProperty,Z_Param_FPS);
	P_GET_UBOOL(Z_Param_bEnableDoubleBuffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartBroadcastFromRenderTarget(Z_Param_RenderTarget,Z_Param_SenderName,Z_Param_FPS,Z_Param_bEnableDoubleBuffer);
	P_NATIVE_END;
}
// ********** End Class USpoutSenderComponent Function StartBroadcastFromRenderTarget **************

// ********** Begin Class USpoutSenderComponent Function StartBroadcastGameViewport ****************
struct Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastGameViewport_Statics
{
	struct SpoutSenderComponent_eventStartBroadcastGameViewport_Parms
	{
		FString SenderName;
		int32 FPS;
		bool bEnableDoubleBuffer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "CPP_Default_bEnableDoubleBuffer", "false" },
		{ "CPP_Default_FPS", "60" },
		{ "CPP_Default_SenderName", "Sender Component" },
		{ "ModuleRelativePath", "Public/SpoutSenderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SenderName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FPS;
	static void NewProp_bEnableDoubleBuffer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDoubleBuffer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastGameViewport_Statics::NewProp_SenderName = { "SenderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpoutSenderComponent_eventStartBroadcastGameViewport_Parms, SenderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenderName_MetaData), NewProp_SenderName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastGameViewport_Statics::NewProp_FPS = { "FPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpoutSenderComponent_eventStartBroadcastGameViewport_Parms, FPS), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastGameViewport_Statics::NewProp_bEnableDoubleBuffer_SetBit(void* Obj)
{
	((SpoutSenderComponent_eventStartBroadcastGameViewport_Parms*)Obj)->bEnableDoubleBuffer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastGameViewport_Statics::NewProp_bEnableDoubleBuffer = { "bEnableDoubleBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpoutSenderComponent_eventStartBroadcastGameViewport_Parms), &Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastGameViewport_Statics::NewProp_bEnableDoubleBuffer_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastGameViewport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastGameViewport_Statics::NewProp_SenderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastGameViewport_Statics::NewProp_FPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastGameViewport_Statics::NewProp_bEnableDoubleBuffer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastGameViewport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastGameViewport_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpoutSenderComponent, nullptr, "StartBroadcastGameViewport", Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastGameViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastGameViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastGameViewport_Statics::SpoutSenderComponent_eventStartBroadcastGameViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastGameViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastGameViewport_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastGameViewport_Statics::SpoutSenderComponent_eventStartBroadcastGameViewport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastGameViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastGameViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpoutSenderComponent::execStartBroadcastGameViewport)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SenderName);
	P_GET_PROPERTY(FIntProperty,Z_Param_FPS);
	P_GET_UBOOL(Z_Param_bEnableDoubleBuffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartBroadcastGameViewport(Z_Param_SenderName,Z_Param_FPS,Z_Param_bEnableDoubleBuffer);
	P_NATIVE_END;
}
// ********** End Class USpoutSenderComponent Function StartBroadcastGameViewport ******************

// ********** Begin Class USpoutSenderComponent Function StopBroadcast *****************************
struct Z_Construct_UFunction_USpoutSenderComponent_StopBroadcast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/SpoutSenderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpoutSenderComponent_StopBroadcast_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpoutSenderComponent, nullptr, "StopBroadcast", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutSenderComponent_StopBroadcast_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpoutSenderComponent_StopBroadcast_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USpoutSenderComponent_StopBroadcast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpoutSenderComponent_StopBroadcast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpoutSenderComponent::execStopBroadcast)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopBroadcast();
	P_NATIVE_END;
}
// ********** End Class USpoutSenderComponent Function StopBroadcast *******************************

// ********** Begin Class USpoutSenderComponent ****************************************************
void USpoutSenderComponent::StaticRegisterNativesUSpoutSenderComponent()
{
	UClass* Class = USpoutSenderComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeRenderTarget", &USpoutSenderComponent::execChangeRenderTarget },
		{ "SetTickAfterActor", &USpoutSenderComponent::execSetTickAfterActor },
		{ "StartBroadcast", &USpoutSenderComponent::execStartBroadcast },
		{ "StartBroadcastFromRenderTarget", &USpoutSenderComponent::execStartBroadcastFromRenderTarget },
		{ "StartBroadcastGameViewport", &USpoutSenderComponent::execStartBroadcastGameViewport },
		{ "StopBroadcast", &USpoutSenderComponent::execStopBroadcast },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USpoutSenderComponent;
UClass* USpoutSenderComponent::GetPrivateStaticClass()
{
	using TClass = USpoutSenderComponent;
	if (!Z_Registration_Info_UClass_USpoutSenderComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpoutSenderComponent"),
			Z_Registration_Info_UClass_USpoutSenderComponent.InnerSingleton,
			StaticRegisterNativesUSpoutSenderComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_USpoutSenderComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USpoutSenderComponent_NoRegister()
{
	return USpoutSenderComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USpoutSenderComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Spout" },
		{ "IncludePath", "SpoutSenderComponent.h" },
		{ "ModuleRelativePath", "Public/SpoutSenderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Auto_Start_MetaData[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/SpoutSenderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, the sender starts automatically when the component becomes active in a supported world." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSenderName_MetaData[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/SpoutSenderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The published Spout sender name. Receivers use this name to find and connect to this sender." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/SpoutSenderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Selects which Unreal source this component sends to Spout: a render target, the game viewport, or the editor viewport." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRenderTarget_MetaData[] = {
		{ "Category", "Spout" },
		{ "EditCondition", "SourceType == ESpoutSenderSourceType::RenderTarget" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/SpoutSenderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The render target to send when Source Type is set to Render Target." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BroadcastFPS_MetaData[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/SpoutSenderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How often the sender pushes frames. Set to 0 to disable throttling and tick every frame." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDoubleBuffer_MetaData[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/SpoutSenderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uses two staging buffers instead of one. This can improve frame pacing at the cost of more GPU memory and latency." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupPolicy_MetaData[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/SpoutSenderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls which world types are allowed to auto-start or editor-start this sender component. Runtime Blueprint start helpers can override this internally." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickAfterActor_MetaData[] = {
		{ "Category", "Spout" },
		{ "ModuleRelativePath", "Public/SpoutSenderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional actor that this component should tick after. Use this when the source texture is updated by another actor earlier in the frame." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_Auto_Start_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Auto_Start;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentSenderName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentRenderTarget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BroadcastFPS;
	static void NewProp_bUseDoubleBuffer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDoubleBuffer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StartupPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StartupPolicy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TickAfterActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpoutSenderComponent_ChangeRenderTarget, "ChangeRenderTarget" }, // 1720779784
		{ &Z_Construct_UFunction_USpoutSenderComponent_SetTickAfterActor, "SetTickAfterActor" }, // 2472073287
		{ &Z_Construct_UFunction_USpoutSenderComponent_StartBroadcast, "StartBroadcast" }, // 1048251587
		{ &Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastFromRenderTarget, "StartBroadcastFromRenderTarget" }, // 1142898610
		{ &Z_Construct_UFunction_USpoutSenderComponent_StartBroadcastGameViewport, "StartBroadcastGameViewport" }, // 2583147782
		{ &Z_Construct_UFunction_USpoutSenderComponent_StopBroadcast, "StopBroadcast" }, // 1608693819
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpoutSenderComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_Auto_Start_SetBit(void* Obj)
{
	((USpoutSenderComponent*)Obj)->Auto_Start = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_Auto_Start = { "Auto_Start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USpoutSenderComponent), &Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_Auto_Start_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Auto_Start_MetaData), NewProp_Auto_Start_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_CurrentSenderName = { "CurrentSenderName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpoutSenderComponent, CurrentSenderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSenderName_MetaData), NewProp_CurrentSenderName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_SourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpoutSenderComponent, SourceType), Z_Construct_UEnum_Spout2_DX12_ESpoutSenderSourceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceType_MetaData), NewProp_SourceType_MetaData) }; // 1650812349
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_CurrentRenderTarget = { "CurrentRenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpoutSenderComponent, CurrentRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRenderTarget_MetaData), NewProp_CurrentRenderTarget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_BroadcastFPS = { "BroadcastFPS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpoutSenderComponent, BroadcastFPS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BroadcastFPS_MetaData), NewProp_BroadcastFPS_MetaData) };
void Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_bUseDoubleBuffer_SetBit(void* Obj)
{
	((USpoutSenderComponent*)Obj)->bUseDoubleBuffer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_bUseDoubleBuffer = { "bUseDoubleBuffer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USpoutSenderComponent), &Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_bUseDoubleBuffer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDoubleBuffer_MetaData), NewProp_bUseDoubleBuffer_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_StartupPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_StartupPolicy = { "StartupPolicy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpoutSenderComponent, StartupPolicy), Z_Construct_UEnum_Spout2_DX12_ESpoutWorldBootstrapPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupPolicy_MetaData), NewProp_StartupPolicy_MetaData) }; // 1439667403
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_TickAfterActor = { "TickAfterActor", nullptr, (EPropertyFlags)0x0114000000000805, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpoutSenderComponent, TickAfterActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickAfterActor_MetaData), NewProp_TickAfterActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpoutSenderComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_Auto_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_CurrentSenderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_SourceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_SourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_CurrentRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_BroadcastFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_bUseDoubleBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_StartupPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_StartupPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutSenderComponent_Statics::NewProp_TickAfterActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpoutSenderComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpoutSenderComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Spout2_DX12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpoutSenderComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpoutSenderComponent_Statics::ClassParams = {
	&USpoutSenderComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USpoutSenderComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USpoutSenderComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpoutSenderComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USpoutSenderComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpoutSenderComponent()
{
	if (!Z_Registration_Info_UClass_USpoutSenderComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpoutSenderComponent.OuterSingleton, Z_Construct_UClass_USpoutSenderComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpoutSenderComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpoutSenderComponent);
USpoutSenderComponent::~USpoutSenderComponent() {}
// ********** End Class USpoutSenderComponent ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MyResearch_UE_Projects_AIRendering_AIRendering_Plugins_Spout2_DX12_UE5_6_v2_0_1_Source_Spout2_DX12_Public_SpoutSenderComponent_h__Script_Spout2_DX12_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpoutSenderComponent, USpoutSenderComponent::StaticClass, TEXT("USpoutSenderComponent"), &Z_Registration_Info_UClass_USpoutSenderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpoutSenderComponent), 4186638152U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyResearch_UE_Projects_AIRendering_AIRendering_Plugins_Spout2_DX12_UE5_6_v2_0_1_Source_Spout2_DX12_Public_SpoutSenderComponent_h__Script_Spout2_DX12_1106436011(TEXT("/Script/Spout2_DX12"),
	Z_CompiledInDeferFile_FID_MyResearch_UE_Projects_AIRendering_AIRendering_Plugins_Spout2_DX12_UE5_6_v2_0_1_Source_Spout2_DX12_Public_SpoutSenderComponent_h__Script_Spout2_DX12_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyResearch_UE_Projects_AIRendering_AIRendering_Plugins_Spout2_DX12_UE5_6_v2_0_1_Source_Spout2_DX12_Public_SpoutSenderComponent_h__Script_Spout2_DX12_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
