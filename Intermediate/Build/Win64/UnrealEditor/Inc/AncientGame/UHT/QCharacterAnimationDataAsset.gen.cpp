// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAssets/Character/QCharacterAnimationDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQCharacterAnimationDataAsset() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQCharacterAnimationDataAsset();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQCharacterAnimationDataAsset_NoRegister();
	ANCIENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData();
	ANCIENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterMainAinmationData();
	ANCIENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData();
	ANCIENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FTurnInPlaceAsset();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TurnInPlaceAsset;
class UScriptStruct* FTurnInPlaceAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TurnInPlaceAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TurnInPlaceAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTurnInPlaceAsset, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("TurnInPlaceAsset"));
	}
	return Z_Registration_Info_UScriptStruct_TurnInPlaceAsset.OuterSingleton;
}
template<> ANCIENTGAME_API UScriptStruct* StaticStruct<FTurnInPlaceAsset>()
{
	return FTurnInPlaceAsset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleTurnAngle_MetaData[];
#endif
		static void NewProp_ScaleTurnAngle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ScaleTurnAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTurnInPlaceAsset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "TurnInPlaceAsset" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTurnInPlaceAsset, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_Animation_MetaData), Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_Animation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_AnimatedAngle_MetaData[] = {
		{ "Category", "TurnInPlaceAsset" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_AnimatedAngle = { "AnimatedAngle", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTurnInPlaceAsset, AnimatedAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_AnimatedAngle_MetaData), Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_AnimatedAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "TurnInPlaceAsset" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTurnInPlaceAsset, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_SlotName_MetaData), Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_SlotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "TurnInPlaceAsset" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTurnInPlaceAsset, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_PlayRate_MetaData), Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_PlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_ScaleTurnAngle_MetaData[] = {
		{ "Category", "TurnInPlaceAsset" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_ScaleTurnAngle_SetBit(void* Obj)
	{
		((FTurnInPlaceAsset*)Obj)->ScaleTurnAngle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_ScaleTurnAngle = { "ScaleTurnAngle", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTurnInPlaceAsset), &Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_ScaleTurnAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_ScaleTurnAngle_MetaData), Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_ScaleTurnAngle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_AnimatedAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewProp_ScaleTurnAngle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		&NewStructOps,
		"TurnInPlaceAsset",
		Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::PropPointers),
		sizeof(FTurnInPlaceAsset),
		alignof(FTurnInPlaceAsset),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTurnInPlaceAsset()
	{
		if (!Z_Registration_Info_UScriptStruct_TurnInPlaceAsset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TurnInPlaceAsset.InnerSingleton, Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TurnInPlaceAsset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterBaseLocomotionAnimationData;
class UScriptStruct* FCharacterBaseLocomotionAnimationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterBaseLocomotionAnimationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterBaseLocomotionAnimationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("CharacterBaseLocomotionAnimationData"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterBaseLocomotionAnimationData.OuterSingleton;
}
template<> ANCIENTGAME_API UScriptStruct* StaticStruct<FCharacterBaseLocomotionAnimationData>()
{
	return FCharacterBaseLocomotionAnimationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedCrouchSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedCrouchSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedWalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedWalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedRunSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedRunSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedSprintSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedSprintSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityBlendInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityBlendInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_N_WalkRun_F_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_N_WalkRun_F;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_N_WalkRun_B_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_N_WalkRun_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_N_WalkRun_FL_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_N_WalkRun_FL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_N_WalkRun_FR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_N_WalkRun_FR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_N_WalkRun_BL_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_N_WalkRun_BL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_N_WalkRun_BR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_N_WalkRun_BR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiagonalScaleAmountCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DiagonalScaleAmountCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrideBlend_N_Walk_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StrideBlend_N_Walk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrideBlend_N_Run_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StrideBlend_N_Run;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrideBlend_C_Walk_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StrideBlend_C_Walk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawOffset_FB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_YawOffset_FB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawOffset_LR_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_YawOffset_LR;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterBaseLocomotionAnimationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_AnimatedCrouchSpeed_MetaData[] = {
		{ "Category", "Config|Speed" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_AnimatedCrouchSpeed = { "AnimatedCrouchSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterBaseLocomotionAnimationData, AnimatedCrouchSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_AnimatedCrouchSpeed_MetaData), Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_AnimatedCrouchSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_AnimatedWalkSpeed_MetaData[] = {
		{ "Category", "Config|Speed" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_AnimatedWalkSpeed = { "AnimatedWalkSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterBaseLocomotionAnimationData, AnimatedWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_AnimatedWalkSpeed_MetaData), Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_AnimatedWalkSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_AnimatedRunSpeed_MetaData[] = {
		{ "Category", "Config|Speed" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_AnimatedRunSpeed = { "AnimatedRunSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterBaseLocomotionAnimationData, AnimatedRunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_AnimatedRunSpeed_MetaData), Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_AnimatedRunSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_AnimatedSprintSpeed_MetaData[] = {
		{ "Category", "Config|Speed" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_AnimatedSprintSpeed = { "AnimatedSprintSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterBaseLocomotionAnimationData, AnimatedSprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_AnimatedSprintSpeed_MetaData), Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_AnimatedSprintSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_VelocityBlendInterpSpeed_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_VelocityBlendInterpSpeed = { "VelocityBlendInterpSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterBaseLocomotionAnimationData, VelocityBlendInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_VelocityBlendInterpSpeed_MetaData), Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_VelocityBlendInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_F_MetaData[] = {
		{ "Category", "Stance" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_F = { "N_WalkRun_F", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterBaseLocomotionAnimationData, N_WalkRun_F), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_F_MetaData), Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_F_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_B_MetaData[] = {
		{ "Category", "Stance" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_B = { "N_WalkRun_B", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterBaseLocomotionAnimationData, N_WalkRun_B), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_B_MetaData), Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_B_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_FL_MetaData[] = {
		{ "Category", "Stance" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_FL = { "N_WalkRun_FL", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterBaseLocomotionAnimationData, N_WalkRun_FL), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_FL_MetaData), Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_FL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_FR_MetaData[] = {
		{ "Category", "Stance" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_FR = { "N_WalkRun_FR", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterBaseLocomotionAnimationData, N_WalkRun_FR), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_FR_MetaData), Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_FR_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_BL_MetaData[] = {
		{ "Category", "Stance" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_BL = { "N_WalkRun_BL", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterBaseLocomotionAnimationData, N_WalkRun_BL), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_BL_MetaData), Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_BL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_BR_MetaData[] = {
		{ "Category", "Stance" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_BR = { "N_WalkRun_BR", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterBaseLocomotionAnimationData, N_WalkRun_BR), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_BR_MetaData), Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_BR_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_DiagonalScaleAmountCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_DiagonalScaleAmountCurve = { "DiagonalScaleAmountCurve", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterBaseLocomotionAnimationData, DiagonalScaleAmountCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_DiagonalScaleAmountCurve_MetaData), Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_DiagonalScaleAmountCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_StrideBlend_N_Walk_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_StrideBlend_N_Walk = { "StrideBlend_N_Walk", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterBaseLocomotionAnimationData, StrideBlend_N_Walk), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_StrideBlend_N_Walk_MetaData), Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_StrideBlend_N_Walk_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_StrideBlend_N_Run_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_StrideBlend_N_Run = { "StrideBlend_N_Run", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterBaseLocomotionAnimationData, StrideBlend_N_Run), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_StrideBlend_N_Run_MetaData), Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_StrideBlend_N_Run_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_StrideBlend_C_Walk_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_StrideBlend_C_Walk = { "StrideBlend_C_Walk", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterBaseLocomotionAnimationData, StrideBlend_C_Walk), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_StrideBlend_C_Walk_MetaData), Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_StrideBlend_C_Walk_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_YawOffset_FB_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_YawOffset_FB = { "YawOffset_FB", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterBaseLocomotionAnimationData, YawOffset_FB), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_YawOffset_FB_MetaData), Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_YawOffset_FB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_YawOffset_LR_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_YawOffset_LR = { "YawOffset_LR", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterBaseLocomotionAnimationData, YawOffset_LR), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_YawOffset_LR_MetaData), Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_YawOffset_LR_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_AnimatedCrouchSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_AnimatedWalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_AnimatedRunSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_AnimatedSprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_VelocityBlendInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_F,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_FL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_FR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_BL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_N_WalkRun_BR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_DiagonalScaleAmountCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_StrideBlend_N_Walk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_StrideBlend_N_Run,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_StrideBlend_C_Walk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_YawOffset_FB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewProp_YawOffset_LR,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		&NewStructOps,
		"CharacterBaseLocomotionAnimationData",
		Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::PropPointers),
		sizeof(FCharacterBaseLocomotionAnimationData),
		alignof(FCharacterBaseLocomotionAnimationData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterBaseLocomotionAnimationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterBaseLocomotionAnimationData.InnerSingleton, Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterBaseLocomotionAnimationData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterOnGroundLocomotionAinmationData;
class UScriptStruct* FCharacterOnGroundLocomotionAinmationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterOnGroundLocomotionAinmationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterOnGroundLocomotionAinmationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("CharacterOnGroundLocomotionAinmationData"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterOnGroundLocomotionAinmationData.OuterSingleton;
}
template<> ANCIENTGAME_API UScriptStruct* StaticStruct<FCharacterOnGroundLocomotionAinmationData>()
{
	return FCharacterOnGroundLocomotionAinmationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnCheckMinAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnCheckMinAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateMinThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateMinThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateMaxThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateMaxThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimYawRateMinRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimYawRateMinRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimYawRateMaxRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimYawRateMaxRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Turn180Threshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Turn180Threshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimYawRateLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimYawRateLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinAngleDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAngleDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngleDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngleDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IK_TraceDistanceAboveFoot_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IK_TraceDistanceAboveFoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IK_TraceDistanceBelowFoot_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IK_TraceDistanceBelowFoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_N_TurnIP_L90_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_N_TurnIP_L90;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_N_TurnIP_R90_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_N_TurnIP_R90;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_N_TurnIP_L180_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_N_TurnIP_L180;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_N_TurnIP_R180_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_N_TurnIP_R180;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CLF_TurnIP_L90_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CLF_TurnIP_L90;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CLF_TurnIP_R90_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CLF_TurnIP_R90;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CLF_TurnIP_L180_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CLF_TurnIP_L180;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CLF_TurnIP_R180_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CLF_TurnIP_R180;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterOnGroundLocomotionAinmationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_TurnCheckMinAngle_MetaData[] = {
		{ "Category", "Turn In Place" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_TurnCheckMinAngle = { "TurnCheckMinAngle", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterOnGroundLocomotionAinmationData, TurnCheckMinAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_TurnCheckMinAngle_MetaData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_TurnCheckMinAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_RotateMinThreshold_MetaData[] = {
		{ "Category", "Config|Rotate In Place" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_RotateMinThreshold = { "RotateMinThreshold", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterOnGroundLocomotionAinmationData, RotateMinThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_RotateMinThreshold_MetaData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_RotateMinThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_RotateMaxThreshold_MetaData[] = {
		{ "Category", "Config|Rotate In Place" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_RotateMaxThreshold = { "RotateMaxThreshold", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterOnGroundLocomotionAinmationData, RotateMaxThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_RotateMaxThreshold_MetaData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_RotateMaxThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_AimYawRateMinRange_MetaData[] = {
		{ "Category", "Config|Rotate In Place" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_AimYawRateMinRange = { "AimYawRateMinRange", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterOnGroundLocomotionAinmationData, AimYawRateMinRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_AimYawRateMinRange_MetaData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_AimYawRateMinRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_AimYawRateMaxRange_MetaData[] = {
		{ "Category", "Config|Rotate In Place" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_AimYawRateMaxRange = { "AimYawRateMaxRange", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterOnGroundLocomotionAinmationData, AimYawRateMaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_AimYawRateMaxRange_MetaData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_AimYawRateMaxRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_MinPlayRate_MetaData[] = {
		{ "Category", "Config|Rotate In Place" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_MinPlayRate = { "MinPlayRate", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterOnGroundLocomotionAinmationData, MinPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_MinPlayRate_MetaData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_MinPlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_MaxPlayRate_MetaData[] = {
		{ "Category", "Config|Rotate In Place" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_MaxPlayRate = { "MaxPlayRate", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterOnGroundLocomotionAinmationData, MaxPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_MaxPlayRate_MetaData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_MaxPlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_Turn180Threshold_MetaData[] = {
		{ "Category", "Config|Turn In Place" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_Turn180Threshold = { "Turn180Threshold", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterOnGroundLocomotionAinmationData, Turn180Threshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_Turn180Threshold_MetaData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_Turn180Threshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_AimYawRateLimit_MetaData[] = {
		{ "Category", "Config|Turn In Place" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_AimYawRateLimit = { "AimYawRateLimit", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterOnGroundLocomotionAinmationData, AimYawRateLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_AimYawRateLimit_MetaData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_AimYawRateLimit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_MinAngleDelay_MetaData[] = {
		{ "Category", "Config|Turn In Place" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_MinAngleDelay = { "MinAngleDelay", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterOnGroundLocomotionAinmationData, MinAngleDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_MinAngleDelay_MetaData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_MinAngleDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_MaxAngleDelay_MetaData[] = {
		{ "Category", "Config|Turn In Place" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_MaxAngleDelay = { "MaxAngleDelay", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterOnGroundLocomotionAinmationData, MaxAngleDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_MaxAngleDelay_MetaData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_MaxAngleDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_IK_TraceDistanceAboveFoot_MetaData[] = {
		{ "Category", "Config|FootIK" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_IK_TraceDistanceAboveFoot = { "IK_TraceDistanceAboveFoot", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterOnGroundLocomotionAinmationData, IK_TraceDistanceAboveFoot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_IK_TraceDistanceAboveFoot_MetaData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_IK_TraceDistanceAboveFoot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_IK_TraceDistanceBelowFoot_MetaData[] = {
		{ "Category", "Config|FootIK" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_IK_TraceDistanceBelowFoot = { "IK_TraceDistanceBelowFoot", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterOnGroundLocomotionAinmationData, IK_TraceDistanceBelowFoot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_IK_TraceDistanceBelowFoot_MetaData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_IK_TraceDistanceBelowFoot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_FootHeight_MetaData[] = {
		{ "Category", "Config|FootIK" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_FootHeight = { "FootHeight", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterOnGroundLocomotionAinmationData, FootHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_FootHeight_MetaData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_FootHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_N_TurnIP_L90_MetaData[] = {
		{ "Category", "Config|Turn In Place" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_N_TurnIP_L90 = { "N_TurnIP_L90", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterOnGroundLocomotionAinmationData, N_TurnIP_L90), Z_Construct_UScriptStruct_FTurnInPlaceAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_N_TurnIP_L90_MetaData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_N_TurnIP_L90_MetaData) }; // 3698082213
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_N_TurnIP_R90_MetaData[] = {
		{ "Category", "Config|Turn In Place" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_N_TurnIP_R90 = { "N_TurnIP_R90", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterOnGroundLocomotionAinmationData, N_TurnIP_R90), Z_Construct_UScriptStruct_FTurnInPlaceAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_N_TurnIP_R90_MetaData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_N_TurnIP_R90_MetaData) }; // 3698082213
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_N_TurnIP_L180_MetaData[] = {
		{ "Category", "Config|Turn In Place" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_N_TurnIP_L180 = { "N_TurnIP_L180", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterOnGroundLocomotionAinmationData, N_TurnIP_L180), Z_Construct_UScriptStruct_FTurnInPlaceAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_N_TurnIP_L180_MetaData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_N_TurnIP_L180_MetaData) }; // 3698082213
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_N_TurnIP_R180_MetaData[] = {
		{ "Category", "Config|Turn In Place" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_N_TurnIP_R180 = { "N_TurnIP_R180", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterOnGroundLocomotionAinmationData, N_TurnIP_R180), Z_Construct_UScriptStruct_FTurnInPlaceAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_N_TurnIP_R180_MetaData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_N_TurnIP_R180_MetaData) }; // 3698082213
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_CLF_TurnIP_L90_MetaData[] = {
		{ "Category", "Config|Turn In Place" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_CLF_TurnIP_L90 = { "CLF_TurnIP_L90", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterOnGroundLocomotionAinmationData, CLF_TurnIP_L90), Z_Construct_UScriptStruct_FTurnInPlaceAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_CLF_TurnIP_L90_MetaData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_CLF_TurnIP_L90_MetaData) }; // 3698082213
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_CLF_TurnIP_R90_MetaData[] = {
		{ "Category", "Config|Turn In Place" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_CLF_TurnIP_R90 = { "CLF_TurnIP_R90", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterOnGroundLocomotionAinmationData, CLF_TurnIP_R90), Z_Construct_UScriptStruct_FTurnInPlaceAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_CLF_TurnIP_R90_MetaData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_CLF_TurnIP_R90_MetaData) }; // 3698082213
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_CLF_TurnIP_L180_MetaData[] = {
		{ "Category", "Config|Turn In Place" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_CLF_TurnIP_L180 = { "CLF_TurnIP_L180", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterOnGroundLocomotionAinmationData, CLF_TurnIP_L180), Z_Construct_UScriptStruct_FTurnInPlaceAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_CLF_TurnIP_L180_MetaData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_CLF_TurnIP_L180_MetaData) }; // 3698082213
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_CLF_TurnIP_R180_MetaData[] = {
		{ "Category", "Config|Turn In Place" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_CLF_TurnIP_R180 = { "CLF_TurnIP_R180", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterOnGroundLocomotionAinmationData, CLF_TurnIP_R180), Z_Construct_UScriptStruct_FTurnInPlaceAsset, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_CLF_TurnIP_R180_MetaData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_CLF_TurnIP_R180_MetaData) }; // 3698082213
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_TurnCheckMinAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_RotateMinThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_RotateMaxThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_AimYawRateMinRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_AimYawRateMaxRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_MinPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_MaxPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_Turn180Threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_AimYawRateLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_MinAngleDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_MaxAngleDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_IK_TraceDistanceAboveFoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_IK_TraceDistanceBelowFoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_FootHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_N_TurnIP_L90,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_N_TurnIP_R90,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_N_TurnIP_L180,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_N_TurnIP_R180,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_CLF_TurnIP_L90,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_CLF_TurnIP_R90,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_CLF_TurnIP_L180,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewProp_CLF_TurnIP_R180,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		&NewStructOps,
		"CharacterOnGroundLocomotionAinmationData",
		Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::PropPointers),
		sizeof(FCharacterOnGroundLocomotionAinmationData),
		alignof(FCharacterOnGroundLocomotionAinmationData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterOnGroundLocomotionAinmationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterOnGroundLocomotionAinmationData.InnerSingleton, Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterOnGroundLocomotionAinmationData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterMainAinmationData;
class UScriptStruct* FCharacterMainAinmationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterMainAinmationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterMainAinmationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterMainAinmationData, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("CharacterMainAinmationData"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterMainAinmationData.OuterSingleton;
}
template<> ANCIENTGAME_API UScriptStruct* StaticStruct<FCharacterMainAinmationData>()
{
	return FCharacterMainAinmationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAirLeanInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InAirLeanInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothedAimingRotationInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothedAimingRotationInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputYawOffsetInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputYawOffsetInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandPredictionCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LandPredictionCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeanInAirCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeanInAirCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterMainAinmationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_InAirLeanInterpSpeed_MetaData[] = {
		{ "Category", "Sp" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_InAirLeanInterpSpeed = { "InAirLeanInterpSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMainAinmationData, InAirLeanInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_InAirLeanInterpSpeed_MetaData), Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_InAirLeanInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_SmoothedAimingRotationInterpSpeed_MetaData[] = {
		{ "Category", "Sp" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_SmoothedAimingRotationInterpSpeed = { "SmoothedAimingRotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMainAinmationData, SmoothedAimingRotationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_SmoothedAimingRotationInterpSpeed_MetaData), Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_SmoothedAimingRotationInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_InputYawOffsetInterpSpeed_MetaData[] = {
		{ "Category", "Sp" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_InputYawOffsetInterpSpeed = { "InputYawOffsetInterpSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMainAinmationData, InputYawOffsetInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_InputYawOffsetInterpSpeed_MetaData), Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_InputYawOffsetInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_LandPredictionCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_LandPredictionCurve = { "LandPredictionCurve", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMainAinmationData, LandPredictionCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_LandPredictionCurve_MetaData), Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_LandPredictionCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_LeanInAirCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_LeanInAirCurve = { "LeanInAirCurve", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMainAinmationData, LeanInAirCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_LeanInAirCurve_MetaData), Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_LeanInAirCurve_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_InAirLeanInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_SmoothedAimingRotationInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_InputYawOffsetInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_LandPredictionCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewProp_LeanInAirCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		&NewStructOps,
		"CharacterMainAinmationData",
		Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::PropPointers),
		sizeof(FCharacterMainAinmationData),
		alignof(FCharacterMainAinmationData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterMainAinmationData()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterMainAinmationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterMainAinmationData.InnerSingleton, Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterMainAinmationData.InnerSingleton;
	}
	void UQCharacterAnimationDataAsset::StaticRegisterNativesUQCharacterAnimationDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQCharacterAnimationDataAsset);
	UClass* Z_Construct_UClass_UQCharacterAnimationDataAsset_NoRegister()
	{
		return UQCharacterAnimationDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLocomotionAnimationData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseLocomotionAnimationData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGroundLocomotionAinmationData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnGroundLocomotionAinmationData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMainAinmationData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterMainAinmationData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::NewProp_BaseLocomotionAnimationData_MetaData[] = {
		{ "Category", "BaseLocomotion" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::NewProp_BaseLocomotionAnimationData = { "BaseLocomotionAnimationData", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQCharacterAnimationDataAsset, BaseLocomotionAnimationData), Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::NewProp_BaseLocomotionAnimationData_MetaData), Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::NewProp_BaseLocomotionAnimationData_MetaData) }; // 1214536705
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::NewProp_OnGroundLocomotionAinmationData_MetaData[] = {
		{ "Category", "OnGroundLocomotion" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::NewProp_OnGroundLocomotionAinmationData = { "OnGroundLocomotionAinmationData", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQCharacterAnimationDataAsset, OnGroundLocomotionAinmationData), Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::NewProp_OnGroundLocomotionAinmationData_MetaData), Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::NewProp_OnGroundLocomotionAinmationData_MetaData) }; // 3877272867
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::NewProp_CharacterMainAinmationData_MetaData[] = {
		{ "Category", "MainLocomotion" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAnimationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::NewProp_CharacterMainAinmationData = { "CharacterMainAinmationData", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQCharacterAnimationDataAsset, CharacterMainAinmationData), Z_Construct_UScriptStruct_FCharacterMainAinmationData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::NewProp_CharacterMainAinmationData_MetaData), Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::NewProp_CharacterMainAinmationData_MetaData) }; // 1443390473
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::NewProp_BaseLocomotionAnimationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::NewProp_OnGroundLocomotionAinmationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::NewProp_CharacterMainAinmationData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQCharacterAnimationDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::ClassParams = {
		&UQCharacterAnimationDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQCharacterAnimationDataAsset()
	{
		if (!Z_Registration_Info_UClass_UQCharacterAnimationDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQCharacterAnimationDataAsset.OuterSingleton, Z_Construct_UClass_UQCharacterAnimationDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQCharacterAnimationDataAsset.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<UQCharacterAnimationDataAsset>()
	{
		return UQCharacterAnimationDataAsset::StaticClass();
	}
	UQCharacterAnimationDataAsset::UQCharacterAnimationDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQCharacterAnimationDataAsset);
	UQCharacterAnimationDataAsset::~UQCharacterAnimationDataAsset() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Character_QCharacterAnimationDataAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Character_QCharacterAnimationDataAsset_h_Statics::ScriptStructInfo[] = {
		{ FTurnInPlaceAsset::StaticStruct, Z_Construct_UScriptStruct_FTurnInPlaceAsset_Statics::NewStructOps, TEXT("TurnInPlaceAsset"), &Z_Registration_Info_UScriptStruct_TurnInPlaceAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTurnInPlaceAsset), 3698082213U) },
		{ FCharacterBaseLocomotionAnimationData::StaticStruct, Z_Construct_UScriptStruct_FCharacterBaseLocomotionAnimationData_Statics::NewStructOps, TEXT("CharacterBaseLocomotionAnimationData"), &Z_Registration_Info_UScriptStruct_CharacterBaseLocomotionAnimationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterBaseLocomotionAnimationData), 1214536705U) },
		{ FCharacterOnGroundLocomotionAinmationData::StaticStruct, Z_Construct_UScriptStruct_FCharacterOnGroundLocomotionAinmationData_Statics::NewStructOps, TEXT("CharacterOnGroundLocomotionAinmationData"), &Z_Registration_Info_UScriptStruct_CharacterOnGroundLocomotionAinmationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterOnGroundLocomotionAinmationData), 3877272867U) },
		{ FCharacterMainAinmationData::StaticStruct, Z_Construct_UScriptStruct_FCharacterMainAinmationData_Statics::NewStructOps, TEXT("CharacterMainAinmationData"), &Z_Registration_Info_UScriptStruct_CharacterMainAinmationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterMainAinmationData), 1443390473U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Character_QCharacterAnimationDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQCharacterAnimationDataAsset, UQCharacterAnimationDataAsset::StaticClass, TEXT("UQCharacterAnimationDataAsset"), &Z_Registration_Info_UClass_UQCharacterAnimationDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQCharacterAnimationDataAsset), 738179366U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Character_QCharacterAnimationDataAsset_h_2508041515(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Character_QCharacterAnimationDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Character_QCharacterAnimationDataAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Character_QCharacterAnimationDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Character_QCharacterAnimationDataAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
