// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpoutWorldPolicy.h"

#ifdef SPOUT2_DX12_SpoutWorldPolicy_generated_h
#error "SpoutWorldPolicy.generated.h already included, missing '#pragma once' in SpoutWorldPolicy.h"
#endif
#define SPOUT2_DX12_SpoutWorldPolicy_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Packaged_UE_Plugins_Spout_v2_0_1_Spout2_DX12_UE5_6_v2_0_1_HostProject_Plugins_Spout2_DX12_Source_Spout2_DX12_Public_SpoutWorldPolicy_h

// ********** Begin Enum ESpoutWorldBootstrapPolicy ************************************************
#define FOREACH_ENUM_ESPOUTWORLDBOOTSTRAPPOLICY(op) \
	op(ESpoutWorldBootstrapPolicy::EditorAndGame) \
	op(ESpoutWorldBootstrapPolicy::GameOnly) \
	op(ESpoutWorldBootstrapPolicy::EditorGameAndSinglePreview) 

enum class ESpoutWorldBootstrapPolicy : uint8;
template<> struct TIsUEnumClass<ESpoutWorldBootstrapPolicy> { enum { Value = true }; };
template<> SPOUT2_DX12_API UEnum* StaticEnum<ESpoutWorldBootstrapPolicy>();
// ********** End Enum ESpoutWorldBootstrapPolicy **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
