// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/AnimationInstance/QMainAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQMainAnimInstance() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQGroundLocomotionAnimInstance();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQMainAnimInstance();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQMainAnimInstance_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	DEFINE_FUNCTION(UQMainAnimInstance::execOnJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnJump();
		P_NATIVE_END;
	}
	void UQMainAnimInstance::StaticRegisterNativesUQMainAnimInstance()
	{
		UClass* Class = UQMainAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnJump", &UQMainAnimInstance::execOnJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQMainAnimInstance_OnJump_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQMainAnimInstance_OnJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQMainAnimInstance_OnJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQMainAnimInstance, nullptr, "OnJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQMainAnimInstance_OnJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQMainAnimInstance_OnJump_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UQMainAnimInstance_OnJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQMainAnimInstance_OnJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQMainAnimInstance);
	UClass* Z_Construct_UClass_UQMainAnimInstance_NoRegister()
	{
		return UQMainAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UQMainAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bJumped_MetaData[];
#endif
		static void NewProp_bJumped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bJumped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FallSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandPrediction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LandPrediction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimSweepTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimSweepTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpineRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputYawOffsetTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputYawOffsetTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftYawTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftYawTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightYawTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightYawTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardYawTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardYawTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothedAimingAngle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothedAimingAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enable_AimOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Enable_AimOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePose_N_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePose_N;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePose_CLF_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BasePose_CLF;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arm_L_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Arm_L;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arm_L_Add_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Arm_L_Add;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arm_L_LS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Arm_L_LS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arm_L_MS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Arm_L_MS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arm_R_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Arm_R;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arm_R_Add_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Arm_R_Add;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arm_R_LS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Arm_R_LS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arm_R_MS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Arm_R_MS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hand_L_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Hand_L;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hand_R_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Hand_R;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Legs_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Legs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Legs_Add_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Legs_Add;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pelvis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pelvis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pelvis_Add_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pelvis_Add;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spine_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Spine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spine_Add_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Spine_Add;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Head;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Head_Add_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Head_Add;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enable_HandIK_L_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Enable_HandIK_L;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enable_HandIK_R_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Enable_HandIK_R;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQMainAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQGroundLocomotionAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UQMainAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQMainAnimInstance_OnJump, "OnJump" }, // 3895009791
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_bJumped_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_bJumped_SetBit(void* Obj)
	{
		((UQMainAnimInstance*)Obj)->bJumped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_bJumped = { "bJumped", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQMainAnimInstance), &Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_bJumped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_bJumped_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_bJumped_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_JumpPlayRate_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_JumpPlayRate = { "JumpPlayRate", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, JumpPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_JumpPlayRate_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_JumpPlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_FallSpeed_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_FallSpeed = { "FallSpeed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, FallSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_FallSpeed_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_FallSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_LandPrediction_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_LandPrediction = { "LandPrediction", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, LandPrediction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_LandPrediction_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_LandPrediction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_AimSweepTime_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_AimSweepTime = { "AimSweepTime", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, AimSweepTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_AimSweepTime_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_AimSweepTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_SpineRotation_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xd6\xb1\xef\xbf\xbd\xef\xbf\xbd\xd7\xbc\xef\xbf\xbd\xc7\xb6\xc8\xb9\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xd6\xb1\xef\xbf\xbd\xef\xbf\xbd\xd7\xbc\xef\xbf\xbd\xc7\xb6\xc8\xb9\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_SpineRotation = { "SpineRotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, SpineRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_SpineRotation_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_SpineRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_InputYawOffsetTime_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xaa\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xaa\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_InputYawOffsetTime = { "InputYawOffsetTime", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, InputYawOffsetTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_InputYawOffsetTime_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_InputYawOffsetTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_LeftYawTime_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xd9\xb6\xc8\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5)\n" },
#endif
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd9\xb6\xc8\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_LeftYawTime = { "LeftYawTime", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, LeftYawTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_LeftYawTime_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_LeftYawTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_RightYawTime_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_RightYawTime = { "RightYawTime", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, RightYawTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_RightYawTime_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_RightYawTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_ForwardYawTime_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_ForwardYawTime = { "ForwardYawTime", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, ForwardYawTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_ForwardYawTime_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_ForwardYawTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_SmoothedAimingAngle_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_SmoothedAimingAngle = { "SmoothedAimingAngle", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, SmoothedAimingAngle), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_SmoothedAimingAngle_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_SmoothedAimingAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Enable_AimOffset_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Enable_AimOffset = { "Enable_AimOffset", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, Enable_AimOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Enable_AimOffset_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Enable_AimOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_BasePose_N_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_BasePose_N = { "BasePose_N", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, BasePose_N), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_BasePose_N_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_BasePose_N_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_BasePose_CLF_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_BasePose_CLF = { "BasePose_CLF", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, BasePose_CLF), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_BasePose_CLF_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_BasePose_CLF_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_L_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_L = { "Arm_L", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, Arm_L), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_L_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_L_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_L_Add_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_L_Add = { "Arm_L_Add", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, Arm_L_Add), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_L_Add_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_L_Add_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_L_LS_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_L_LS = { "Arm_L_LS", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, Arm_L_LS), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_L_LS_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_L_LS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_L_MS_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_L_MS = { "Arm_L_MS", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, Arm_L_MS), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_L_MS_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_L_MS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_R_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_R = { "Arm_R", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, Arm_R), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_R_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_R_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_R_Add_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_R_Add = { "Arm_R_Add", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, Arm_R_Add), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_R_Add_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_R_Add_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_R_LS_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_R_LS = { "Arm_R_LS", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, Arm_R_LS), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_R_LS_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_R_LS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_R_MS_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_R_MS = { "Arm_R_MS", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, Arm_R_MS), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_R_MS_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_R_MS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Hand_L_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Hand_L = { "Hand_L", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, Hand_L), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Hand_L_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Hand_L_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Hand_R_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Hand_R = { "Hand_R", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, Hand_R), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Hand_R_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Hand_R_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Legs_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Legs = { "Legs", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, Legs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Legs_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Legs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Legs_Add_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Legs_Add = { "Legs_Add", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, Legs_Add), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Legs_Add_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Legs_Add_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Pelvis_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Pelvis = { "Pelvis", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, Pelvis), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Pelvis_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Pelvis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Pelvis_Add_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Pelvis_Add = { "Pelvis_Add", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, Pelvis_Add), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Pelvis_Add_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Pelvis_Add_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Spine_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Spine = { "Spine", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, Spine), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Spine_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Spine_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Spine_Add_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Spine_Add = { "Spine_Add", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, Spine_Add), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Spine_Add_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Spine_Add_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Head_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, Head), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Head_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Head_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Head_Add_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Head_Add = { "Head_Add", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, Head_Add), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Head_Add_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Head_Add_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Enable_HandIK_L_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Enable_HandIK_L = { "Enable_HandIK_L", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, Enable_HandIK_L), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Enable_HandIK_L_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Enable_HandIK_L_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Enable_HandIK_R_MetaData[] = {
		{ "Category", "QMainAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QMainAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Enable_HandIK_R = { "Enable_HandIK_R", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQMainAnimInstance, Enable_HandIK_R), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Enable_HandIK_R_MetaData), Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Enable_HandIK_R_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQMainAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_bJumped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_JumpPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_FallSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_LandPrediction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_AimSweepTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_SpineRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_InputYawOffsetTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_LeftYawTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_RightYawTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_ForwardYawTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_SmoothedAimingAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Enable_AimOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_BasePose_N,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_BasePose_CLF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_L,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_L_Add,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_L_LS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_L_MS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_R_Add,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_R_LS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Arm_R_MS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Hand_L,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Hand_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Legs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Legs_Add,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Pelvis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Pelvis_Add,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Spine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Spine_Add,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Head,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Head_Add,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Enable_HandIK_L,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQMainAnimInstance_Statics::NewProp_Enable_HandIK_R,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQMainAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQMainAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQMainAnimInstance_Statics::ClassParams = {
		&UQMainAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQMainAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UQMainAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQMainAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQMainAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UQMainAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQMainAnimInstance.OuterSingleton, Z_Construct_UClass_UQMainAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQMainAnimInstance.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<UQMainAnimInstance>()
	{
		return UQMainAnimInstance::StaticClass();
	}
	UQMainAnimInstance::UQMainAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQMainAnimInstance);
	UQMainAnimInstance::~UQMainAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QMainAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QMainAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQMainAnimInstance, UQMainAnimInstance::StaticClass, TEXT("UQMainAnimInstance"), &Z_Registration_Info_UClass_UQMainAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQMainAnimInstance), 1358265690U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QMainAnimInstance_h_1429141036(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QMainAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QMainAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
