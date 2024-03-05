// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAssets/Character/QCharacterDataAsset.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQCharacterDataAsset() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQCharacterAbilityDataAsset_NoRegister();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQCharacterAnimationDataAsset_NoRegister();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQCharacterDataAsset();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQCharacterDataAsset_NoRegister();
	ANCIENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterMovementSetting();
	ANCIENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterMovementSettingModel();
	ANCIENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterMovementSettingStance();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterMovementSetting;
class UScriptStruct* FCharacterMovementSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterMovementSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterMovementSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterMovementSetting, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("CharacterMovementSetting"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterMovementSetting.OuterSingleton;
}
template<> ANCIENTGAME_API UScriptStruct* StaticStruct<FCharacterMovementSetting>()
{
	return FCharacterMovementSetting::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationRateCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationRateCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterMovementSetting>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "CharacterMovementSetting" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementSetting, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_WalkSpeed_MetaData), Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_WalkSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_RunSpeed_MetaData[] = {
		{ "Category", "CharacterMovementSetting" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementSetting, RunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_RunSpeed_MetaData), Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_RunSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "CharacterMovementSetting" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementSetting, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_SprintSpeed_MetaData), Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_SprintSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_MovementCurve_MetaData[] = {
		{ "Category", "CharacterMovementSetting" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_MovementCurve = { "MovementCurve", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementSetting, MovementCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_MovementCurve_MetaData), Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_MovementCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_RotationRateCurve_MetaData[] = {
		{ "Category", "CharacterMovementSetting" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_RotationRateCurve = { "RotationRateCurve", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementSetting, RotationRateCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_RotationRateCurve_MetaData), Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_RotationRateCurve_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_WalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_RunSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_SprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_MovementCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewProp_RotationRateCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		&NewStructOps,
		"CharacterMovementSetting",
		Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::PropPointers),
		sizeof(FCharacterMovementSetting),
		alignof(FCharacterMovementSetting),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterMovementSetting()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterMovementSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterMovementSetting.InnerSingleton, Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterMovementSetting.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterMovementSettingStance;
class UScriptStruct* FCharacterMovementSettingStance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterMovementSettingStance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterMovementSettingStance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterMovementSettingStance, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("CharacterMovementSettingStance"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterMovementSettingStance.OuterSingleton;
}
template<> ANCIENTGAME_API UScriptStruct* StaticStruct<FCharacterMovementSettingStance>()
{
	return FCharacterMovementSettingStance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterMovementSettingStance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Standing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Standing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Crouching_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Crouching;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementSettingStance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterMovementSettingStance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterMovementSettingStance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementSettingStance_Statics::NewProp_Standing_MetaData[] = {
		{ "Category", "CharacterMovementSettingStance" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterMovementSettingStance_Statics::NewProp_Standing = { "Standing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementSettingStance, Standing), Z_Construct_UScriptStruct_FCharacterMovementSetting, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementSettingStance_Statics::NewProp_Standing_MetaData), Z_Construct_UScriptStruct_FCharacterMovementSettingStance_Statics::NewProp_Standing_MetaData) }; // 1403934210
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementSettingStance_Statics::NewProp_Crouching_MetaData[] = {
		{ "Category", "CharacterMovementSettingStance" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterMovementSettingStance_Statics::NewProp_Crouching = { "Crouching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementSettingStance, Crouching), Z_Construct_UScriptStruct_FCharacterMovementSetting, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementSettingStance_Statics::NewProp_Crouching_MetaData), Z_Construct_UScriptStruct_FCharacterMovementSettingStance_Statics::NewProp_Crouching_MetaData) }; // 1403934210
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterMovementSettingStance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementSettingStance_Statics::NewProp_Standing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementSettingStance_Statics::NewProp_Crouching,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterMovementSettingStance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		&NewStructOps,
		"CharacterMovementSettingStance",
		Z_Construct_UScriptStruct_FCharacterMovementSettingStance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementSettingStance_Statics::PropPointers),
		sizeof(FCharacterMovementSettingStance),
		alignof(FCharacterMovementSettingStance),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementSettingStance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterMovementSettingStance_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementSettingStance_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterMovementSettingStance()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterMovementSettingStance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterMovementSettingStance.InnerSingleton, Z_Construct_UScriptStruct_FCharacterMovementSettingStance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterMovementSettingStance.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCharacterMovementSettingModel>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCharacterMovementSettingModel cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterMovementSettingModel;
class UScriptStruct* FCharacterMovementSettingModel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterMovementSettingModel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterMovementSettingModel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterMovementSettingModel, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("CharacterMovementSettingModel"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterMovementSettingModel.OuterSingleton;
}
template<> ANCIENTGAME_API UScriptStruct* StaticStruct<FCharacterMovementSettingModel>()
{
	return FCharacterMovementSettingModel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookingDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookingDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Aiming_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Aiming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterMovementSettingModel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::NewProp_VelocityDirection_MetaData[] = {
		{ "Category", "CharacterMovementSettingModel" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::NewProp_VelocityDirection = { "VelocityDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementSettingModel, VelocityDirection), Z_Construct_UScriptStruct_FCharacterMovementSettingStance, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::NewProp_VelocityDirection_MetaData), Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::NewProp_VelocityDirection_MetaData) }; // 2647811126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::NewProp_LookingDirection_MetaData[] = {
		{ "Category", "CharacterMovementSettingModel" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::NewProp_LookingDirection = { "LookingDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementSettingModel, LookingDirection), Z_Construct_UScriptStruct_FCharacterMovementSettingStance, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::NewProp_LookingDirection_MetaData), Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::NewProp_LookingDirection_MetaData) }; // 2647811126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::NewProp_Aiming_MetaData[] = {
		{ "Category", "CharacterMovementSettingModel" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::NewProp_Aiming = { "Aiming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementSettingModel, Aiming), Z_Construct_UScriptStruct_FCharacterMovementSettingStance, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::NewProp_Aiming_MetaData), Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::NewProp_Aiming_MetaData) }; // 2647811126
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::NewProp_VelocityDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::NewProp_LookingDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::NewProp_Aiming,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CharacterMovementSettingModel",
		Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::PropPointers),
		sizeof(FCharacterMovementSettingModel),
		alignof(FCharacterMovementSettingModel),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterMovementSettingModel()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterMovementSettingModel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterMovementSettingModel.InnerSingleton, Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterMovementSettingModel.InnerSingleton;
	}
	void UQCharacterDataAsset::StaticRegisterNativesUQCharacterDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQCharacterDataAsset);
	UClass* Z_Construct_UClass_UQCharacterDataAsset_NoRegister()
	{
		return UQCharacterDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UQCharacterDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAnimationDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterAnimationDataAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMovementSetting_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterMovementSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAbilityDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterAbilityDataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQCharacterDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterDataAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQCharacterDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataAssets/Character/QCharacterDataAsset.h" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQCharacterDataAsset_Statics::NewProp_CharacterAnimationDataAsset_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQCharacterDataAsset_Statics::NewProp_CharacterAnimationDataAsset = { "CharacterAnimationDataAsset", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQCharacterDataAsset, CharacterAnimationDataAsset), Z_Construct_UClass_UQCharacterAnimationDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterDataAsset_Statics::NewProp_CharacterAnimationDataAsset_MetaData), Z_Construct_UClass_UQCharacterDataAsset_Statics::NewProp_CharacterAnimationDataAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQCharacterDataAsset_Statics::NewProp_CharacterMovementSetting_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQCharacterDataAsset_Statics::NewProp_CharacterMovementSetting = { "CharacterMovementSetting", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQCharacterDataAsset, CharacterMovementSetting), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterDataAsset_Statics::NewProp_CharacterMovementSetting_MetaData), Z_Construct_UClass_UQCharacterDataAsset_Statics::NewProp_CharacterMovementSetting_MetaData) }; // 1575649708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQCharacterDataAsset_Statics::NewProp_CharacterAbilityDataAsset_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQCharacterDataAsset_Statics::NewProp_CharacterAbilityDataAsset = { "CharacterAbilityDataAsset", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQCharacterDataAsset, CharacterAbilityDataAsset), Z_Construct_UClass_UQCharacterAbilityDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterDataAsset_Statics::NewProp_CharacterAbilityDataAsset_MetaData), Z_Construct_UClass_UQCharacterDataAsset_Statics::NewProp_CharacterAbilityDataAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQCharacterDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQCharacterDataAsset_Statics::NewProp_CharacterAnimationDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQCharacterDataAsset_Statics::NewProp_CharacterMovementSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQCharacterDataAsset_Statics::NewProp_CharacterAbilityDataAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQCharacterDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQCharacterDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQCharacterDataAsset_Statics::ClassParams = {
		&UQCharacterDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQCharacterDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UQCharacterDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQCharacterDataAsset()
	{
		if (!Z_Registration_Info_UClass_UQCharacterDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQCharacterDataAsset.OuterSingleton, Z_Construct_UClass_UQCharacterDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQCharacterDataAsset.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<UQCharacterDataAsset>()
	{
		return UQCharacterDataAsset::StaticClass();
	}
	UQCharacterDataAsset::UQCharacterDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQCharacterDataAsset);
	UQCharacterDataAsset::~UQCharacterDataAsset() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Character_QCharacterDataAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Character_QCharacterDataAsset_h_Statics::ScriptStructInfo[] = {
		{ FCharacterMovementSetting::StaticStruct, Z_Construct_UScriptStruct_FCharacterMovementSetting_Statics::NewStructOps, TEXT("CharacterMovementSetting"), &Z_Registration_Info_UScriptStruct_CharacterMovementSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterMovementSetting), 1403934210U) },
		{ FCharacterMovementSettingStance::StaticStruct, Z_Construct_UScriptStruct_FCharacterMovementSettingStance_Statics::NewStructOps, TEXT("CharacterMovementSettingStance"), &Z_Registration_Info_UScriptStruct_CharacterMovementSettingStance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterMovementSettingStance), 2647811126U) },
		{ FCharacterMovementSettingModel::StaticStruct, Z_Construct_UScriptStruct_FCharacterMovementSettingModel_Statics::NewStructOps, TEXT("CharacterMovementSettingModel"), &Z_Registration_Info_UScriptStruct_CharacterMovementSettingModel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterMovementSettingModel), 3156779072U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Character_QCharacterDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQCharacterDataAsset, UQCharacterDataAsset::StaticClass, TEXT("UQCharacterDataAsset"), &Z_Registration_Info_UClass_UQCharacterDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQCharacterDataAsset), 3775596861U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Character_QCharacterDataAsset_h_3237859080(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Character_QCharacterDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Character_QCharacterDataAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Character_QCharacterDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Character_QCharacterDataAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
