// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQBaseLocomotionAnimInstance() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQBaseAnimInstance();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQBaseLocomotionAnimInstance();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQBaseLocomotionAnimInstance_NoRegister();
	ANCIENTGAME_API UEnum* Z_Construct_UEnum_AncientGame_EHipsDirection();
	ANCIENTGAME_API UEnum* Z_Construct_UEnum_AncientGame_EMovementDirection();
	ANCIENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FLeanAmount();
	ANCIENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FVelocityBlend();
	ANCIENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FYaw();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeanAmount;
class UScriptStruct* FLeanAmount::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeanAmount.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeanAmount.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeanAmount, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("LeanAmount"));
	}
	return Z_Registration_Info_UScriptStruct_LeanAmount.OuterSingleton;
}
template<> ANCIENTGAME_API UScriptStruct* StaticStruct<FLeanAmount>()
{
	return FLeanAmount::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLeanAmount_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LR_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BF_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BF;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeanAmount_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeanAmount_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeanAmount>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeanAmount_Statics::NewProp_LR_MetaData[] = {
		{ "Category", "LeanAmount" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeanAmount_Statics::NewProp_LR = { "LR", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeanAmount, LR), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeanAmount_Statics::NewProp_LR_MetaData), Z_Construct_UScriptStruct_FLeanAmount_Statics::NewProp_LR_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeanAmount_Statics::NewProp_BF_MetaData[] = {
		{ "Category", "LeanAmount" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeanAmount_Statics::NewProp_BF = { "BF", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeanAmount, BF), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeanAmount_Statics::NewProp_BF_MetaData), Z_Construct_UScriptStruct_FLeanAmount_Statics::NewProp_BF_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeanAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeanAmount_Statics::NewProp_LR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeanAmount_Statics::NewProp_BF,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeanAmount_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		&NewStructOps,
		"LeanAmount",
		Z_Construct_UScriptStruct_FLeanAmount_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeanAmount_Statics::PropPointers),
		sizeof(FLeanAmount),
		alignof(FLeanAmount),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeanAmount_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeanAmount_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeanAmount_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLeanAmount()
	{
		if (!Z_Registration_Info_UScriptStruct_LeanAmount.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeanAmount.InnerSingleton, Z_Construct_UScriptStruct_FLeanAmount_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LeanAmount.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Yaw;
class UScriptStruct* FYaw::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Yaw.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Yaw.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FYaw, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("Yaw"));
	}
	return Z_Registration_Info_UScriptStruct_Yaw.OuterSingleton;
}
template<> ANCIENTGAME_API UScriptStruct* StaticStruct<FYaw>()
{
	return FYaw::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FYaw_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_F_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_F;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_L_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_L;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_R;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYaw_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYaw_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYaw>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYaw_Statics::NewProp_F_MetaData[] = {
		{ "Category", "Yaw" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FYaw_Statics::NewProp_F = { "F", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYaw, F), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYaw_Statics::NewProp_F_MetaData), Z_Construct_UScriptStruct_FYaw_Statics::NewProp_F_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYaw_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Yaw" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FYaw_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYaw, B), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYaw_Statics::NewProp_B_MetaData), Z_Construct_UScriptStruct_FYaw_Statics::NewProp_B_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYaw_Statics::NewProp_L_MetaData[] = {
		{ "Category", "Yaw" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FYaw_Statics::NewProp_L = { "L", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYaw, L), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYaw_Statics::NewProp_L_MetaData), Z_Construct_UScriptStruct_FYaw_Statics::NewProp_L_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYaw_Statics::NewProp_R_MetaData[] = {
		{ "Category", "Yaw" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FYaw_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FYaw, R), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYaw_Statics::NewProp_R_MetaData), Z_Construct_UScriptStruct_FYaw_Statics::NewProp_R_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYaw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYaw_Statics::NewProp_F,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYaw_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYaw_Statics::NewProp_L,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYaw_Statics::NewProp_R,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYaw_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		&NewStructOps,
		"Yaw",
		Z_Construct_UScriptStruct_FYaw_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYaw_Statics::PropPointers),
		sizeof(FYaw),
		alignof(FYaw),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYaw_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FYaw_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYaw_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FYaw()
	{
		if (!Z_Registration_Info_UScriptStruct_Yaw.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Yaw.InnerSingleton, Z_Construct_UScriptStruct_FYaw_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Yaw.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VelocityBlend;
class UScriptStruct* FVelocityBlend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VelocityBlend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VelocityBlend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVelocityBlend, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("VelocityBlend"));
	}
	return Z_Registration_Info_UScriptStruct_VelocityBlend.OuterSingleton;
}
template<> ANCIENTGAME_API UScriptStruct* StaticStruct<FVelocityBlend>()
{
	return FVelocityBlend::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVelocityBlend_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_F_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_F;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_L_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_L;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_R;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVelocityBlend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc2\xbc\xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xc6\xab\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc2\xbc\xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xc6\xab\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVelocityBlend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVelocityBlend>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVelocityBlend_Statics::NewProp_F_MetaData[] = {
		{ "Category", "VelocityBlend" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVelocityBlend_Statics::NewProp_F = { "F", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVelocityBlend, F), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVelocityBlend_Statics::NewProp_F_MetaData), Z_Construct_UScriptStruct_FVelocityBlend_Statics::NewProp_F_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVelocityBlend_Statics::NewProp_B_MetaData[] = {
		{ "Category", "VelocityBlend" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVelocityBlend_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVelocityBlend, B), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVelocityBlend_Statics::NewProp_B_MetaData), Z_Construct_UScriptStruct_FVelocityBlend_Statics::NewProp_B_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVelocityBlend_Statics::NewProp_L_MetaData[] = {
		{ "Category", "VelocityBlend" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVelocityBlend_Statics::NewProp_L = { "L", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVelocityBlend, L), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVelocityBlend_Statics::NewProp_L_MetaData), Z_Construct_UScriptStruct_FVelocityBlend_Statics::NewProp_L_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVelocityBlend_Statics::NewProp_R_MetaData[] = {
		{ "Category", "VelocityBlend" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVelocityBlend_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVelocityBlend, R), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVelocityBlend_Statics::NewProp_R_MetaData), Z_Construct_UScriptStruct_FVelocityBlend_Statics::NewProp_R_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVelocityBlend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVelocityBlend_Statics::NewProp_F,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVelocityBlend_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVelocityBlend_Statics::NewProp_L,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVelocityBlend_Statics::NewProp_R,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVelocityBlend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		&NewStructOps,
		"VelocityBlend",
		Z_Construct_UScriptStruct_FVelocityBlend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVelocityBlend_Statics::PropPointers),
		sizeof(FVelocityBlend),
		alignof(FVelocityBlend),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVelocityBlend_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVelocityBlend_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVelocityBlend_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVelocityBlend()
	{
		if (!Z_Registration_Info_UScriptStruct_VelocityBlend.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VelocityBlend.InnerSingleton, Z_Construct_UScriptStruct_FVelocityBlend_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VelocityBlend.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovementDirection;
	static UEnum* EMovementDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovementDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovementDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AncientGame_EMovementDirection, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("EMovementDirection"));
		}
		return Z_Registration_Info_UEnum_EMovementDirection.OuterSingleton;
	}
	template<> ANCIENTGAME_API UEnum* StaticEnum<EMovementDirection>()
	{
		return EMovementDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_AncientGame_EMovementDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AncientGame_EMovementDirection_Statics::Enumerators[] = {
		{ "EMovementDirection::Forward", (int64)EMovementDirection::Forward },
		{ "EMovementDirection::Right", (int64)EMovementDirection::Right },
		{ "EMovementDirection::Left", (int64)EMovementDirection::Left },
		{ "EMovementDirection::Backward", (int64)EMovementDirection::Backward },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AncientGame_EMovementDirection_Statics::Enum_MetaDataParams[] = {
		{ "Backward.DisplayName", "Backward" },
		{ "Backward.Name", "EMovementDirection::Backward" },
		{ "BlueprintType", "true" },
		{ "Forward.DisplayName", "Forward" },
		{ "Forward.Name", "EMovementDirection::Forward" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EMovementDirection::Left" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EMovementDirection::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AncientGame_EMovementDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		"EMovementDirection",
		"EMovementDirection",
		Z_Construct_UEnum_AncientGame_EMovementDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AncientGame_EMovementDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AncientGame_EMovementDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AncientGame_EMovementDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AncientGame_EMovementDirection()
	{
		if (!Z_Registration_Info_UEnum_EMovementDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovementDirection.InnerSingleton, Z_Construct_UEnum_AncientGame_EMovementDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovementDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHipsDirection;
	static UEnum* EHipsDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHipsDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHipsDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AncientGame_EHipsDirection, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("EHipsDirection"));
		}
		return Z_Registration_Info_UEnum_EHipsDirection.OuterSingleton;
	}
	template<> ANCIENTGAME_API UEnum* StaticEnum<EHipsDirection>()
	{
		return EHipsDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_AncientGame_EHipsDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AncientGame_EHipsDirection_Statics::Enumerators[] = {
		{ "EHipsDirection::F", (int64)EHipsDirection::F },
		{ "EHipsDirection::B", (int64)EHipsDirection::B },
		{ "EHipsDirection::RF", (int64)EHipsDirection::RF },
		{ "EHipsDirection::RB", (int64)EHipsDirection::RB },
		{ "EHipsDirection::LF", (int64)EHipsDirection::LF },
		{ "EHipsDirection::LB", (int64)EHipsDirection::LB },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AncientGame_EHipsDirection_Statics::Enum_MetaDataParams[] = {
		{ "B.DisplayName", "B" },
		{ "B.Name", "EHipsDirection::B" },
		{ "BlueprintType", "true" },
		{ "F.DisplayName", "F" },
		{ "F.Name", "EHipsDirection::F" },
		{ "LB.DisplayName", "LB" },
		{ "LB.Name", "EHipsDirection::LB" },
		{ "LF.DisplayName", "LF" },
		{ "LF.Name", "EHipsDirection::LF" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
		{ "RB.DisplayName", "RB" },
		{ "RB.Name", "EHipsDirection::RB" },
		{ "RF.DisplayName", "RF" },
		{ "RF.Name", "EHipsDirection::RF" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AncientGame_EHipsDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		"EHipsDirection",
		"EHipsDirection",
		Z_Construct_UEnum_AncientGame_EHipsDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AncientGame_EHipsDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AncientGame_EHipsDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AncientGame_EHipsDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AncientGame_EHipsDirection()
	{
		if (!Z_Registration_Info_UEnum_EHipsDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHipsDirection.InnerSingleton, Z_Construct_UEnum_AncientGame_EHipsDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHipsDirection.InnerSingleton;
	}
	DEFINE_FUNCTION(UQBaseLocomotionAnimInstance::execGetN_WalkRun_BR)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlendSpace**)Z_Param__Result=P_THIS->GetN_WalkRun_BR();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseLocomotionAnimInstance::execGetN_WalkRun_BL)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlendSpace**)Z_Param__Result=P_THIS->GetN_WalkRun_BL();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseLocomotionAnimInstance::execGetN_WalkRun_B)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlendSpace**)Z_Param__Result=P_THIS->GetN_WalkRun_B();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseLocomotionAnimInstance::execGetN_WalkRun_FR)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlendSpace**)Z_Param__Result=P_THIS->GetN_WalkRun_FR();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseLocomotionAnimInstance::execGetN_WalkRun_FL)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlendSpace**)Z_Param__Result=P_THIS->GetN_WalkRun_FL();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseLocomotionAnimInstance::execGetN_WalkRun_F)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlendSpace**)Z_Param__Result=P_THIS->GetN_WalkRun_F();
		P_NATIVE_END;
	}
	void UQBaseLocomotionAnimInstance::StaticRegisterNativesUQBaseLocomotionAnimInstance()
	{
		UClass* Class = UQBaseLocomotionAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetN_WalkRun_B", &UQBaseLocomotionAnimInstance::execGetN_WalkRun_B },
			{ "GetN_WalkRun_BL", &UQBaseLocomotionAnimInstance::execGetN_WalkRun_BL },
			{ "GetN_WalkRun_BR", &UQBaseLocomotionAnimInstance::execGetN_WalkRun_BR },
			{ "GetN_WalkRun_F", &UQBaseLocomotionAnimInstance::execGetN_WalkRun_F },
			{ "GetN_WalkRun_FL", &UQBaseLocomotionAnimInstance::execGetN_WalkRun_FL },
			{ "GetN_WalkRun_FR", &UQBaseLocomotionAnimInstance::execGetN_WalkRun_FR },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_B_Statics
	{
		struct QBaseLocomotionAnimInstance_eventGetN_WalkRun_B_Parms
		{
			UBlendSpace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_B_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseLocomotionAnimInstance_eventGetN_WalkRun_B_Parms, ReturnValue), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_B_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_B_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_B_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_B_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseLocomotionAnimInstance, nullptr, "GetN_WalkRun_B", nullptr, nullptr, Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_B_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_B_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_B_Statics::QBaseLocomotionAnimInstance_eventGetN_WalkRun_B_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_B_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_B_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_B_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_B_Statics::QBaseLocomotionAnimInstance_eventGetN_WalkRun_B_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_B()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_B_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BL_Statics
	{
		struct QBaseLocomotionAnimInstance_eventGetN_WalkRun_BL_Parms
		{
			UBlendSpace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseLocomotionAnimInstance_eventGetN_WalkRun_BL_Parms, ReturnValue), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BL_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseLocomotionAnimInstance, nullptr, "GetN_WalkRun_BL", nullptr, nullptr, Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BL_Statics::QBaseLocomotionAnimInstance_eventGetN_WalkRun_BL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BL_Statics::QBaseLocomotionAnimInstance_eventGetN_WalkRun_BL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BR_Statics
	{
		struct QBaseLocomotionAnimInstance_eventGetN_WalkRun_BR_Parms
		{
			UBlendSpace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseLocomotionAnimInstance_eventGetN_WalkRun_BR_Parms, ReturnValue), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BR_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BR_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BR_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseLocomotionAnimInstance, nullptr, "GetN_WalkRun_BR", nullptr, nullptr, Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BR_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BR_Statics::QBaseLocomotionAnimInstance_eventGetN_WalkRun_BR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BR_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BR_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BR_Statics::QBaseLocomotionAnimInstance_eventGetN_WalkRun_BR_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_F_Statics
	{
		struct QBaseLocomotionAnimInstance_eventGetN_WalkRun_F_Parms
		{
			UBlendSpace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_F_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseLocomotionAnimInstance_eventGetN_WalkRun_F_Parms, ReturnValue), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_F_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_F_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_F_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_F_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseLocomotionAnimInstance, nullptr, "GetN_WalkRun_F", nullptr, nullptr, Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_F_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_F_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_F_Statics::QBaseLocomotionAnimInstance_eventGetN_WalkRun_F_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_F_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_F_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_F_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_F_Statics::QBaseLocomotionAnimInstance_eventGetN_WalkRun_F_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_F()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_F_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FL_Statics
	{
		struct QBaseLocomotionAnimInstance_eventGetN_WalkRun_FL_Parms
		{
			UBlendSpace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseLocomotionAnimInstance_eventGetN_WalkRun_FL_Parms, ReturnValue), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FL_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseLocomotionAnimInstance, nullptr, "GetN_WalkRun_FL", nullptr, nullptr, Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FL_Statics::QBaseLocomotionAnimInstance_eventGetN_WalkRun_FL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FL_Statics::QBaseLocomotionAnimInstance_eventGetN_WalkRun_FL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FR_Statics
	{
		struct QBaseLocomotionAnimInstance_eventGetN_WalkRun_FR_Parms
		{
			UBlendSpace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseLocomotionAnimInstance_eventGetN_WalkRun_FR_Parms, ReturnValue), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FR_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FR_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FR_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseLocomotionAnimInstance, nullptr, "GetN_WalkRun_FR", nullptr, nullptr, Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FR_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FR_Statics::QBaseLocomotionAnimInstance_eventGetN_WalkRun_FR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FR_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FR_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FR_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FR_Statics::QBaseLocomotionAnimInstance_eventGetN_WalkRun_FR_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQBaseLocomotionAnimInstance);
	UClass* Z_Construct_UClass_UQBaseLocomotionAnimInstance_NoRegister()
	{
		return UQBaseLocomotionAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrideBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StrideBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkRunBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkRunBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StandingPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchingPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchingPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeAccelerationAmount_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeAccelerationAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeanAmount_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeanAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Yaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiagonalScaleAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DiagonalScaleAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityBlend_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityBlend;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementDirection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HipsDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HipsDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HipsDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPivot_MetaData[];
#endif
		static void NewProp_bPivot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPivot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQBaseAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_B, "GetN_WalkRun_B" }, // 275532864
		{ &Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BL, "GetN_WalkRun_BL" }, // 448155669
		{ &Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_BR, "GetN_WalkRun_BR" }, // 3242909320
		{ &Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_F, "GetN_WalkRun_F" }, // 3570278710
		{ &Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FL, "GetN_WalkRun_FL" }, // 1708532531
		{ &Z_Construct_UFunction_UQBaseLocomotionAnimInstance_GetN_WalkRun_FR, "GetN_WalkRun_FR" }, // 2467206517
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_StrideBlend_MetaData[] = {
		{ "Category", "QBaseLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_StrideBlend = { "StrideBlend", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseLocomotionAnimInstance, StrideBlend), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_StrideBlend_MetaData), Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_StrideBlend_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_WalkRunBlend_MetaData[] = {
		{ "Category", "QBaseLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_WalkRunBlend = { "WalkRunBlend", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseLocomotionAnimInstance, WalkRunBlend), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_WalkRunBlend_MetaData), Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_WalkRunBlend_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_StandingPlayRate_MetaData[] = {
		{ "Category", "QBaseLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_StandingPlayRate = { "StandingPlayRate", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseLocomotionAnimInstance, StandingPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_StandingPlayRate_MetaData), Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_StandingPlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_CrouchingPlayRate_MetaData[] = {
		{ "Category", "QBaseLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_CrouchingPlayRate = { "CrouchingPlayRate", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseLocomotionAnimInstance, CrouchingPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_CrouchingPlayRate_MetaData), Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_CrouchingPlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_RelativeAccelerationAmount_MetaData[] = {
		{ "Category", "QBaseLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_RelativeAccelerationAmount = { "RelativeAccelerationAmount", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseLocomotionAnimInstance, RelativeAccelerationAmount), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_RelativeAccelerationAmount_MetaData), Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_RelativeAccelerationAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_LeanAmount_MetaData[] = {
		{ "Category", "QBaseLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_LeanAmount = { "LeanAmount", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseLocomotionAnimInstance, LeanAmount), Z_Construct_UScriptStruct_FLeanAmount, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_LeanAmount_MetaData), Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_LeanAmount_MetaData) }; // 2927610270
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_Yaw_MetaData[] = {
		{ "Category", "QBaseLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseLocomotionAnimInstance, Yaw), Z_Construct_UScriptStruct_FYaw, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_Yaw_MetaData), Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_Yaw_MetaData) }; // 653031580
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_DiagonalScaleAmount_MetaData[] = {
		{ "Category", "QBaseLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_DiagonalScaleAmount = { "DiagonalScaleAmount", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseLocomotionAnimInstance, DiagonalScaleAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_DiagonalScaleAmount_MetaData), Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_DiagonalScaleAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_VelocityBlend_MetaData[] = {
		{ "Category", "QBaseLocomotionAnimInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""FOOT_IK\xef\xbf\xbd\xc4\xb6\xd4\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""FOOT_IK\xef\xbf\xbd\xc4\xb6\xd4\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_VelocityBlend = { "VelocityBlend", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseLocomotionAnimInstance, VelocityBlend), Z_Construct_UScriptStruct_FVelocityBlend, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_VelocityBlend_MetaData), Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_VelocityBlend_MetaData) }; // 1789405938
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_MovementDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_MovementDirection_MetaData[] = {
		{ "Category", "QBaseLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_MovementDirection = { "MovementDirection", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseLocomotionAnimInstance, MovementDirection), Z_Construct_UEnum_AncientGame_EMovementDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_MovementDirection_MetaData), Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_MovementDirection_MetaData) }; // 3114768272
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_HipsDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_HipsDirection_MetaData[] = {
		{ "Category", "QBaseLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_HipsDirection = { "HipsDirection", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseLocomotionAnimInstance, HipsDirection), Z_Construct_UEnum_AncientGame_EHipsDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_HipsDirection_MetaData), Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_HipsDirection_MetaData) }; // 948608606
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "QBaseLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseLocomotionAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_bPivot_MetaData[] = {
		{ "Category", "QBaseLocomotionAnimInstance" },
		{ "ModuleRelativePath", "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_bPivot_SetBit(void* Obj)
	{
		((UQBaseLocomotionAnimInstance*)Obj)->bPivot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_bPivot = { "bPivot", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQBaseLocomotionAnimInstance), &Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_bPivot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_bPivot_MetaData), Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_bPivot_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_StrideBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_WalkRunBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_StandingPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_CrouchingPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_RelativeAccelerationAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_LeanAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_DiagonalScaleAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_VelocityBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_MovementDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_MovementDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_HipsDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_HipsDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::NewProp_bPivot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQBaseLocomotionAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::ClassParams = {
		&UQBaseLocomotionAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQBaseLocomotionAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UQBaseLocomotionAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQBaseLocomotionAnimInstance.OuterSingleton, Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQBaseLocomotionAnimInstance.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<UQBaseLocomotionAnimInstance>()
	{
		return UQBaseLocomotionAnimInstance::StaticClass();
	}
	UQBaseLocomotionAnimInstance::UQBaseLocomotionAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQBaseLocomotionAnimInstance);
	UQBaseLocomotionAnimInstance::~UQBaseLocomotionAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_Statics::EnumInfo[] = {
		{ EMovementDirection_StaticEnum, TEXT("EMovementDirection"), &Z_Registration_Info_UEnum_EMovementDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3114768272U) },
		{ EHipsDirection_StaticEnum, TEXT("EHipsDirection"), &Z_Registration_Info_UEnum_EHipsDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 948608606U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_Statics::ScriptStructInfo[] = {
		{ FLeanAmount::StaticStruct, Z_Construct_UScriptStruct_FLeanAmount_Statics::NewStructOps, TEXT("LeanAmount"), &Z_Registration_Info_UScriptStruct_LeanAmount, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeanAmount), 2927610270U) },
		{ FYaw::StaticStruct, Z_Construct_UScriptStruct_FYaw_Statics::NewStructOps, TEXT("Yaw"), &Z_Registration_Info_UScriptStruct_Yaw, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FYaw), 653031580U) },
		{ FVelocityBlend::StaticStruct, Z_Construct_UScriptStruct_FVelocityBlend_Statics::NewStructOps, TEXT("VelocityBlend"), &Z_Registration_Info_UScriptStruct_VelocityBlend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVelocityBlend), 1789405938U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQBaseLocomotionAnimInstance, UQBaseLocomotionAnimInstance::StaticClass, TEXT("UQBaseLocomotionAnimInstance"), &Z_Registration_Info_UClass_UQBaseLocomotionAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQBaseLocomotionAnimInstance), 3337303998U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_271422193(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
