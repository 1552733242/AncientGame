// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/AnimationInstance/QBaseAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQBaseAnimInstance() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQBaseAnimInstance();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQBaseAnimInstance_NoRegister();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQCharacterAnimationDataAsset_NoRegister();
	ANCIENTGAME_API UEnum* Z_Construct_UEnum_AncientGame_ECharacterMovementAction();
	ANCIENTGAME_API UEnum* Z_Construct_UEnum_AncientGame_ECharacterMovementGait();
	ANCIENTGAME_API UEnum* Z_Construct_UEnum_AncientGame_ECharacterMovementRotationMode();
	ANCIENTGAME_API UEnum* Z_Construct_UEnum_AncientGame_ECharacterMovementStance();
	ANCIENTGAME_API UEnum* Z_Construct_UEnum_AncientGame_ECharacterMovementState();
	ANCIENTGAME_API UEnum* Z_Construct_UEnum_AncientGame_ECharacterOverlayState();
	ANCIENTGAME_API UEnum* Z_Construct_UEnum_AncientGame_ECharacterViewMode();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	DEFINE_FUNCTION(UQBaseAnimInstance::execGetOverlayState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECharacterOverlayState*)Z_Param__Result=P_THIS->GetOverlayState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseAnimInstance::execGetViewMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECharacterViewMode*)Z_Param__Result=P_THIS->GetViewMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseAnimInstance::execGetAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECharacterMovementAction*)Z_Param__Result=P_THIS->GetAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseAnimInstance::execGetStance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECharacterMovementStance*)Z_Param__Result=P_THIS->GetStance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseAnimInstance::execGetRotationMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECharacterMovementRotationMode*)Z_Param__Result=P_THIS->GetRotationMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseAnimInstance::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECharacterMovementState*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseAnimInstance::execGetGait)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECharacterMovementGait*)Z_Param__Result=P_THIS->GetGait();
		P_NATIVE_END;
	}
	void UQBaseAnimInstance::StaticRegisterNativesUQBaseAnimInstance()
	{
		UClass* Class = UQBaseAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAction", &UQBaseAnimInstance::execGetAction },
			{ "GetGait", &UQBaseAnimInstance::execGetGait },
			{ "GetOverlayState", &UQBaseAnimInstance::execGetOverlayState },
			{ "GetRotationMode", &UQBaseAnimInstance::execGetRotationMode },
			{ "GetStance", &UQBaseAnimInstance::execGetStance },
			{ "GetState", &UQBaseAnimInstance::execGetState },
			{ "GetViewMode", &UQBaseAnimInstance::execGetViewMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQBaseAnimInstance_GetAction_Statics
	{
		struct QBaseAnimInstance_eventGetAction_Parms
		{
			ECharacterMovementAction ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQBaseAnimInstance_GetAction_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQBaseAnimInstance_GetAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseAnimInstance_eventGetAction_Parms, ReturnValue), Z_Construct_UEnum_AncientGame_ECharacterMovementAction, METADATA_PARAMS(0, nullptr) }; // 1575401361
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQBaseAnimInstance_GetAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimInstance_GetAction_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimInstance_GetAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAnimInstance_GetAction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAnimInstance_GetAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAnimInstance, nullptr, "GetAction", nullptr, nullptr, Z_Construct_UFunction_UQBaseAnimInstance_GetAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimInstance_GetAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQBaseAnimInstance_GetAction_Statics::QBaseAnimInstance_eventGetAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimInstance_GetAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAnimInstance_GetAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimInstance_GetAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQBaseAnimInstance_GetAction_Statics::QBaseAnimInstance_eventGetAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQBaseAnimInstance_GetAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAnimInstance_GetAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseAnimInstance_GetGait_Statics
	{
		struct QBaseAnimInstance_eventGetGait_Parms
		{
			ECharacterMovementGait ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQBaseAnimInstance_GetGait_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQBaseAnimInstance_GetGait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseAnimInstance_eventGetGait_Parms, ReturnValue), Z_Construct_UEnum_AncientGame_ECharacterMovementGait, METADATA_PARAMS(0, nullptr) }; // 153741907
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQBaseAnimInstance_GetGait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimInstance_GetGait_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimInstance_GetGait_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAnimInstance_GetGait_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAnimInstance_GetGait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAnimInstance, nullptr, "GetGait", nullptr, nullptr, Z_Construct_UFunction_UQBaseAnimInstance_GetGait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimInstance_GetGait_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQBaseAnimInstance_GetGait_Statics::QBaseAnimInstance_eventGetGait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimInstance_GetGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAnimInstance_GetGait_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimInstance_GetGait_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQBaseAnimInstance_GetGait_Statics::QBaseAnimInstance_eventGetGait_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQBaseAnimInstance_GetGait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAnimInstance_GetGait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseAnimInstance_GetOverlayState_Statics
	{
		struct QBaseAnimInstance_eventGetOverlayState_Parms
		{
			ECharacterOverlayState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQBaseAnimInstance_GetOverlayState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQBaseAnimInstance_GetOverlayState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseAnimInstance_eventGetOverlayState_Parms, ReturnValue), Z_Construct_UEnum_AncientGame_ECharacterOverlayState, METADATA_PARAMS(0, nullptr) }; // 2403736414
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQBaseAnimInstance_GetOverlayState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimInstance_GetOverlayState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimInstance_GetOverlayState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAnimInstance_GetOverlayState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAnimInstance_GetOverlayState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAnimInstance, nullptr, "GetOverlayState", nullptr, nullptr, Z_Construct_UFunction_UQBaseAnimInstance_GetOverlayState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimInstance_GetOverlayState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQBaseAnimInstance_GetOverlayState_Statics::QBaseAnimInstance_eventGetOverlayState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimInstance_GetOverlayState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAnimInstance_GetOverlayState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimInstance_GetOverlayState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQBaseAnimInstance_GetOverlayState_Statics::QBaseAnimInstance_eventGetOverlayState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQBaseAnimInstance_GetOverlayState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAnimInstance_GetOverlayState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseAnimInstance_GetRotationMode_Statics
	{
		struct QBaseAnimInstance_eventGetRotationMode_Parms
		{
			ECharacterMovementRotationMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQBaseAnimInstance_GetRotationMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQBaseAnimInstance_GetRotationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseAnimInstance_eventGetRotationMode_Parms, ReturnValue), Z_Construct_UEnum_AncientGame_ECharacterMovementRotationMode, METADATA_PARAMS(0, nullptr) }; // 2382187012
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQBaseAnimInstance_GetRotationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimInstance_GetRotationMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimInstance_GetRotationMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAnimInstance_GetRotationMode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAnimInstance_GetRotationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAnimInstance, nullptr, "GetRotationMode", nullptr, nullptr, Z_Construct_UFunction_UQBaseAnimInstance_GetRotationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimInstance_GetRotationMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQBaseAnimInstance_GetRotationMode_Statics::QBaseAnimInstance_eventGetRotationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimInstance_GetRotationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAnimInstance_GetRotationMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimInstance_GetRotationMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQBaseAnimInstance_GetRotationMode_Statics::QBaseAnimInstance_eventGetRotationMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQBaseAnimInstance_GetRotationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAnimInstance_GetRotationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseAnimInstance_GetStance_Statics
	{
		struct QBaseAnimInstance_eventGetStance_Parms
		{
			ECharacterMovementStance ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQBaseAnimInstance_GetStance_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQBaseAnimInstance_GetStance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseAnimInstance_eventGetStance_Parms, ReturnValue), Z_Construct_UEnum_AncientGame_ECharacterMovementStance, METADATA_PARAMS(0, nullptr) }; // 312976044
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQBaseAnimInstance_GetStance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimInstance_GetStance_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimInstance_GetStance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAnimInstance_GetStance_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAnimInstance_GetStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAnimInstance, nullptr, "GetStance", nullptr, nullptr, Z_Construct_UFunction_UQBaseAnimInstance_GetStance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimInstance_GetStance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQBaseAnimInstance_GetStance_Statics::QBaseAnimInstance_eventGetStance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimInstance_GetStance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAnimInstance_GetStance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimInstance_GetStance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQBaseAnimInstance_GetStance_Statics::QBaseAnimInstance_eventGetStance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQBaseAnimInstance_GetStance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAnimInstance_GetStance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseAnimInstance_GetState_Statics
	{
		struct QBaseAnimInstance_eventGetState_Parms
		{
			ECharacterMovementState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQBaseAnimInstance_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQBaseAnimInstance_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseAnimInstance_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_AncientGame_ECharacterMovementState, METADATA_PARAMS(0, nullptr) }; // 1668545936
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQBaseAnimInstance_GetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimInstance_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimInstance_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAnimInstance_GetState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAnimInstance_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAnimInstance, nullptr, "GetState", nullptr, nullptr, Z_Construct_UFunction_UQBaseAnimInstance_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimInstance_GetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQBaseAnimInstance_GetState_Statics::QBaseAnimInstance_eventGetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimInstance_GetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAnimInstance_GetState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimInstance_GetState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQBaseAnimInstance_GetState_Statics::QBaseAnimInstance_eventGetState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQBaseAnimInstance_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAnimInstance_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseAnimInstance_GetViewMode_Statics
	{
		struct QBaseAnimInstance_eventGetViewMode_Parms
		{
			ECharacterViewMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQBaseAnimInstance_GetViewMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQBaseAnimInstance_GetViewMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseAnimInstance_eventGetViewMode_Parms, ReturnValue), Z_Construct_UEnum_AncientGame_ECharacterViewMode, METADATA_PARAMS(0, nullptr) }; // 4144881161
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQBaseAnimInstance_GetViewMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimInstance_GetViewMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseAnimInstance_GetViewMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseAnimInstance_GetViewMode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseAnimInstance_GetViewMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseAnimInstance, nullptr, "GetViewMode", nullptr, nullptr, Z_Construct_UFunction_UQBaseAnimInstance_GetViewMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimInstance_GetViewMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQBaseAnimInstance_GetViewMode_Statics::QBaseAnimInstance_eventGetViewMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimInstance_GetViewMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseAnimInstance_GetViewMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseAnimInstance_GetViewMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQBaseAnimInstance_GetViewMode_Statics::QBaseAnimInstance_eventGetViewMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQBaseAnimInstance_GetViewMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseAnimInstance_GetViewMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQBaseAnimInstance);
	UClass* Z_Construct_UClass_UQBaseAnimInstance_NoRegister()
	{
		return UQBaseAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UQBaseAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCharacterAnimDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultCharacterAnimDataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQBaseAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseAnimInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UQBaseAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQBaseAnimInstance_GetAction, "GetAction" }, // 2036026971
		{ &Z_Construct_UFunction_UQBaseAnimInstance_GetGait, "GetGait" }, // 2239916940
		{ &Z_Construct_UFunction_UQBaseAnimInstance_GetOverlayState, "GetOverlayState" }, // 249655123
		{ &Z_Construct_UFunction_UQBaseAnimInstance_GetRotationMode, "GetRotationMode" }, // 1463646410
		{ &Z_Construct_UFunction_UQBaseAnimInstance_GetStance, "GetStance" }, // 2874400663
		{ &Z_Construct_UFunction_UQBaseAnimInstance_GetState, "GetState" }, // 2715622848
		{ &Z_Construct_UFunction_UQBaseAnimInstance_GetViewMode, "GetViewMode" }, // 3241386954
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseAnimInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Characters/AnimationInstance/QBaseAnimInstance.h" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseAnimInstance_Statics::NewProp_DefaultCharacterAnimDataAsset_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQBaseAnimInstance_Statics::NewProp_DefaultCharacterAnimDataAsset = { "DefaultCharacterAnimDataAsset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseAnimInstance, DefaultCharacterAnimDataAsset), Z_Construct_UClass_UQCharacterAnimationDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseAnimInstance_Statics::NewProp_DefaultCharacterAnimDataAsset_MetaData), Z_Construct_UClass_UQBaseAnimInstance_Statics::NewProp_DefaultCharacterAnimDataAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQBaseAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseAnimInstance_Statics::NewProp_DefaultCharacterAnimDataAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQBaseAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQBaseAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQBaseAnimInstance_Statics::ClassParams = {
		&UQBaseAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQBaseAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UQBaseAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQBaseAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UQBaseAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQBaseAnimInstance.OuterSingleton, Z_Construct_UClass_UQBaseAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQBaseAnimInstance.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<UQBaseAnimInstance>()
	{
		return UQBaseAnimInstance::StaticClass();
	}
	UQBaseAnimInstance::UQBaseAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQBaseAnimInstance);
	UQBaseAnimInstance::~UQBaseAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQBaseAnimInstance, UQBaseAnimInstance::StaticClass, TEXT("UQBaseAnimInstance"), &Z_Registration_Info_UClass_UQBaseAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQBaseAnimInstance), 3438861507U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseAnimInstance_h_2815292744(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
