// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpoutWorldPolicy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpoutWorldPolicy() {}

// ********** Begin Cross Module References ********************************************************
SPOUT2_DX12_API UEnum* Z_Construct_UEnum_Spout2_DX12_ESpoutWorldBootstrapPolicy();
UPackage* Z_Construct_UPackage__Script_Spout2_DX12();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESpoutWorldBootstrapPolicy ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpoutWorldBootstrapPolicy;
static UEnum* ESpoutWorldBootstrapPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpoutWorldBootstrapPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpoutWorldBootstrapPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Spout2_DX12_ESpoutWorldBootstrapPolicy, (UObject*)Z_Construct_UPackage__Script_Spout2_DX12(), TEXT("ESpoutWorldBootstrapPolicy"));
	}
	return Z_Registration_Info_UEnum_ESpoutWorldBootstrapPolicy.OuterSingleton;
}
template<> SPOUT2_DX12_API UEnum* StaticEnum<ESpoutWorldBootstrapPolicy>()
{
	return ESpoutWorldBootstrapPolicy_StaticEnum();
}
struct Z_Construct_UEnum_Spout2_DX12_ESpoutWorldBootstrapPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EditorAndGame.DisplayName", "Editor | Game" },
		{ "EditorAndGame.Name", "ESpoutWorldBootstrapPolicy::EditorAndGame" },
		{ "EditorGameAndSinglePreview.DisplayName", "Editor | Game | Single Preview" },
		{ "EditorGameAndSinglePreview.Name", "ESpoutWorldBootstrapPolicy::EditorGameAndSinglePreview" },
		{ "GameOnly.DisplayName", "Game Only" },
		{ "GameOnly.Name", "ESpoutWorldBootstrapPolicy::GameOnly" },
		{ "ModuleRelativePath", "Public/SpoutWorldPolicy.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpoutWorldBootstrapPolicy::EditorAndGame", (int64)ESpoutWorldBootstrapPolicy::EditorAndGame },
		{ "ESpoutWorldBootstrapPolicy::GameOnly", (int64)ESpoutWorldBootstrapPolicy::GameOnly },
		{ "ESpoutWorldBootstrapPolicy::EditorGameAndSinglePreview", (int64)ESpoutWorldBootstrapPolicy::EditorGameAndSinglePreview },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Spout2_DX12_ESpoutWorldBootstrapPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Spout2_DX12,
	nullptr,
	"ESpoutWorldBootstrapPolicy",
	"ESpoutWorldBootstrapPolicy",
	Z_Construct_UEnum_Spout2_DX12_ESpoutWorldBootstrapPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Spout2_DX12_ESpoutWorldBootstrapPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Spout2_DX12_ESpoutWorldBootstrapPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Spout2_DX12_ESpoutWorldBootstrapPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Spout2_DX12_ESpoutWorldBootstrapPolicy()
{
	if (!Z_Registration_Info_UEnum_ESpoutWorldBootstrapPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpoutWorldBootstrapPolicy.InnerSingleton, Z_Construct_UEnum_Spout2_DX12_ESpoutWorldBootstrapPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpoutWorldBootstrapPolicy.InnerSingleton;
}
// ********** End Enum ESpoutWorldBootstrapPolicy **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MyResearch_UE_Projects_AIRendering_AIRendering_Plugins_Spout2_DX12_UE5_6_v2_0_1_Source_Spout2_DX12_Public_SpoutWorldPolicy_h__Script_Spout2_DX12_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESpoutWorldBootstrapPolicy_StaticEnum, TEXT("ESpoutWorldBootstrapPolicy"), &Z_Registration_Info_UEnum_ESpoutWorldBootstrapPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1439667403U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyResearch_UE_Projects_AIRendering_AIRendering_Plugins_Spout2_DX12_UE5_6_v2_0_1_Source_Spout2_DX12_Public_SpoutWorldPolicy_h__Script_Spout2_DX12_531863630(TEXT("/Script/Spout2_DX12"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MyResearch_UE_Projects_AIRendering_AIRendering_Plugins_Spout2_DX12_UE5_6_v2_0_1_Source_Spout2_DX12_Public_SpoutWorldPolicy_h__Script_Spout2_DX12_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyResearch_UE_Projects_AIRendering_AIRendering_Plugins_Spout2_DX12_UE5_6_v2_0_1_Source_Spout2_DX12_Public_SpoutWorldPolicy_h__Script_Spout2_DX12_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
