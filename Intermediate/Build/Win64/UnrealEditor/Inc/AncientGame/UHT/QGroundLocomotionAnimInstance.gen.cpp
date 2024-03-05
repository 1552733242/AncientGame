// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQGroundLocomotionAnimInstance() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQBaseLocomotionAnimInstance();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQGroundLocomotionAnimInstance();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQGroundLocomotionAnimInstance_NoRegister();
	ANCIENTGAME_API UEnum* Z_Construct_UEnum_AncientGame_EGroundedEntryState();
	ANCIENTGAME_API UFunction* Z_Construct_UDelegateFunction_AncientGame_PlayTransitionSignature__DelegateSignature();
	ANCIENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicMontageParams();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DynamicMontageParams;
class UScriptStruct* FDynamicMontageParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DynamicMontageParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DynamicMontageParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicMontageParams, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("DynamicMontageParams"));
	}
	return Z_Registration_Info_UScriptStruct_DynamicMontageParams.OuterSingleton;
}
template<> ANCIENTGAME_API UScriptStruct* StaticStruct<FDynamicMontageParams>()
{
	return FDynamicMontageParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDynamicMontageParams_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicMontageParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "DynamicMontageParams" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicMontageParams, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_Animation_MetaData), Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_Animation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_BlendInTime_MetaData[] = {
		{ "Category", "DynamicMontageParams" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicMontageParams, BlendInTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_BlendInTime_MetaData), Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_BlendInTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_BlendOutTime_MetaData[] = {
		{ "Category", "DynamicMontageParams" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicMontageParams, BlendOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_BlendOutTime_MetaData), Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_BlendOutTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "DynamicMontageParams" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicMontageParams, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_PlayRate_MetaData), Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_PlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "DynamicMontageParams" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicMontageParams, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_StartTime_MetaData), Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_StartTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_BlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_BlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewProp_StartTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		&NewStructOps,
		"DynamicMontageParams",
		Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::PropPointers),
		sizeof(FDynamicMontageParams),
		alignof(FDynamicMontageParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDynamicMontageParams()
	{
		if (!Z_Registration_Info_UScriptStruct_DynamicMontageParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DynamicMontageParams.InnerSingleton, Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DynamicMontageParams.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AncientGame_PlayTransitionSignature__DelegateSignature_Statics
	{
		struct _Script_AncientGame_eventPlayTransitionSignature_Parms
		{
			FDynamicMontageParams Parameters;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_PlayTransitionSignature__DelegateSignature_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AncientGame_PlayTransitionSignature__DelegateSignature_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AncientGame_eventPlayTransitionSignature_Parms, Parameters), Z_Construct_UScriptStruct_FDynamicMontageParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_PlayTransitionSignature__DelegateSignature_Statics::NewProp_Parameters_MetaData), Z_Construct_UDelegateFunction_AncientGame_PlayTransitionSignature__DelegateSignature_Statics::NewProp_Parameters_MetaData) }; // 657405348
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AncientGame_PlayTransitionSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_PlayTransitionSignature__DelegateSignature_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_PlayTransitionSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AncientGame_PlayTransitionSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AncientGame, nullptr, "PlayTransitionSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AncientGame_PlayTransitionSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_PlayTransitionSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AncientGame_PlayTransitionSignature__DelegateSignature_Statics::_Script_AncientGame_eventPlayTransitionSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_PlayTransitionSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AncientGame_PlayTransitionSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_PlayTransitionSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AncientGame_PlayTransitionSignature__DelegateSignature_Statics::_Script_AncientGame_eventPlayTransitionSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AncientGame_PlayTransitionSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AncientGame_PlayTransitionSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPlayTransitionSignature_DelegateWrapper(const FMulticastScriptDelegate& PlayTransitionSignature, FDynamicMontageParams const& Parameters)
{
	struct _Script_AncientGame_eventPlayTransitionSignature_Parms
	{
		FDynamicMontageParams Parameters;
	};
	_Script_AncientGame_eventPlayTransitionSignature_Parms Parms;
	Parms.Parameters=Parameters;
	PlayTransitionSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UQGroundLocomotionAnimInstance::execOnPlayTransition)
	{
		P_GET_STRUCT_REF(FDynamicMontageParams,Z_Param_Out_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayTransition(Z_Param_Out_Parameters);
		P_NATIVE_END;
	}
	void UQGroundLocomotionAnimInstance::StaticRegisterNativesUQGroundLocomotionAnimInstance()
	{
		UClass* Class = UQGroundLocomotionAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayTransition", &UQGroundLocomotionAnimInstance::execOnPlayTransition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQGroundLocomotionAnimInstance_OnPlayTransition_Statics
	{
		struct QGroundLocomotionAnimInstance_eventOnPlayTransition_Parms
		{
			FDynamicMontageParams Parameters;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGroundLocomotionAnimInstance_OnPlayTransition_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQGroundLocomotionAnimInstance_OnPlayTransition_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QGroundLocomotionAnimInstance_eventOnPlayTransition_Parms, Parameters), Z_Construct_UScriptStruct_FDynamicMontageParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQGroundLocomotionAnimInstance_OnPlayTransition_Statics::NewProp_Parameters_MetaData), Z_Construct_UFunction_UQGroundLocomotionAnimInstance_OnPlayTransition_Statics::NewProp_Parameters_MetaData) }; // 657405348
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQGroundLocomotionAnimInstance_OnPlayTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQGroundLocomotionAnimInstance_OnPlayTransition_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGroundLocomotionAnimInstance_OnPlayTransition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQGroundLocomotionAnimInstance_OnPlayTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQGroundLocomotionAnimInstance, nullptr, "OnPlayTransition", nullptr, nullptr, Z_Construct_UFunction_UQGroundLocomotionAnimInstance_OnPlayTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGroundLocomotionAnimInstance_OnPlayTransition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQGroundLocomotionAnimInstance_OnPlayTransition_Statics::QGroundLocomotionAnimInstance_eventOnPlayTransition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQGroundLocomotionAnimInstance_OnPlayTransition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQGroundLocomotionAnimInstance_OnPlayTransition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQGroundLocomotionAnimInstance_OnPlayTransition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQGroundLocomotionAnimInstance_OnPlayTransition_Statics::QGroundLocomotionAnimInstance_eventOnPlayTransition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQGroundLocomotionAnimInstance_OnPlayTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQGroundLocomotionAnimInstance_OnPlayTransition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQGroundLocomotionAnimInstance);
	UClass* Z_Construct_UClass_UQGroundLocomotionAnimInstance_NoRegister()
	{
		return UQGroundLocomotionAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasMovementInput_MetaData[];
#endif
		static void NewProp_bHasMovementInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMovementInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldMove_MetaData[];
#endif
		static void NewProp_bShouldMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotate_L_MetaData[];
#endif
		static void NewProp_bRotate_L_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotate_L;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotate_R_MetaData[];
#endif
		static void NewProp_bRotate_R_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotate_R;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroundEntyState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundEntyState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GroundEntyState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_L_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootLock_L_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_L_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootLock_L_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_L_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootLock_L_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_R_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootLock_R_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_R_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootLock_R_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_R_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootLock_R_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootOffset_L_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffset_L_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootOffset_L_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffset_L_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootOffset_R_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffset_R_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootOffset_R_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffset_R_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PelvisOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PelvisAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayTransition_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlayTransition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQBaseLocomotionAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQGroundLocomotionAnimInstance_OnPlayTransition, "OnPlayTransition" }, // 450078193
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bHasMovementInput_MetaData[] = {
		{ "Category", "QGroundLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bHasMovementInput_SetBit(void* Obj)
	{
		((UQGroundLocomotionAnimInstance*)Obj)->bHasMovementInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bHasMovementInput = { "bHasMovementInput", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQGroundLocomotionAnimInstance), &Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bHasMovementInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bHasMovementInput_MetaData), Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bHasMovementInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_RotationScale_MetaData[] = {
		{ "Category", "QGroundLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_RotationScale = { "RotationScale", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQGroundLocomotionAnimInstance, RotationScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_RotationScale_MetaData), Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_RotationScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_RotateRate_MetaData[] = {
		{ "Category", "QGroundLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_RotateRate = { "RotateRate", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQGroundLocomotionAnimInstance, RotateRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_RotateRate_MetaData), Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_RotateRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bShouldMove_MetaData[] = {
		{ "Category", "QGroundLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bShouldMove_SetBit(void* Obj)
	{
		((UQGroundLocomotionAnimInstance*)Obj)->bShouldMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bShouldMove = { "bShouldMove", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQGroundLocomotionAnimInstance), &Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bShouldMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bShouldMove_MetaData), Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bShouldMove_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bRotate_L_MetaData[] = {
		{ "Category", "QGroundLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bRotate_L_SetBit(void* Obj)
	{
		((UQGroundLocomotionAnimInstance*)Obj)->bRotate_L = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bRotate_L = { "bRotate_L", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQGroundLocomotionAnimInstance), &Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bRotate_L_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bRotate_L_MetaData), Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bRotate_L_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bRotate_R_MetaData[] = {
		{ "Category", "QGroundLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bRotate_R_SetBit(void* Obj)
	{
		((UQGroundLocomotionAnimInstance*)Obj)->bRotate_R = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bRotate_R = { "bRotate_R", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQGroundLocomotionAnimInstance), &Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bRotate_R_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bRotate_R_MetaData), Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bRotate_R_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_GroundEntyState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_GroundEntyState_MetaData[] = {
		{ "Category", "QGroundLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_GroundEntyState = { "GroundEntyState", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQGroundLocomotionAnimInstance, GroundEntyState), Z_Construct_UEnum_AncientGame_EGroundedEntryState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_GroundEntyState_MetaData), Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_GroundEntyState_MetaData) }; // 1974331422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_L_Location_MetaData[] = {
		{ "Category", "QGroundLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_L_Location = { "FootLock_L_Location", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQGroundLocomotionAnimInstance, FootLock_L_Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_L_Location_MetaData), Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_L_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_L_Rotation_MetaData[] = {
		{ "Category", "QGroundLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_L_Rotation = { "FootLock_L_Rotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQGroundLocomotionAnimInstance, FootLock_L_Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_L_Rotation_MetaData), Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_L_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_L_Alpha_MetaData[] = {
		{ "Category", "QGroundLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_L_Alpha = { "FootLock_L_Alpha", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQGroundLocomotionAnimInstance, FootLock_L_Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_L_Alpha_MetaData), Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_L_Alpha_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_R_Location_MetaData[] = {
		{ "Category", "QGroundLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_R_Location = { "FootLock_R_Location", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQGroundLocomotionAnimInstance, FootLock_R_Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_R_Location_MetaData), Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_R_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_R_Rotation_MetaData[] = {
		{ "Category", "QGroundLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_R_Rotation = { "FootLock_R_Rotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQGroundLocomotionAnimInstance, FootLock_R_Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_R_Rotation_MetaData), Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_R_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_R_Alpha_MetaData[] = {
		{ "Category", "QGroundLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_R_Alpha = { "FootLock_R_Alpha", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQGroundLocomotionAnimInstance, FootLock_R_Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_R_Alpha_MetaData), Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_R_Alpha_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootOffset_L_Location_MetaData[] = {
		{ "Category", "QGroundLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootOffset_L_Location = { "FootOffset_L_Location", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQGroundLocomotionAnimInstance, FootOffset_L_Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootOffset_L_Location_MetaData), Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootOffset_L_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootOffset_L_Rotation_MetaData[] = {
		{ "Category", "QGroundLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootOffset_L_Rotation = { "FootOffset_L_Rotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQGroundLocomotionAnimInstance, FootOffset_L_Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootOffset_L_Rotation_MetaData), Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootOffset_L_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootOffset_R_Location_MetaData[] = {
		{ "Category", "QGroundLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootOffset_R_Location = { "FootOffset_R_Location", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQGroundLocomotionAnimInstance, FootOffset_R_Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootOffset_R_Location_MetaData), Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootOffset_R_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootOffset_R_Rotation_MetaData[] = {
		{ "Category", "QGroundLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootOffset_R_Rotation = { "FootOffset_R_Rotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQGroundLocomotionAnimInstance, FootOffset_R_Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootOffset_R_Rotation_MetaData), Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootOffset_R_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_PelvisOffset_MetaData[] = {
		{ "Category", "QGroundLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_PelvisOffset = { "PelvisOffset", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQGroundLocomotionAnimInstance, PelvisOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_PelvisOffset_MetaData), Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_PelvisOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_PelvisAlpha_MetaData[] = {
		{ "Category", "QGroundLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_PelvisAlpha = { "PelvisAlpha", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQGroundLocomotionAnimInstance, PelvisAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_PelvisAlpha_MetaData), Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_PelvisAlpha_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_PlayTransition_MetaData[] = {
		{ "ModuleRelativePath", "Characters/AnimationInstance/QGroundLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_PlayTransition = { "PlayTransition", nullptr, (EPropertyFlags)0x0020180000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQGroundLocomotionAnimInstance, PlayTransition), Z_Construct_UDelegateFunction_AncientGame_PlayTransitionSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_PlayTransition_MetaData), Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_PlayTransition_MetaData) }; // 4152051845
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bHasMovementInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_RotationScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_RotateRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bShouldMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bRotate_L,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_bRotate_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_GroundEntyState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_GroundEntyState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_L_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_L_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_L_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_R_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_R_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootLock_R_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootOffset_L_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootOffset_L_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootOffset_R_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_FootOffset_R_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_PelvisOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_PelvisAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::NewProp_PlayTransition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQGroundLocomotionAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::ClassParams = {
		&UQGroundLocomotionAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQGroundLocomotionAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UQGroundLocomotionAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQGroundLocomotionAnimInstance.OuterSingleton, Z_Construct_UClass_UQGroundLocomotionAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQGroundLocomotionAnimInstance.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<UQGroundLocomotionAnimInstance>()
	{
		return UQGroundLocomotionAnimInstance::StaticClass();
	}
	UQGroundLocomotionAnimInstance::UQGroundLocomotionAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQGroundLocomotionAnimInstance);
	UQGroundLocomotionAnimInstance::~UQGroundLocomotionAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QGroundLocomotionAnimInstance_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QGroundLocomotionAnimInstance_h_Statics::ScriptStructInfo[] = {
		{ FDynamicMontageParams::StaticStruct, Z_Construct_UScriptStruct_FDynamicMontageParams_Statics::NewStructOps, TEXT("DynamicMontageParams"), &Z_Registration_Info_UScriptStruct_DynamicMontageParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDynamicMontageParams), 657405348U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QGroundLocomotionAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQGroundLocomotionAnimInstance, UQGroundLocomotionAnimInstance::StaticClass, TEXT("UQGroundLocomotionAnimInstance"), &Z_Registration_Info_UClass_UQGroundLocomotionAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQGroundLocomotionAnimInstance), 1040406305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QGroundLocomotionAnimInstance_h_1008844569(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QGroundLocomotionAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QGroundLocomotionAnimInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QGroundLocomotionAnimInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QGroundLocomotionAnimInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
