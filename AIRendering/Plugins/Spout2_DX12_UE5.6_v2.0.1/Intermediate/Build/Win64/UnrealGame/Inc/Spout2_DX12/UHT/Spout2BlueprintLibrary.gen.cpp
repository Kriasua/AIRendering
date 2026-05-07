// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Spout2BlueprintLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpout2BlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SPOUT2_DX12_API UClass* Z_Construct_UClass_USpout2BlueprintLibrary();
SPOUT2_DX12_API UClass* Z_Construct_UClass_USpout2BlueprintLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_Spout2_DX12();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USpout2BlueprintLibrary **************************************************
void USpout2BlueprintLibrary::StaticRegisterNativesUSpout2BlueprintLibrary()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USpout2BlueprintLibrary;
UClass* USpout2BlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = USpout2BlueprintLibrary;
	if (!Z_Registration_Info_UClass_USpout2BlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Spout2BlueprintLibrary"),
			Z_Registration_Info_UClass_USpout2BlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUSpout2BlueprintLibrary,
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
	return Z_Registration_Info_UClass_USpout2BlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USpout2BlueprintLibrary_NoRegister()
{
	return USpout2BlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USpout2BlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Spout2BlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Spout2BlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpout2BlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USpout2BlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Spout2_DX12,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpout2BlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpout2BlueprintLibrary_Statics::ClassParams = {
	&USpout2BlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpout2BlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USpout2BlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpout2BlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_USpout2BlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpout2BlueprintLibrary.OuterSingleton, Z_Construct_UClass_USpout2BlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpout2BlueprintLibrary.OuterSingleton;
}
USpout2BlueprintLibrary::USpout2BlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpout2BlueprintLibrary);
USpout2BlueprintLibrary::~USpout2BlueprintLibrary() {}
// ********** End Class USpout2BlueprintLibrary ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Packaged_UE_Plugins_Spout_v2_0_1_Spout2_DX12_UE5_6_v2_0_1_HostProject_Plugins_Spout2_DX12_Source_Spout2_DX12_Public_Spout2BlueprintLibrary_h__Script_Spout2_DX12_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpout2BlueprintLibrary, USpout2BlueprintLibrary::StaticClass, TEXT("USpout2BlueprintLibrary"), &Z_Registration_Info_UClass_USpout2BlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpout2BlueprintLibrary), 1979054788U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Packaged_UE_Plugins_Spout_v2_0_1_Spout2_DX12_UE5_6_v2_0_1_HostProject_Plugins_Spout2_DX12_Source_Spout2_DX12_Public_Spout2BlueprintLibrary_h__Script_Spout2_DX12_3129277875(TEXT("/Script/Spout2_DX12"),
	Z_CompiledInDeferFile_FID_Packaged_UE_Plugins_Spout_v2_0_1_Spout2_DX12_UE5_6_v2_0_1_HostProject_Plugins_Spout2_DX12_Source_Spout2_DX12_Public_Spout2BlueprintLibrary_h__Script_Spout2_DX12_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Packaged_UE_Plugins_Spout_v2_0_1_Spout2_DX12_UE5_6_v2_0_1_HostProject_Plugins_Spout2_DX12_Source_Spout2_DX12_Public_Spout2BlueprintLibrary_h__Script_Spout2_DX12_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
