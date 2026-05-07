// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpoutSenderSource.h"

#ifdef SPOUT2_DX12_SpoutSenderSource_generated_h
#error "SpoutSenderSource.generated.h already included, missing '#pragma once' in SpoutSenderSource.h"
#endif
#define SPOUT2_DX12_SpoutSenderSource_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyResearch_UE_Projects_AIRendering_AIRendering_Plugins_Spout2_DX12_UE5_6_v2_0_1_Source_Spout2_DX12_Public_SpoutSenderSource_h

// ********** Begin Enum ESpoutSenderSourceType ****************************************************
#define FOREACH_ENUM_ESPOUTSENDERSOURCETYPE(op) \
	op(ESpoutSenderSourceType::RenderTarget) \
	op(ESpoutSenderSourceType::GameViewport) \
	op(ESpoutSenderSourceType::EditorViewport) 

enum class ESpoutSenderSourceType : uint8;
template<> struct TIsUEnumClass<ESpoutSenderSourceType> { enum { Value = true }; };
template<> SPOUT2_DX12_API UEnum* StaticEnum<ESpoutSenderSourceType>();
// ********** End Enum ESpoutSenderSourceType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
