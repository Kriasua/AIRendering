// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpoutReceiverComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpoutReceiverComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
SPOUT2_DX12_API UClass* Z_Construct_UClass_USpoutReceiverComponent();
SPOUT2_DX12_API UClass* Z_Construct_UClass_USpoutReceiverComponent_NoRegister();
SPOUT2_DX12_API UEnum* Z_Construct_UEnum_Spout2_DX12_ESpoutWorldBootstrapPolicy();
UPackage* Z_Construct_UPackage__Script_Spout2_DX12();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USpoutReceiverComponent Function GetAvailableSenders *********************
struct Z_Construct_UFunction_USpoutReceiverComponent_GetAvailableSenders_Statics
{
	struct SpoutReceiverComponent_eventGetAvailableSenders_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "Comment", "// Get a list of available Spout senders\n" },
		{ "ModuleRelativePath", "Public/SpoutReceiverComponent.h" },
		{ "ToolTip", "Get a list of available Spout senders" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpoutReceiverComponent_GetAvailableSenders_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpoutReceiverComponent_GetAvailableSenders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpoutReceiverComponent_eventGetAvailableSenders_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpoutReceiverComponent_GetAvailableSenders_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutReceiverComponent_GetAvailableSenders_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutReceiverComponent_GetAvailableSenders_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutReceiverComponent_GetAvailableSenders_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpoutReceiverComponent_GetAvailableSenders_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpoutReceiverComponent, nullptr, "GetAvailableSenders", Z_Construct_UFunction_USpoutReceiverComponent_GetAvailableSenders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutReceiverComponent_GetAvailableSenders_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpoutReceiverComponent_GetAvailableSenders_Statics::SpoutReceiverComponent_eventGetAvailableSenders_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutReceiverComponent_GetAvailableSenders_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpoutReceiverComponent_GetAvailableSenders_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USpoutReceiverComponent_GetAvailableSenders_Statics::SpoutReceiverComponent_eventGetAvailableSenders_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpoutReceiverComponent_GetAvailableSenders()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpoutReceiverComponent_GetAvailableSenders_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpoutReceiverComponent::execGetAvailableSenders)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetAvailableSenders();
	P_NATIVE_END;
}
// ********** End Class USpoutReceiverComponent Function GetAvailableSenders ***********************

// ********** Begin Class USpoutReceiverComponent Function IsConnected *****************************
struct Z_Construct_UFunction_USpoutReceiverComponent_IsConnected_Statics
{
	struct SpoutReceiverComponent_eventIsConnected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "Comment", "// Check if currently connected to a sender\n" },
		{ "ModuleRelativePath", "Public/SpoutReceiverComponent.h" },
		{ "ToolTip", "Check if currently connected to a sender" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpoutReceiverComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpoutReceiverComponent_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpoutReceiverComponent_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpoutReceiverComponent_eventIsConnected_Parms), &Z_Construct_UFunction_USpoutReceiverComponent_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpoutReceiverComponent_IsConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpoutReceiverComponent_IsConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutReceiverComponent_IsConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpoutReceiverComponent_IsConnected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpoutReceiverComponent, nullptr, "IsConnected", Z_Construct_UFunction_USpoutReceiverComponent_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutReceiverComponent_IsConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpoutReceiverComponent_IsConnected_Statics::SpoutReceiverComponent_eventIsConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutReceiverComponent_IsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpoutReceiverComponent_IsConnected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USpoutReceiverComponent_IsConnected_Statics::SpoutReceiverComponent_eventIsConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpoutReceiverComponent_IsConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpoutReceiverComponent_IsConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpoutReceiverComponent::execIsConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsConnected();
	P_NATIVE_END;
}
// ********** End Class USpoutReceiverComponent Function IsConnected *******************************

