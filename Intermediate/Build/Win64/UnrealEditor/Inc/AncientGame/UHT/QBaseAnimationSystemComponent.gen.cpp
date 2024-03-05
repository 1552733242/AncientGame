// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/Animation/QBaseAnimationSystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQBaseAnimationSystemComponent() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQBaseAnimationSystemComponent();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQBaseAnimationSystemComponent_NoRegister();
	ANCIENTGAME_API UEnum* Z_Construct_UEnum_AncientGame_ECharacterMovementAction();
	ANCIENTGAME_API UEnum* Z_Construct_UEnum_AncientGame_ECharacterMovementGait();
	ANCIENTGAME_API UEnum* Z_Construct_UEnum_AncientGame_ECharacterMovementRotationMode();
	ANCIENTGAME_API UEnum* Z_Construct_UEnum_AncientGame_ECharacterMovementStance();
	ANCIENTGAME_API UEnum* Z_Construct_UEnum_AncientGame_ECharacterMovementState();
	ANCIENTGAME_API UEnum* Z_Construct_UEnum_AncientGame_ECharacterOverlayState();
	ANCIENTGAME_API UEnum* Z_Construct_UEnum_AncientGame_ECharacterViewMode();
	ANCIENTGAME_API UEnum* Z_Construct_UEnum_AncientGame_EGroundedEntryState();
	ANCIENTGAME_API UFunction* Z_Construct_UDelegateFunction_AncientGame_OnMovementActionChangeSignature__DelegateSignature();
	ANCIENTGAME_API UFunction* Z_Construct_UDelegateFunction_AncientGame_OnMovementGaitChangeSignature__DelegateSignature();
	ANCIENTGAME_API UFunction* Z_Construct_UDelegateFunction_AncientGame_OnMovementRotationModeChangeSignature__DelegateSignature();
	ANCIENTGAME_API UFunction* Z_Construct_UDelegateFunction_AncientGame_OnMovementStanceChangeSignature__DelegateSignature();
	ANCIENTGAME_API UFunction* Z_Construct_UDelegateFunction_AncientGame_OnMovementStateChangeSignature__DelegateSignature();
	ANCIENTGAME_API UFunction* Z_Construct_UDelegateFunction_AncientGame_OnOverlayStateChangeSignature__DelegateSignature();
	ANCIENTGAME_API UFunction* Z_Construct_UDelegateFunction_AncientGame_OnViewModeChangeSignature__DelegateSignature();
	ANCIENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterMovementEssentialValues();
	ANCIENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterMovementMainParameters();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterMovementGait;
	static UEnum* ECharacterMovementGait_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterMovementGait.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterMovementGait.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AncientGame_ECharacterMovementGait, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("ECharacterMovementGait"));
		}
		return Z_Registration_Info_UEnum_ECharacterMovementGait.OuterSingleton;
	}
	template<> ANCIENTGAME_API UEnum* StaticEnum<ECharacterMovementGait>()
	{
		return ECharacterMovementGait_StaticEnum();
	}
	struct Z_Construct_UEnum_AncientGame_ECharacterMovementGait_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AncientGame_ECharacterMovementGait_Statics::Enumerators[] = {
		{ "ECharacterMovementGait::Walk", (int64)ECharacterMovementGait::Walk },
		{ "ECharacterMovementGait::Run", (int64)ECharacterMovementGait::Run },
		{ "ECharacterMovementGait::Sprint", (int64)ECharacterMovementGait::Sprint },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AncientGame_ECharacterMovementGait_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
		{ "Run.DisplayName", "Run" },
		{ "Run.Name", "ECharacterMovementGait::Run" },
		{ "Sprint.DisplayName", "Sprint" },
		{ "Sprint.Name", "ECharacterMovementGait::Sprint" },
		{ "Walk.DisplayName", "Walk" },
		{ "Walk.Name", "ECharacterMovementGait::Walk" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AncientGame_ECharacterMovementGait_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		"ECharacterMovementGait",
		"ECharacterMovementGait",
		Z_Construct_UEnum_AncientGame_ECharacterMovementGait_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AncientGame_ECharacterMovementGait_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AncientGame_ECharacterMovementGait_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AncientGame_ECharacterMovementGait_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AncientGame_ECharacterMovementGait()
	{
		if (!Z_Registration_Info_UEnum_ECharacterMovementGait.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterMovementGait.InnerSingleton, Z_Construct_UEnum_AncientGame_ECharacterMovementGait_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterMovementGait.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterMovementState;
	static UEnum* ECharacterMovementState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterMovementState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterMovementState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AncientGame_ECharacterMovementState, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("ECharacterMovementState"));
		}
		return Z_Registration_Info_UEnum_ECharacterMovementState.OuterSingleton;
	}
	template<> ANCIENTGAME_API UEnum* StaticEnum<ECharacterMovementState>()
	{
		return ECharacterMovementState_StaticEnum();
	}
	struct Z_Construct_UEnum_AncientGame_ECharacterMovementState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AncientGame_ECharacterMovementState_Statics::Enumerators[] = {
		{ "ECharacterMovementState::None", (int64)ECharacterMovementState::None },
		{ "ECharacterMovementState::InAir", (int64)ECharacterMovementState::InAir },
		{ "ECharacterMovementState::OnGround", (int64)ECharacterMovementState::OnGround },
		{ "ECharacterMovementState::Mantling", (int64)ECharacterMovementState::Mantling },
		{ "ECharacterMovementState::Ragdoll", (int64)ECharacterMovementState::Ragdoll },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AncientGame_ECharacterMovementState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "InAir.DisplayName", "InAir" },
		{ "InAir.Name", "ECharacterMovementState::InAir" },
		{ "Mantling.DisplayName", "Mantling" },
		{ "Mantling.Name", "ECharacterMovementState::Mantling" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
		{ "None.Name", "ECharacterMovementState::None" },
		{ "OnGround.DisplayName", "OnGround" },
		{ "OnGround.Name", "ECharacterMovementState::OnGround" },
		{ "Ragdoll.DisplayName", "Ragdoll" },
		{ "Ragdoll.Name", "ECharacterMovementState::Ragdoll" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AncientGame_ECharacterMovementState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		"ECharacterMovementState",
		"ECharacterMovementState",
		Z_Construct_UEnum_AncientGame_ECharacterMovementState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AncientGame_ECharacterMovementState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AncientGame_ECharacterMovementState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AncientGame_ECharacterMovementState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AncientGame_ECharacterMovementState()
	{
		if (!Z_Registration_Info_UEnum_ECharacterMovementState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterMovementState.InnerSingleton, Z_Construct_UEnum_AncientGame_ECharacterMovementState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterMovementState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterMovementRotationMode;
	static UEnum* ECharacterMovementRotationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterMovementRotationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterMovementRotationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AncientGame_ECharacterMovementRotationMode, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("ECharacterMovementRotationMode"));
		}
		return Z_Registration_Info_UEnum_ECharacterMovementRotationMode.OuterSingleton;
	}
	template<> ANCIENTGAME_API UEnum* StaticEnum<ECharacterMovementRotationMode>()
	{
		return ECharacterMovementRotationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AncientGame_ECharacterMovementRotationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AncientGame_ECharacterMovementRotationMode_Statics::Enumerators[] = {
		{ "ECharacterMovementRotationMode::VelocityDirection", (int64)ECharacterMovementRotationMode::VelocityDirection },
		{ "ECharacterMovementRotationMode::LookingDirection", (int64)ECharacterMovementRotationMode::LookingDirection },
		{ "ECharacterMovementRotationMode::Aiming", (int64)ECharacterMovementRotationMode::Aiming },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AncientGame_ECharacterMovementRotationMode_Statics::Enum_MetaDataParams[] = {
		{ "Aiming.DisplayName", "Aiming" },
		{ "Aiming.Name", "ECharacterMovementRotationMode::Aiming" },
		{ "BlueprintType", "true" },
		{ "LookingDirection.DisplayName", "LookingDirection" },
		{ "LookingDirection.Name", "ECharacterMovementRotationMode::LookingDirection" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
		{ "VelocityDirection.DisplayName", "VelocityDirection" },
		{ "VelocityDirection.Name", "ECharacterMovementRotationMode::VelocityDirection" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AncientGame_ECharacterMovementRotationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		"ECharacterMovementRotationMode",
		"ECharacterMovementRotationMode",
		Z_Construct_UEnum_AncientGame_ECharacterMovementRotationMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AncientGame_ECharacterMovementRotationMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AncientGame_ECharacterMovementRotationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AncientGame_ECharacterMovementRotationMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AncientGame_ECharacterMovementRotationMode()
	{
		if (!Z_Registration_Info_UEnum_ECharacterMovementRotationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterMovementRotationMode.InnerSingleton, Z_Construct_UEnum_AncientGame_ECharacterMovementRotationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterMovementRotationMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterMovementStance;
	static UEnum* ECharacterMovementStance_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterMovementStance.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterMovementStance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AncientGame_ECharacterMovementStance, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("ECharacterMovementStance"));
		}
		return Z_Registration_Info_UEnum_ECharacterMovementStance.OuterSingleton;
	}
	template<> ANCIENTGAME_API UEnum* StaticEnum<ECharacterMovementStance>()
	{
		return ECharacterMovementStance_StaticEnum();
	}
	struct Z_Construct_UEnum_AncientGame_ECharacterMovementStance_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AncientGame_ECharacterMovementStance_Statics::Enumerators[] = {
		{ "ECharacterMovementStance::Stance", (int64)ECharacterMovementStance::Stance },
		{ "ECharacterMovementStance::Crouching", (int64)ECharacterMovementStance::Crouching },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AncientGame_ECharacterMovementStance_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Crouching.DisplayName", "Crouching" },
		{ "Crouching.Name", "ECharacterMovementStance::Crouching" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
		{ "Stance.DisplayName", "Stance" },
		{ "Stance.Name", "ECharacterMovementStance::Stance" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AncientGame_ECharacterMovementStance_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		"ECharacterMovementStance",
		"ECharacterMovementStance",
		Z_Construct_UEnum_AncientGame_ECharacterMovementStance_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AncientGame_ECharacterMovementStance_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AncientGame_ECharacterMovementStance_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AncientGame_ECharacterMovementStance_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AncientGame_ECharacterMovementStance()
	{
		if (!Z_Registration_Info_UEnum_ECharacterMovementStance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterMovementStance.InnerSingleton, Z_Construct_UEnum_AncientGame_ECharacterMovementStance_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterMovementStance.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterMovementAction;
	static UEnum* ECharacterMovementAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterMovementAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterMovementAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AncientGame_ECharacterMovementAction, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("ECharacterMovementAction"));
		}
		return Z_Registration_Info_UEnum_ECharacterMovementAction.OuterSingleton;
	}
	template<> ANCIENTGAME_API UEnum* StaticEnum<ECharacterMovementAction>()
	{
		return ECharacterMovementAction_StaticEnum();
	}
	struct Z_Construct_UEnum_AncientGame_ECharacterMovementAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AncientGame_ECharacterMovementAction_Statics::Enumerators[] = {
		{ "ECharacterMovementAction::None", (int64)ECharacterMovementAction::None },
		{ "ECharacterMovementAction::LowMantle", (int64)ECharacterMovementAction::LowMantle },
		{ "ECharacterMovementAction::HighMantle", (int64)ECharacterMovementAction::HighMantle },
		{ "ECharacterMovementAction::Rolling", (int64)ECharacterMovementAction::Rolling },
		{ "ECharacterMovementAction::GettingUp", (int64)ECharacterMovementAction::GettingUp },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AncientGame_ECharacterMovementAction_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GettingUp.DisplayName", "GettingUp" },
		{ "GettingUp.Name", "ECharacterMovementAction::GettingUp" },
		{ "HighMantle.DisplayName", "HighMantle" },
		{ "HighMantle.Name", "ECharacterMovementAction::HighMantle" },
		{ "LowMantle.DisplayName", "LowMantle" },
		{ "LowMantle.Name", "ECharacterMovementAction::LowMantle" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ECharacterMovementAction::None" },
		{ "Rolling.DisplayName", "Rolling" },
		{ "Rolling.Name", "ECharacterMovementAction::Rolling" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AncientGame_ECharacterMovementAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		"ECharacterMovementAction",
		"ECharacterMovementAction",
		Z_Construct_UEnum_AncientGame_ECharacterMovementAction_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AncientGame_ECharacterMovementAction_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AncientGame_ECharacterMovementAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AncientGame_ECharacterMovementAction_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AncientGame_ECharacterMovementAction()
	{
		if (!Z_Registration_Info_UEnum_ECharacterMovementAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterMovementAction.InnerSingleton, Z_Construct_UEnum_AncientGame_ECharacterMovementAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterMovementAction.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterViewMode;
	static UEnum* ECharacterViewMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterViewMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterViewMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AncientGame_ECharacterViewMode, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("ECharacterViewMode"));
		}
		return Z_Registration_Info_UEnum_ECharacterViewMode.OuterSingleton;
	}
	template<> ANCIENTGAME_API UEnum* StaticEnum<ECharacterViewMode>()
	{
		return ECharacterViewMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AncientGame_ECharacterViewMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AncientGame_ECharacterViewMode_Statics::Enumerators[] = {
		{ "ECharacterViewMode::ThirdPerson", (int64)ECharacterViewMode::ThirdPerson },
		{ "ECharacterViewMode::FirstPerson", (int64)ECharacterViewMode::FirstPerson },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AncientGame_ECharacterViewMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FirstPerson.DisplayName", "FirstPerson" },
		{ "FirstPerson.Name", "ECharacterViewMode::FirstPerson" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
		{ "ThirdPerson.DisplayName", "ThirdPerson" },
		{ "ThirdPerson.Name", "ECharacterViewMode::ThirdPerson" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AncientGame_ECharacterViewMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		"ECharacterViewMode",
		"ECharacterViewMode",
		Z_Construct_UEnum_AncientGame_ECharacterViewMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AncientGame_ECharacterViewMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AncientGame_ECharacterViewMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AncientGame_ECharacterViewMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AncientGame_ECharacterViewMode()
	{
		if (!Z_Registration_Info_UEnum_ECharacterViewMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterViewMode.InnerSingleton, Z_Construct_UEnum_AncientGame_ECharacterViewMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterViewMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterOverlayState;
	static UEnum* ECharacterOverlayState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterOverlayState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterOverlayState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AncientGame_ECharacterOverlayState, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("ECharacterOverlayState"));
		}
		return Z_Registration_Info_UEnum_ECharacterOverlayState.OuterSingleton;
	}
	template<> ANCIENTGAME_API UEnum* StaticEnum<ECharacterOverlayState>()
	{
		return ECharacterOverlayState_StaticEnum();
	}
	struct Z_Construct_UEnum_AncientGame_ECharacterOverlayState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AncientGame_ECharacterOverlayState_Statics::Enumerators[] = {
		{ "ECharacterOverlayState::Default", (int64)ECharacterOverlayState::Default },
		{ "ECharacterOverlayState::Bow", (int64)ECharacterOverlayState::Bow },
		{ "ECharacterOverlayState::Sword", (int64)ECharacterOverlayState::Sword },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AncientGame_ECharacterOverlayState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bow.DisplayName", "Bow" },
		{ "Bow.Name", "ECharacterOverlayState::Bow" },
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "ECharacterOverlayState::Default" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
		{ "Sword.DisplayName", "Sword" },
		{ "Sword.Name", "ECharacterOverlayState::Sword" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AncientGame_ECharacterOverlayState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		"ECharacterOverlayState",
		"ECharacterOverlayState",
		Z_Construct_UEnum_AncientGame_ECharacterOverlayState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AncientGame_ECharacterOverlayState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AncientGame_ECharacterOverlayState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AncientGame_ECharacterOverlayState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AncientGame_ECharacterOverlayState()
	{
		if (!Z_Registration_Info_UEnum_ECharacterOverlayState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterOverlayState.InnerSingleton, Z_Construct_UEnum_AncientGame_ECharacterOverlayState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterOverlayState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroundedEntryState;
	static UEnum* EGroundedEntryState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGroundedEntryState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGroundedEntryState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AncientGame_EGroundedEntryState, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("EGroundedEntryState"));
		}
		return Z_Registration_Info_UEnum_EGroundedEntryState.OuterSingleton;
	}
	template<> ANCIENTGAME_API UEnum* StaticEnum<EGroundedEntryState>()
	{
		return EGroundedEntryState_StaticEnum();
	}
	struct Z_Construct_UEnum_AncientGame_EGroundedEntryState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AncientGame_EGroundedEntryState_Statics::Enumerators[] = {
		{ "EGroundedEntryState::None", (int64)EGroundedEntryState::None },
		{ "EGroundedEntryState::Roll", (int64)EGroundedEntryState::Roll },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AncientGame_EGroundedEntryState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EGroundedEntryState::None" },
		{ "Roll.DisplayName", "Roll" },
		{ "Roll.Name", "EGroundedEntryState::Roll" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AncientGame_EGroundedEntryState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		"EGroundedEntryState",
		"EGroundedEntryState",
		Z_Construct_UEnum_AncientGame_EGroundedEntryState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AncientGame_EGroundedEntryState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AncientGame_EGroundedEntryState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AncientGame_EGroundedEntryState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AncientGame_EGroundedEntryState()
	{
		if (!Z_Registration_Info_UEnum_EGroundedEntryState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroundedEntryState.InnerSingleton, Z_Construct_UEnum_AncientGame_EGroundedEntryState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGroundedEntryState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterMovementMainParameters;
class UScriptStruct* FCharacterMovementMainParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterMovementMainParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterMovementMainParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterMovementMainParameters, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("CharacterMovementMainParameters"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterMovementMainParameters.OuterSingleton;
}
template<> ANCIENTGAME_API UScriptStruct* StaticStruct<FCharacterMovementMainParameters>()
{
	return FCharacterMovementMainParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrevMovementState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevMovementState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PrevMovementState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementAction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementAction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActualGait_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActualGait_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActualGait;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActualStance_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActualStance_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActualStance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ViewMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ViewMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverlayState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverlayState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterMovementMainParameters>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_MovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_MovementState_MetaData[] = {
		{ "Category", "CharacterMovementMainParameters" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_MovementState = { "MovementState", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementMainParameters, MovementState), Z_Construct_UEnum_AncientGame_ECharacterMovementState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_MovementState_MetaData), Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_MovementState_MetaData) }; // 1668545936
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_PrevMovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_PrevMovementState_MetaData[] = {
		{ "Category", "CharacterMovementMainParameters" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_PrevMovementState = { "PrevMovementState", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementMainParameters, PrevMovementState), Z_Construct_UEnum_AncientGame_ECharacterMovementState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_PrevMovementState_MetaData), Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_PrevMovementState_MetaData) }; // 1668545936
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_MovementAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_MovementAction_MetaData[] = {
		{ "Category", "CharacterMovementMainParameters" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_MovementAction = { "MovementAction", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementMainParameters, MovementAction), Z_Construct_UEnum_AncientGame_ECharacterMovementAction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_MovementAction_MetaData), Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_MovementAction_MetaData) }; // 1575401361
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_RotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_RotationMode_MetaData[] = {
		{ "Category", "CharacterMovementMainParameters" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementMainParameters, RotationMode), Z_Construct_UEnum_AncientGame_ECharacterMovementRotationMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_RotationMode_MetaData), Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_RotationMode_MetaData) }; // 2382187012
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_ActualGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_ActualGait_MetaData[] = {
		{ "Category", "CharacterMovementMainParameters" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_ActualGait = { "ActualGait", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementMainParameters, ActualGait), Z_Construct_UEnum_AncientGame_ECharacterMovementGait, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_ActualGait_MetaData), Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_ActualGait_MetaData) }; // 153741907
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_ActualStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_ActualStance_MetaData[] = {
		{ "Category", "CharacterMovementMainParameters" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_ActualStance = { "ActualStance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementMainParameters, ActualStance), Z_Construct_UEnum_AncientGame_ECharacterMovementStance, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_ActualStance_MetaData), Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_ActualStance_MetaData) }; // 312976044
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_ViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_ViewMode_MetaData[] = {
		{ "Category", "CharacterMovementMainParameters" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_ViewMode = { "ViewMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementMainParameters, ViewMode), Z_Construct_UEnum_AncientGame_ECharacterViewMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_ViewMode_MetaData), Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_ViewMode_MetaData) }; // 4144881161
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_OverlayState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_OverlayState_MetaData[] = {
		{ "Category", "CharacterMovementMainParameters" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_OverlayState = { "OverlayState", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementMainParameters, OverlayState), Z_Construct_UEnum_AncientGame_ECharacterOverlayState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_OverlayState_MetaData), Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_OverlayState_MetaData) }; // 2403736414
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_MovementState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_MovementState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_PrevMovementState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_PrevMovementState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_MovementAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_MovementAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_RotationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_RotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_ActualGait_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_ActualGait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_ActualStance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_ActualStance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_ViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_ViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_OverlayState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewProp_OverlayState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		&NewStructOps,
		"CharacterMovementMainParameters",
		Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::PropPointers),
		sizeof(FCharacterMovementMainParameters),
		alignof(FCharacterMovementMainParameters),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterMovementMainParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterMovementMainParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterMovementMainParameters.InnerSingleton, Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterMovementMainParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterMovementEssentialValues;
class UScriptStruct* FCharacterMovementEssentialValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterMovementEssentialValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterMovementEssentialValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterMovementEssentialValues, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("CharacterMovementEssentialValues"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterMovementEssentialValues.OuterSingleton;
}
template<> ANCIENTGAME_API UScriptStruct* StaticStruct<FCharacterMovementEssentialValues>()
{
	return FCharacterMovementEssentialValues::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsMoving_MetaData[];
#endif
		static void NewProp_IsMoving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMoving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasMovementInput_MetaData[];
#endif
		static void NewProp_HasMovementInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasMovementInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementInputAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementInputAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimingRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AimingRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimYawRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimYawRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterMovementEssentialValues>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "CharacterMovementEssentialValues" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementEssentialValues, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_Velocity_MetaData), Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_Velocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "CharacterMovementEssentialValues" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementEssentialValues, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_Acceleration_MetaData), Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_Acceleration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_MovementInput_MetaData[] = {
		{ "Category", "CharacterMovementEssentialValues" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_MovementInput = { "MovementInput", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementEssentialValues, MovementInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_MovementInput_MetaData), Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_MovementInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_IsMoving_MetaData[] = {
		{ "Category", "CharacterMovementEssentialValues" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_IsMoving_SetBit(void* Obj)
	{
		((FCharacterMovementEssentialValues*)Obj)->IsMoving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_IsMoving = { "IsMoving", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCharacterMovementEssentialValues), &Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_IsMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_IsMoving_MetaData), Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_IsMoving_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_HasMovementInput_MetaData[] = {
		{ "Category", "CharacterMovementEssentialValues" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_HasMovementInput_SetBit(void* Obj)
	{
		((FCharacterMovementEssentialValues*)Obj)->HasMovementInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_HasMovementInput = { "HasMovementInput", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCharacterMovementEssentialValues), &Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_HasMovementInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_HasMovementInput_MetaData), Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_HasMovementInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "CharacterMovementEssentialValues" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementEssentialValues, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_Speed_MetaData), Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_MovementInputAmount_MetaData[] = {
		{ "Category", "CharacterMovementEssentialValues" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_MovementInputAmount = { "MovementInputAmount", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementEssentialValues, MovementInputAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_MovementInputAmount_MetaData), Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_MovementInputAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_AimingRotation_MetaData[] = {
		{ "Category", "CharacterMovementEssentialValues" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_AimingRotation = { "AimingRotation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementEssentialValues, AimingRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_AimingRotation_MetaData), Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_AimingRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_AimYawRate_MetaData[] = {
		{ "Category", "CharacterMovementEssentialValues" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_AimYawRate = { "AimYawRate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterMovementEssentialValues, AimYawRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_AimYawRate_MetaData), Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_AimYawRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_MovementInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_IsMoving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_HasMovementInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_MovementInputAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_AimingRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewProp_AimYawRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		&NewStructOps,
		"CharacterMovementEssentialValues",
		Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::PropPointers),
		sizeof(FCharacterMovementEssentialValues),
		alignof(FCharacterMovementEssentialValues),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterMovementEssentialValues()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterMovementEssentialValues.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterMovementEssentialValues.InnerSingleton, Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterMovementEssentialValues.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AncientGame_OnOverlayStateChangeSignature__DelegateSignature_Statics
	{
		struct _Script_AncientGame_eventOnOverlayStateChangeSignature_Parms
		{
			ECharacterOverlayState NewOverlayState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewOverlayState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewOverlayState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AncientGame_OnOverlayStateChangeSignature__DelegateSignature_Statics::NewProp_NewOverlayState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AncientGame_OnOverlayStateChangeSignature__DelegateSignature_Statics::NewProp_NewOverlayState = { "NewOverlayState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AncientGame_eventOnOverlayStateChangeSignature_Parms, NewOverlayState), Z_Construct_UEnum_AncientGame_ECharacterOverlayState, METADATA_PARAMS(0, nullptr) }; // 2403736414
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AncientGame_OnOverlayStateChangeSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_OnOverlayStateChangeSignature__DelegateSignature_Statics::NewProp_NewOverlayState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_OnOverlayStateChangeSignature__DelegateSignature_Statics::NewProp_NewOverlayState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_OnOverlayStateChangeSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AncientGame_OnOverlayStateChangeSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AncientGame, nullptr, "OnOverlayStateChangeSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AncientGame_OnOverlayStateChangeSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnOverlayStateChangeSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AncientGame_OnOverlayStateChangeSignature__DelegateSignature_Statics::_Script_AncientGame_eventOnOverlayStateChangeSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnOverlayStateChangeSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AncientGame_OnOverlayStateChangeSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnOverlayStateChangeSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AncientGame_OnOverlayStateChangeSignature__DelegateSignature_Statics::_Script_AncientGame_eventOnOverlayStateChangeSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AncientGame_OnOverlayStateChangeSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AncientGame_OnOverlayStateChangeSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnOverlayStateChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnOverlayStateChangeSignature, ECharacterOverlayState NewOverlayState)
{
	struct _Script_AncientGame_eventOnOverlayStateChangeSignature_Parms
	{
		ECharacterOverlayState NewOverlayState;
	};
	_Script_AncientGame_eventOnOverlayStateChangeSignature_Parms Parms;
	Parms.NewOverlayState=NewOverlayState;
	OnOverlayStateChangeSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AncientGame_OnViewModeChangeSignature__DelegateSignature_Statics
	{
		struct _Script_AncientGame_eventOnViewModeChangeSignature_Parms
		{
			ECharacterViewMode NewViewMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewViewMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewViewMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AncientGame_OnViewModeChangeSignature__DelegateSignature_Statics::NewProp_NewViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AncientGame_OnViewModeChangeSignature__DelegateSignature_Statics::NewProp_NewViewMode = { "NewViewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AncientGame_eventOnViewModeChangeSignature_Parms, NewViewMode), Z_Construct_UEnum_AncientGame_ECharacterViewMode, METADATA_PARAMS(0, nullptr) }; // 4144881161
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AncientGame_OnViewModeChangeSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_OnViewModeChangeSignature__DelegateSignature_Statics::NewProp_NewViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_OnViewModeChangeSignature__DelegateSignature_Statics::NewProp_NewViewMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_OnViewModeChangeSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AncientGame_OnViewModeChangeSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AncientGame, nullptr, "OnViewModeChangeSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AncientGame_OnViewModeChangeSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnViewModeChangeSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AncientGame_OnViewModeChangeSignature__DelegateSignature_Statics::_Script_AncientGame_eventOnViewModeChangeSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnViewModeChangeSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AncientGame_OnViewModeChangeSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnViewModeChangeSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AncientGame_OnViewModeChangeSignature__DelegateSignature_Statics::_Script_AncientGame_eventOnViewModeChangeSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AncientGame_OnViewModeChangeSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AncientGame_OnViewModeChangeSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnViewModeChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnViewModeChangeSignature, ECharacterViewMode NewViewMode)
{
	struct _Script_AncientGame_eventOnViewModeChangeSignature_Parms
	{
		ECharacterViewMode NewViewMode;
	};
	_Script_AncientGame_eventOnViewModeChangeSignature_Parms Parms;
	Parms.NewViewMode=NewViewMode;
	OnViewModeChangeSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AncientGame_OnMovementGaitChangeSignature__DelegateSignature_Statics
	{
		struct _Script_AncientGame_eventOnMovementGaitChangeSignature_Parms
		{
			ECharacterMovementGait NewGait;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewGait_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGait;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AncientGame_OnMovementGaitChangeSignature__DelegateSignature_Statics::NewProp_NewGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AncientGame_OnMovementGaitChangeSignature__DelegateSignature_Statics::NewProp_NewGait = { "NewGait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AncientGame_eventOnMovementGaitChangeSignature_Parms, NewGait), Z_Construct_UEnum_AncientGame_ECharacterMovementGait, METADATA_PARAMS(0, nullptr) }; // 153741907
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AncientGame_OnMovementGaitChangeSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_OnMovementGaitChangeSignature__DelegateSignature_Statics::NewProp_NewGait_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_OnMovementGaitChangeSignature__DelegateSignature_Statics::NewProp_NewGait,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_OnMovementGaitChangeSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AncientGame_OnMovementGaitChangeSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AncientGame, nullptr, "OnMovementGaitChangeSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AncientGame_OnMovementGaitChangeSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnMovementGaitChangeSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AncientGame_OnMovementGaitChangeSignature__DelegateSignature_Statics::_Script_AncientGame_eventOnMovementGaitChangeSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnMovementGaitChangeSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AncientGame_OnMovementGaitChangeSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnMovementGaitChangeSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AncientGame_OnMovementGaitChangeSignature__DelegateSignature_Statics::_Script_AncientGame_eventOnMovementGaitChangeSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AncientGame_OnMovementGaitChangeSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AncientGame_OnMovementGaitChangeSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMovementGaitChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMovementGaitChangeSignature, ECharacterMovementGait NewGait)
{
	struct _Script_AncientGame_eventOnMovementGaitChangeSignature_Parms
	{
		ECharacterMovementGait NewGait;
	};
	_Script_AncientGame_eventOnMovementGaitChangeSignature_Parms Parms;
	Parms.NewGait=NewGait;
	OnMovementGaitChangeSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AncientGame_OnMovementRotationModeChangeSignature__DelegateSignature_Statics
	{
		struct _Script_AncientGame_eventOnMovementRotationModeChangeSignature_Parms
		{
			ECharacterMovementRotationMode NewRotationMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewRotationMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewRotationMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AncientGame_OnMovementRotationModeChangeSignature__DelegateSignature_Statics::NewProp_NewRotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AncientGame_OnMovementRotationModeChangeSignature__DelegateSignature_Statics::NewProp_NewRotationMode = { "NewRotationMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AncientGame_eventOnMovementRotationModeChangeSignature_Parms, NewRotationMode), Z_Construct_UEnum_AncientGame_ECharacterMovementRotationMode, METADATA_PARAMS(0, nullptr) }; // 2382187012
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AncientGame_OnMovementRotationModeChangeSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_OnMovementRotationModeChangeSignature__DelegateSignature_Statics::NewProp_NewRotationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_OnMovementRotationModeChangeSignature__DelegateSignature_Statics::NewProp_NewRotationMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_OnMovementRotationModeChangeSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AncientGame_OnMovementRotationModeChangeSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AncientGame, nullptr, "OnMovementRotationModeChangeSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AncientGame_OnMovementRotationModeChangeSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnMovementRotationModeChangeSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AncientGame_OnMovementRotationModeChangeSignature__DelegateSignature_Statics::_Script_AncientGame_eventOnMovementRotationModeChangeSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnMovementRotationModeChangeSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AncientGame_OnMovementRotationModeChangeSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnMovementRotationModeChangeSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AncientGame_OnMovementRotationModeChangeSignature__DelegateSignature_Statics::_Script_AncientGame_eventOnMovementRotationModeChangeSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AncientGame_OnMovementRotationModeChangeSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AncientGame_OnMovementRotationModeChangeSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMovementRotationModeChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMovementRotationModeChangeSignature, ECharacterMovementRotationMode NewRotationMode)
{
	struct _Script_AncientGame_eventOnMovementRotationModeChangeSignature_Parms
	{
		ECharacterMovementRotationMode NewRotationMode;
	};
	_Script_AncientGame_eventOnMovementRotationModeChangeSignature_Parms Parms;
	Parms.NewRotationMode=NewRotationMode;
	OnMovementRotationModeChangeSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AncientGame_OnMovementActionChangeSignature__DelegateSignature_Statics
	{
		struct _Script_AncientGame_eventOnMovementActionChangeSignature_Parms
		{
			ECharacterMovementAction NewAction;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewAction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AncientGame_OnMovementActionChangeSignature__DelegateSignature_Statics::NewProp_NewAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AncientGame_OnMovementActionChangeSignature__DelegateSignature_Statics::NewProp_NewAction = { "NewAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AncientGame_eventOnMovementActionChangeSignature_Parms, NewAction), Z_Construct_UEnum_AncientGame_ECharacterMovementAction, METADATA_PARAMS(0, nullptr) }; // 1575401361
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AncientGame_OnMovementActionChangeSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_OnMovementActionChangeSignature__DelegateSignature_Statics::NewProp_NewAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_OnMovementActionChangeSignature__DelegateSignature_Statics::NewProp_NewAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_OnMovementActionChangeSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AncientGame_OnMovementActionChangeSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AncientGame, nullptr, "OnMovementActionChangeSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AncientGame_OnMovementActionChangeSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnMovementActionChangeSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AncientGame_OnMovementActionChangeSignature__DelegateSignature_Statics::_Script_AncientGame_eventOnMovementActionChangeSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnMovementActionChangeSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AncientGame_OnMovementActionChangeSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnMovementActionChangeSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AncientGame_OnMovementActionChangeSignature__DelegateSignature_Statics::_Script_AncientGame_eventOnMovementActionChangeSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AncientGame_OnMovementActionChangeSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AncientGame_OnMovementActionChangeSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMovementActionChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMovementActionChangeSignature, ECharacterMovementAction NewAction)
{
	struct _Script_AncientGame_eventOnMovementActionChangeSignature_Parms
	{
		ECharacterMovementAction NewAction;
	};
	_Script_AncientGame_eventOnMovementActionChangeSignature_Parms Parms;
	Parms.NewAction=NewAction;
	OnMovementActionChangeSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AncientGame_OnMovementStateChangeSignature__DelegateSignature_Statics
	{
		struct _Script_AncientGame_eventOnMovementStateChangeSignature_Parms
		{
			ECharacterMovementState NewState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AncientGame_OnMovementStateChangeSignature__DelegateSignature_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AncientGame_OnMovementStateChangeSignature__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AncientGame_eventOnMovementStateChangeSignature_Parms, NewState), Z_Construct_UEnum_AncientGame_ECharacterMovementState, METADATA_PARAMS(0, nullptr) }; // 1668545936
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AncientGame_OnMovementStateChangeSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_OnMovementStateChangeSignature__DelegateSignature_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_OnMovementStateChangeSignature__DelegateSignature_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_OnMovementStateChangeSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AncientGame_OnMovementStateChangeSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AncientGame, nullptr, "OnMovementStateChangeSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AncientGame_OnMovementStateChangeSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnMovementStateChangeSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AncientGame_OnMovementStateChangeSignature__DelegateSignature_Statics::_Script_AncientGame_eventOnMovementStateChangeSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnMovementStateChangeSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AncientGame_OnMovementStateChangeSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnMovementStateChangeSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AncientGame_OnMovementStateChangeSignature__DelegateSignature_Statics::_Script_AncientGame_eventOnMovementStateChangeSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AncientGame_OnMovementStateChangeSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AncientGame_OnMovementStateChangeSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMovementStateChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMovementStateChangeSignature, ECharacterMovementState NewState)
{
	struct _Script_AncientGame_eventOnMovementStateChangeSignature_Parms
	{
		ECharacterMovementState NewState;
	};
	_Script_AncientGame_eventOnMovementStateChangeSignature_Parms Parms;
	Parms.NewState=NewState;
	OnMovementStateChangeSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AncientGame_OnMovementStanceChangeSignature__DelegateSignature_Statics
	{
		struct _Script_AncientGame_eventOnMovementStanceChangeSignature_Parms
		{
			ECharacterMovementStance NewSStance;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewSStance_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewSStance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AncientGame_OnMovementStanceChangeSignature__DelegateSignature_Statics::NewProp_NewSStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AncientGame_OnMovementStanceChangeSignature__DelegateSignature_Statics::NewProp_NewSStance = { "NewSStance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AncientGame_eventOnMovementStanceChangeSignature_Parms, NewSStance), Z_Construct_UEnum_AncientGame_ECharacterMovementStance, METADATA_PARAMS(0, nullptr) }; // 312976044
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AncientGame_OnMovementStanceChangeSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_OnMovementStanceChangeSignature__DelegateSignature_Statics::NewProp_NewSStance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_OnMovementStanceChangeSignature__DelegateSignature_Statics::NewProp_NewSStance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_OnMovementStanceChangeSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AncientGame_OnMovementStanceChangeSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AncientGame, nullptr, "OnMovementStanceChangeSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AncientGame_OnMovementStanceChangeSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnMovementStanceChangeSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AncientGame_OnMovementStanceChangeSignature__DelegateSignature_Statics::_Script_AncientGame_eventOnMovementStanceChangeSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnMovementStanceChangeSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AncientGame_OnMovementStanceChangeSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnMovementStanceChangeSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AncientGame_OnMovementStanceChangeSignature__DelegateSignature_Statics::_Script_AncientGame_eventOnMovementStanceChangeSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AncientGame_OnMovementStanceChangeSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AncientGame_OnMovementStanceChangeSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMovementStanceChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMovementStanceChangeSignature, ECharacterMovementStance NewSStance)
{
	struct _Script_AncientGame_eventOnMovementStanceChangeSignature_Parms
	{
		ECharacterMovementStance NewSStance;
	};
	_Script_AncientGame_eventOnMovementStanceChangeSignature_Parms Parms;
	Parms.NewSStance=NewSStance;
	OnMovementStanceChangeSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UQBaseAnimationSystemComponent::execSetOverlayState)
	{
		P_GET_ENUM(ECharacterOverlayState,Z_Param_NewOverlayState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverlayState(ECharacterOverlayState(Z_Param_NewOverlayState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseAnimationSystemComponent::execSetViewMode)
	{
		P_GET_ENUM(ECharacterViewMode,Z_Param_NewViewMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetViewMode(ECharacterViewMode(Z_Param_NewViewMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseAnimationSystemComponent::execSetAction)
	{
		P_GET_ENUM(ECharacterMovementAction,Z_Param_NewAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAction(ECharacterMovementAction(Z_Param_NewAction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseAnimationSystemComponent::execSetStance)
	{
		P_GET_ENUM(ECharacterMovementStance,Z_Param_NewStance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStance(ECharacterMovementStance(Z_Param_NewStance));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseAnimationSystemComponent::execSetRotationMode)
	{
		P_GET_ENUM(ECharacterMovementRotationMode,Z_Param_NewRotationMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotationMode(ECharacterMovementRotationMode(Z_Param_NewRotationMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseAnimationSystemComponent::execSetState)
	{
		P_GET_ENUM(ECharacterMovementState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetState(ECharacterMovementState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseAnimationSystemComponent::execSetGait)
	{
		P_GET_ENUM(ECharacterMovementGait,Z_Param_NewGait);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGait(ECharacterMovementGait(Z_Param_NewGait));
		P_NATIVE_END;
	}
	void UQBaseAnimationSystemComponent::StaticRegisterNativesUQBaseAnimationSystemComponent()
	{
		UClass* Class = UQBaseAnimationSystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAction", &UQBaseAnimationSystemComponent::execSetAction },
			{ "SetGait", &UQBaseAnimationSystemComponent::execSetGait },
			{ "SetOverlayState", &UQBaseAnimationSystemComponent::execSetOverlayState },
			{ "SetRotationMode", &UQBaseAnimationSystemComponent::execSetRotationMode },
			{ "SetStance", &UQBaseAnimationSystemComponent::execSetStance },
			{ "SetState", &UQBaseAnimationSystemComponent::execSetState },
			{ "SetViewMode", &UQBaseAnimationSystemComponent::execSetViewMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetAction_Statics
	{
		struct QBaseAnimationSystemComponent_eventSetAction_Parms
		{
			ECharacterMovementAction NewAction;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewAction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetAction_Statics::NewProp_NewAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetAction_Statics::NewProp_NewAction = { "NewAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseAnimationSystemComponent_eventSetAction_Parms, NewAction), Z_Construct_UEnum_AncientGame_ECharacterMovementAction, METADATA_PARAMS(0, nullptr) }; // 1575401361
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetAction_Statics::NewProp_NewAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetAction_Statics::NewProp_NewAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAnimationSystemComponent, nullptr, "SetAction", nullptr, nullptr, Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetAction_Statics::QBaseAnimationSystemComponent_eventSetAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetAction_Statics::QBaseAnimationSystemComponent_eventSetAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetGait_Statics
	{
		struct QBaseAnimationSystemComponent_eventSetGait_Parms
		{
			ECharacterMovementGait NewGait;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewGait_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGait;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetGait_Statics::NewProp_NewGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetGait_Statics::NewProp_NewGait = { "NewGait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseAnimationSystemComponent_eventSetGait_Parms, NewGait), Z_Construct_UEnum_AncientGame_ECharacterMovementGait, METADATA_PARAMS(0, nullptr) }; // 153741907
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetGait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetGait_Statics::NewProp_NewGait_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetGait_Statics::NewProp_NewGait,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetGait_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetGait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAnimationSystemComponent, nullptr, "SetGait", nullptr, nullptr, Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetGait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetGait_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetGait_Statics::QBaseAnimationSystemComponent_eventSetGait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetGait_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetGait_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetGait_Statics::QBaseAnimationSystemComponent_eventSetGait_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetGait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetGait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetOverlayState_Statics
	{
		struct QBaseAnimationSystemComponent_eventSetOverlayState_Parms
		{
			ECharacterOverlayState NewOverlayState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewOverlayState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewOverlayState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetOverlayState_Statics::NewProp_NewOverlayState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetOverlayState_Statics::NewProp_NewOverlayState = { "NewOverlayState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseAnimationSystemComponent_eventSetOverlayState_Parms, NewOverlayState), Z_Construct_UEnum_AncientGame_ECharacterOverlayState, METADATA_PARAMS(0, nullptr) }; // 2403736414
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetOverlayState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetOverlayState_Statics::NewProp_NewOverlayState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetOverlayState_Statics::NewProp_NewOverlayState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetOverlayState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetOverlayState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAnimationSystemComponent, nullptr, "SetOverlayState", nullptr, nullptr, Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetOverlayState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetOverlayState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetOverlayState_Statics::QBaseAnimationSystemComponent_eventSetOverlayState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetOverlayState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetOverlayState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetOverlayState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetOverlayState_Statics::QBaseAnimationSystemComponent_eventSetOverlayState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetOverlayState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetOverlayState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetRotationMode_Statics
	{
		struct QBaseAnimationSystemComponent_eventSetRotationMode_Parms
		{
			ECharacterMovementRotationMode NewRotationMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewRotationMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewRotationMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetRotationMode_Statics::NewProp_NewRotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetRotationMode_Statics::NewProp_NewRotationMode = { "NewRotationMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseAnimationSystemComponent_eventSetRotationMode_Parms, NewRotationMode), Z_Construct_UEnum_AncientGame_ECharacterMovementRotationMode, METADATA_PARAMS(0, nullptr) }; // 2382187012
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetRotationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetRotationMode_Statics::NewProp_NewRotationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetRotationMode_Statics::NewProp_NewRotationMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetRotationMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetRotationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAnimationSystemComponent, nullptr, "SetRotationMode", nullptr, nullptr, Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetRotationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetRotationMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetRotationMode_Statics::QBaseAnimationSystemComponent_eventSetRotationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetRotationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetRotationMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetRotationMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetRotationMode_Statics::QBaseAnimationSystemComponent_eventSetRotationMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetRotationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetRotationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetStance_Statics
	{
		struct QBaseAnimationSystemComponent_eventSetStance_Parms
		{
			ECharacterMovementStance NewStance;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewStance_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewStance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetStance_Statics::NewProp_NewStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetStance_Statics::NewProp_NewStance = { "NewStance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseAnimationSystemComponent_eventSetStance_Parms, NewStance), Z_Construct_UEnum_AncientGame_ECharacterMovementStance, METADATA_PARAMS(0, nullptr) }; // 312976044
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetStance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetStance_Statics::NewProp_NewStance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetStance_Statics::NewProp_NewStance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetStance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAnimationSystemComponent, nullptr, "SetStance", nullptr, nullptr, Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetStance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetStance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetStance_Statics::QBaseAnimationSystemComponent_eventSetStance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetStance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetStance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetStance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetStance_Statics::QBaseAnimationSystemComponent_eventSetStance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetStance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetStance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetState_Statics
	{
		struct QBaseAnimationSystemComponent_eventSetState_Parms
		{
			ECharacterMovementState NewState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseAnimationSystemComponent_eventSetState_Parms, NewState), Z_Construct_UEnum_AncientGame_ECharacterMovementState, METADATA_PARAMS(0, nullptr) }; // 1668545936
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetState_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAnimationSystemComponent, nullptr, "SetState", nullptr, nullptr, Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetState_Statics::QBaseAnimationSystemComponent_eventSetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetState_Statics::QBaseAnimationSystemComponent_eventSetState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetViewMode_Statics
	{
		struct QBaseAnimationSystemComponent_eventSetViewMode_Parms
		{
			ECharacterViewMode NewViewMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewViewMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewViewMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetViewMode_Statics::NewProp_NewViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetViewMode_Statics::NewProp_NewViewMode = { "NewViewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseAnimationSystemComponent_eventSetViewMode_Parms, NewViewMode), Z_Construct_UEnum_AncientGame_ECharacterViewMode, METADATA_PARAMS(0, nullptr) }; // 4144881161
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetViewMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetViewMode_Statics::NewProp_NewViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetViewMode_Statics::NewProp_NewViewMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetViewMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetViewMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAnimationSystemComponent, nullptr, "SetViewMode", nullptr, nullptr, Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetViewMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetViewMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetViewMode_Statics::QBaseAnimationSystemComponent_eventSetViewMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetViewMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetViewMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetViewMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetViewMode_Statics::QBaseAnimationSystemComponent_eventSetViewMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetViewMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetViewMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQBaseAnimationSystemComponent);
	UClass* Z_Construct_UClass_UQBaseAnimationSystemComponent_NoRegister()
	{
		return UQBaseAnimationSystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UQBaseAnimationSystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQBaseAnimationSystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseAnimationSystemComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UQBaseAnimationSystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetAction, "SetAction" }, // 3468683543
		{ &Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetGait, "SetGait" }, // 4045512955
		{ &Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetOverlayState, "SetOverlayState" }, // 840958547
		{ &Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetRotationMode, "SetRotationMode" }, // 2912624589
		{ &Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetStance, "SetStance" }, // 3113897450
		{ &Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetState, "SetState" }, // 3910393125
		{ &Z_Construct_UFunction_UQBaseAnimationSystemComponent_SetViewMode, "SetViewMode" }, // 2867385282
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseAnimationSystemComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseAnimationSystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
		{ "ModuleRelativePath", "Components/Animation/QBaseAnimationSystemComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQBaseAnimationSystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQBaseAnimationSystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQBaseAnimationSystemComponent_Statics::ClassParams = {
		&UQBaseAnimationSystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseAnimationSystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UQBaseAnimationSystemComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UQBaseAnimationSystemComponent()
	{
		if (!Z_Registration_Info_UClass_UQBaseAnimationSystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQBaseAnimationSystemComponent.OuterSingleton, Z_Construct_UClass_UQBaseAnimationSystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQBaseAnimationSystemComponent.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<UQBaseAnimationSystemComponent>()
	{
		return UQBaseAnimationSystemComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQBaseAnimationSystemComponent);
	UQBaseAnimationSystemComponent::~UQBaseAnimationSystemComponent() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_Statics::EnumInfo[] = {
		{ ECharacterMovementGait_StaticEnum, TEXT("ECharacterMovementGait"), &Z_Registration_Info_UEnum_ECharacterMovementGait, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 153741907U) },
		{ ECharacterMovementState_StaticEnum, TEXT("ECharacterMovementState"), &Z_Registration_Info_UEnum_ECharacterMovementState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1668545936U) },
		{ ECharacterMovementRotationMode_StaticEnum, TEXT("ECharacterMovementRotationMode"), &Z_Registration_Info_UEnum_ECharacterMovementRotationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2382187012U) },
		{ ECharacterMovementStance_StaticEnum, TEXT("ECharacterMovementStance"), &Z_Registration_Info_UEnum_ECharacterMovementStance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 312976044U) },
		{ ECharacterMovementAction_StaticEnum, TEXT("ECharacterMovementAction"), &Z_Registration_Info_UEnum_ECharacterMovementAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1575401361U) },
		{ ECharacterViewMode_StaticEnum, TEXT("ECharacterViewMode"), &Z_Registration_Info_UEnum_ECharacterViewMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4144881161U) },
		{ ECharacterOverlayState_StaticEnum, TEXT("ECharacterOverlayState"), &Z_Registration_Info_UEnum_ECharacterOverlayState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2403736414U) },
		{ EGroundedEntryState_StaticEnum, TEXT("EGroundedEntryState"), &Z_Registration_Info_UEnum_EGroundedEntryState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1974331422U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_Statics::ScriptStructInfo[] = {
		{ FCharacterMovementMainParameters::StaticStruct, Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics::NewStructOps, TEXT("CharacterMovementMainParameters"), &Z_Registration_Info_UScriptStruct_CharacterMovementMainParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterMovementMainParameters), 3470296184U) },
		{ FCharacterMovementEssentialValues::StaticStruct, Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics::NewStructOps, TEXT("CharacterMovementEssentialValues"), &Z_Registration_Info_UScriptStruct_CharacterMovementEssentialValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterMovementEssentialValues), 3837875760U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQBaseAnimationSystemComponent, UQBaseAnimationSystemComponent::StaticClass, TEXT("UQBaseAnimationSystemComponent"), &Z_Registration_Info_UClass_UQBaseAnimationSystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQBaseAnimationSystemComponent), 2346627089U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_1087157866(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
