// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpoutSenderSource.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpoutSenderSource() {}

// ********** Begin Cross Module References ********************************************************
SPOUT2_DX12_API UEnum* Z_Construct_UEnum_Spout2_DX12_ESpoutSenderSourceType();
UPackage* Z_Construct_UPackage__Script_Spout2_DX12();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESpoutSenderSourceType ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpoutSenderSourceType;
static UEnum* ESpoutSenderSourceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpoutSenderSourceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpoutSenderSourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Spout2_DX12_ESpoutSenderSourceType, (UObject*)Z_Construct_UPackage__Script_Spout2_DX12(), TEXT("ESpoutSenderSourceType"));
	}
	return Z_Registration_Info_UEnum_ESpoutSenderSourceType.OuterSingleton;
}
template<> SPOUT2_DX12_API UEnum* StaticEnum<ESpoutSenderSourceType>()
{
	return ESpoutSenderSourceType_StaticEnum();
}
struct Z_Construct_UEnum_Spout2_DX12_ESpoutSenderSourceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EditorViewport.DisplayName", "Editor Viewport" },
		{ "EditorViewport.Name", "ESpoutSenderSourceType::EditorViewport" },
		{ "GameViewport.DisplayName", "Game Viewport" },
		{ "GameViewport.Name", "ESpoutSenderSourceType::GameViewport" },
		{ "ModuleRelativePath", "Public/SpoutSenderSource.h" },
		{ "RenderTarget.DisplayName", "Render Target" },
		{ "RenderTarget.Name", "ESpoutSenderSourceType::RenderTarget" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpoutSenderSourceType::RenderTarget", (int64)ESpoutSenderSourceType::RenderTarget },
		{ "ESpoutSenderSourceType::GameViewport", (int64)ESpoutSenderSourceType::GameViewport },
		{ "ESpoutSenderSourceType::EditorViewport", (int64)ESpoutSenderSourceType::EditorViewport },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Spout2_DX12_ESpoutSenderSourceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Spout2_DX12,
	nullptr,
	"ESpoutSenderSourceType",
	"ESpoutSenderSourceType",
	Z_Construct_UEnum_Spout2_DX12_ESpoutSenderSourceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Spout2_DX12_ESpoutSenderSourceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Spout2_DX12_ESpoutSenderSourceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Spout2_DX12_ESpoutSenderSourceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Spout2_DX12_ESpoutSenderSourceType()
{
	if (!Z_Registration_Info_UEnum_ESpoutSenderSourceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpoutSenderSourceType.InnerSingleton, Z_Construct_UEnum_Spout2_DX12_ESpoutSenderSourceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpoutSenderSourceType.InnerSingleton;
}
// ********** End Enum ESpoutSenderSourceType ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MyResearch_UE_Projects_AIRendering_AIRendering_Plugins_Spout2_DX12_UE5_6_v2_0_1_Source_Spout2_DX12_Public_SpoutSenderSource_h__Script_Spout2_DX12_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESpoutSenderSourceType_StaticEnum, TEXT("ESpoutSenderSourceType"), &Z_Registration_Info_UEnum_ESpoutSenderSourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1650812349U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyResearch_UE_Projects_AIRendering_AIRendering_Plugins_Spout2_DX12_UE5_6_v2_0_1_Source_Spout2_DX12_Public_SpoutSenderSource_h__Script_Spout2_DX12_325468210(TEXT("/Script/Spout2_DX12"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MyResearch_UE_Projects_AIRendering_AIRendering_Plugins_Spout2_DX12_UE5_6_v2_0_1_Source_Spout2_DX12_Public_SpoutSenderSource_h__Script_Spout2_DX12_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyResearch_UE_Projects_AIRendering_AIRendering_Plugins_Spout2_DX12_UE5_6_v2_0_1_Source_Spout2_DX12_Public_SpoutSenderSource_h__Script_Spout2_DX12_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