// ********** Begin Class USpoutReceiverComponent Function StartReceiving **************************
struct Z_Construct_UFunction_USpoutReceiverComponent_StartReceiving_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "Comment", "// Manually start the receiver\n" },
		{ "ModuleRelativePath", "Public/SpoutReceiverComponent.h" },
		{ "ToolTip", "Manually start the receiver" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpoutReceiverComponent_StartReceiving_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpoutReceiverComponent, nullptr, "StartReceiving", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutReceiverComponent_StartReceiving_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpoutReceiverComponent_StartReceiving_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USpoutReceiverComponent_StartReceiving()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpoutReceiverComponent_StartReceiving_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpoutReceiverComponent::execStartReceiving)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartReceiving();
	P_NATIVE_END;
}
// ********** End Class USpoutReceiverComponent Function StartReceiving ****************************

// ********** Begin Class USpoutReceiverComponent Function StopReceiving ***************************
struct Z_Construct_UFunction_USpoutReceiverComponent_StopReceiving_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spout" },
		{ "Comment", "// Manually stop the receiver\n" },
		{ "ModuleRelativePath", "Public/SpoutReceiverComponent.h" },
		{ "ToolTip", "Manually stop the receiver" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpoutReceiverComponent_StopReceiving_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpoutReceiverComponent, nullptr, "StopReceiving", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpoutReceiverComponent_StopReceiving_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpoutReceiverComponent_StopReceiving_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USpoutReceiverComponent_StopReceiving()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpoutReceiverComponent_StopReceiving_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpoutReceiverComponent::execStopReceiving)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopReceiving();
	P_NATIVE_END;
}
// ********** End Class USpoutReceiverComponent Function StopReceiving *****************************

// ********** Begin Class USpoutReceiverComponent **************************************************
void USpoutReceiverComponent::StaticRegisterNativesUSpoutReceiverComponent()
{
	UClass* Class = USpoutReceiverComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAvailableSenders", &USpoutReceiverComponent::execGetAvailableSenders },
		{ "IsConnected", &USpoutReceiverComponent::execIsConnected },
		{ "StartReceiving", &USpoutReceiverComponent::execStartReceiving },
		{ "StopReceiving", &USpoutReceiverComponent::execStopReceiving },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USpoutReceiverComponent;
UClass* USpoutReceiverComponent::GetPrivateStaticClass()
{
	using TClass = USpoutReceiverComponent;
	if (!Z_Registration_Info_UClass_USpoutReceiverComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpoutReceiverComponent"),
			Z_Registration_Info_UClass_USpoutReceiverComponent.InnerSingleton,
			StaticRegisterNativesUSpoutReceiverComponent,
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
	return Z_Registration_Info_UClass_USpoutReceiverComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USpoutReceiverComponent_NoRegister()
{
	return USpoutReceiverComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USpoutReceiverComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Spout" },
		{ "IncludePath", "SpoutReceiverComponent.h" },
		{ "ModuleRelativePath", "Public/SpoutReceiverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStart_MetaData[] = {
		{ "Category", "Spout Receiver" },
		{ "ModuleRelativePath", "Public/SpoutReceiverComponent.h" },
		{ "ToolTip", "If enabled, the receiver starts automatically when the component becomes active in a supported world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputRenderTarget_MetaData[] = {
		{ "Category", "Spout Receiver" },
		{ "ModuleRelativePath", "Public/SpoutReceiverComponent.h" },
		{ "ToolTip", "The render target that received frames are copied into for use by materials, UI, or gameplay logic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetFPS_MetaData[] = {
		{ "Category", "Spout Receiver" },
		{ "ModuleRelativePath", "Public/SpoutReceiverComponent.h" },
		{ "ToolTip", "How often the receiver pulls frames from Spout. Set to 0 to receive one frame and stop automatically." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpoutSenderName_MetaData[] = {
		{ "Category", "Spout Receiver" },
		{ "ModuleRelativePath", "Public/SpoutReceiverComponent.h" },
		{ "ToolTip", "The specific Spout sender name to connect to. Leave empty to connect to the first available sender." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDoubleBuffer_MetaData[] = {
		{ "Category", "Spout Receiver" },
		{ "ModuleRelativePath", "Public/SpoutReceiverComponent.h" },
		{ "ToolTip", "Uses internal double buffering so the output render target stays stable while new frames are copied in. This can improve smoothness at the cost of memory and latency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupPolicy_MetaData[] = {
		{ "Category", "Spout Receiver" },
		{ "ModuleRelativePath", "Public/SpoutReceiverComponent.h" },
		{ "ToolTip", "Controls which world types are allowed to auto-start or editor-start this receiver component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InternalRT_A_MetaData[] = {
		{ "Comment", "// Internal render targets for receiving and copying (when using stable user RT option).\n" },
		{ "ModuleRelativePath", "Public/SpoutReceiverComponent.h" },
		{ "ToolTip", "Internal render targets for receiving and copying (when using stable user RT option)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InternalRT_B_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpoutReceiverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopiesPerSecond_MetaData[] = {
		{ "Category", "Spout Receiver|Stats" },
		{ "ModuleRelativePath", "Public/SpoutReceiverComponent.h" },
		{ "ToolTip", "Average number of copy operations completed per second over the current stats window." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flush1PerSecond_MetaData[] = {
		{ "Category", "Spout Receiver|Stats" },
		{ "ModuleRelativePath", "Public/SpoutReceiverComponent.h" },
		{ "ToolTip", "Average number of first-stage flush operations per second over the current stats window." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlushPerSecond_MetaData[] = {
		{ "Category", "Spout Receiver|Stats" },
		{ "ModuleRelativePath", "Public/SpoutReceiverComponent.h" },
		{ "ToolTip", "Average number of flush operations per second over the current stats window." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReconnectCount_MetaData[] = {
		{ "Category", "Spout Receiver|Stats" },
		{ "ModuleRelativePath", "Public/SpoutReceiverComponent.h" },
		{ "ToolTip", "How many times the receiver had to reconnect to the sender during this session." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MissedFrames_MetaData[] = {
		{ "Category", "Spout Receiver|Stats" },
		{ "ModuleRelativePath", "Public/SpoutReceiverComponent.h" },
		{ "ToolTip", "How many frames were missed while receiving during this session." },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputRenderTarget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetFPS;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpoutSenderName;
	static void NewProp_bUseDoubleBuffer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDoubleBuffer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StartupPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StartupPolicy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InternalRT_A;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InternalRT_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CopiesPerSecond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Flush1PerSecond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlushPerSecond;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReconnectCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MissedFrames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpoutReceiverComponent_GetAvailableSenders, "GetAvailableSenders" }, // 3316514310
		{ &Z_Construct_UFunction_USpoutReceiverComponent_IsConnected, "IsConnected" }, // 3565444728
		{ &Z_Construct_UFunction_USpoutReceiverComponent_StartReceiving, "StartReceiving" }, // 3004370401
		{ &Z_Construct_UFunction_USpoutReceiverComponent_StopReceiving, "StopReceiving" }, // 2833785950
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpoutReceiverComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_bAutoStart_SetBit(void* Obj)
{
	((USpoutReceiverComponent*)Obj)->bAutoStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_bAutoStart = { "bAutoStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USpoutReceiverComponent), &Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_bAutoStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStart_MetaData), NewProp_bAutoStart_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_OutputRenderTarget = { "OutputRenderTarget", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpoutReceiverComponent, OutputRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputRenderTarget_MetaData), NewProp_OutputRenderTarget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_TargetFPS = { "TargetFPS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpoutReceiverComponent, TargetFPS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetFPS_MetaData), NewProp_TargetFPS_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_SpoutSenderName = { "SpoutSenderName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpoutReceiverComponent, SpoutSenderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpoutSenderName_MetaData), NewProp_SpoutSenderName_MetaData) };
void Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_bUseDoubleBuffer_SetBit(void* Obj)
{
	((USpoutReceiverComponent*)Obj)->bUseDoubleBuffer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_bUseDoubleBuffer = { "bUseDoubleBuffer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USpoutReceiverComponent), &Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_bUseDoubleBuffer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDoubleBuffer_MetaData), NewProp_bUseDoubleBuffer_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_StartupPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_StartupPolicy = { "StartupPolicy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpoutReceiverComponent, StartupPolicy), Z_Construct_UEnum_Spout2_DX12_ESpoutWorldBootstrapPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupPolicy_MetaData), NewProp_StartupPolicy_MetaData) }; // 1439667403
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_InternalRT_A = { "InternalRT_A", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpoutReceiverComponent, InternalRT_A), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InternalRT_A_MetaData), NewProp_InternalRT_A_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_InternalRT_B = { "InternalRT_B", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpoutReceiverComponent, InternalRT_B), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InternalRT_B_MetaData), NewProp_InternalRT_B_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_CopiesPerSecond = { "CopiesPerSecond", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpoutReceiverComponent, CopiesPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopiesPerSecond_MetaData), NewProp_CopiesPerSecond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_Flush1PerSecond = { "Flush1PerSecond", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpoutReceiverComponent, Flush1PerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flush1PerSecond_MetaData), NewProp_Flush1PerSecond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_FlushPerSecond = { "FlushPerSecond", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpoutReceiverComponent, FlushPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlushPerSecond_MetaData), NewProp_FlushPerSecond_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_ReconnectCount = { "ReconnectCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpoutReceiverComponent, ReconnectCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReconnectCount_MetaData), NewProp_ReconnectCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_MissedFrames = { "MissedFrames", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpoutReceiverComponent, MissedFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MissedFrames_MetaData), NewProp_MissedFrames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpoutReceiverComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_bAutoStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_OutputRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_TargetFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_SpoutSenderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_bUseDoubleBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_StartupPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_StartupPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_InternalRT_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_InternalRT_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_CopiesPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_Flush1PerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_FlushPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_ReconnectCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpoutReceiverComponent_Statics::NewProp_MissedFrames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpoutReceiverComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpoutReceiverComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Spout2_DX12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpoutReceiverComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpoutReceiverComponent_Statics::ClassParams = {
	&USpoutReceiverComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USpoutReceiverComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USpoutReceiverComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpoutReceiverComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USpoutReceiverComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpoutReceiverComponent()
{
	if (!Z_Registration_Info_UClass_USpoutReceiverComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpoutReceiverComponent.OuterSingleton, Z_Construct_UClass_USpoutReceiverComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpoutReceiverComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpoutReceiverComponent);
// ********** End Class USpoutReceiverComponent ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Packaged_UE_Plugins_Spout_v2_0_1_Spout2_DX12_UE5_6_v2_0_1_HostProject_Plugins_Spout2_DX12_Source_Spout2_DX12_Public_SpoutReceiverComponent_h__Script_Spout2_DX12_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpoutReceiverComponent, USpoutReceiverComponent::StaticClass, TEXT("USpoutReceiverComponent"), &Z_Registration_Info_UClass_USpoutReceiverComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpoutReceiverComponent), 1629488286U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Packaged_UE_Plugins_Spout_v2_0_1_Spout2_DX12_UE5_6_v2_0_1_HostProject_Plugins_Spout2_DX12_Source_Spout2_DX12_Public_SpoutReceiverComponent_h__Script_Spout2_DX12_1916437751(TEXT("/Script/Spout2_DX12"),
	Z_CompiledInDeferFile_FID_Packaged_UE_Plugins_Spout_v2_0_1_Spout2_DX12_UE5_6_v2_0_1_HostProject_Plugins_Spout2_DX12_Source_Spout2_DX12_Public_SpoutReceiverComponent_h__Script_Spout2_DX12_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Packaged_UE_Plugins_Spout_v2_0_1_Spout2_DX12_UE5_6_v2_0_1_HostProject_Plugins_Spout2_DX12_Source_Spout2_DX12_Public_SpoutReceiverComponent_h__Script_Spout2_DX12_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
