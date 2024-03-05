// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/QBaseGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQBaseGameplayAbility() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQBaseGameplayAbility();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQBaseGameplayAbility_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	void UQBaseGameplayAbility::StaticRegisterNativesUQBaseGameplayAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQBaseGameplayAbility);
	UClass* Z_Construct_UClass_UQBaseGameplayAbility_NoRegister()
	{
		return UQBaseGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UQBaseGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OngoingEffectsToRemoveOnEnd_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OngoingEffectsToRemoveOnEnd_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OngoingEffectsToRemoveOnEnd;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OngoingEffectsToJustApplyOnStart_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OngoingEffectsToJustApplyOnStart_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OngoingEffectsToJustApplyOnStart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQBaseGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseGameplayAbility_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseGameplayAbility_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/QBaseGameplayAbility.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/QBaseGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UQBaseGameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd_Inner = { "OngoingEffectsToRemoveOnEnd", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseGameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/QBaseGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQBaseGameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd = { "OngoingEffectsToRemoveOnEnd", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseGameplayAbility, OngoingEffectsToRemoveOnEnd), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseGameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd_MetaData), Z_Construct_UClass_UQBaseGameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UQBaseGameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart_Inner = { "OngoingEffectsToJustApplyOnStart", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseGameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/QBaseGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQBaseGameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart = { "OngoingEffectsToJustApplyOnStart", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseGameplayAbility, OngoingEffectsToJustApplyOnStart), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseGameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart_MetaData), Z_Construct_UClass_UQBaseGameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQBaseGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseGameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseGameplayAbility_Statics::NewProp_OngoingEffectsToRemoveOnEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseGameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseGameplayAbility_Statics::NewProp_OngoingEffectsToJustApplyOnStart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQBaseGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQBaseGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQBaseGameplayAbility_Statics::ClassParams = {
		&UQBaseGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQBaseGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseGameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UQBaseGameplayAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseGameplayAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQBaseGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UQBaseGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQBaseGameplayAbility.OuterSingleton, Z_Construct_UClass_UQBaseGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQBaseGameplayAbility.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<UQBaseGameplayAbility>()
	{
		return UQBaseGameplayAbility::StaticClass();
	}
	UQBaseGameplayAbility::UQBaseGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQBaseGameplayAbility);
	UQBaseGameplayAbility::~UQBaseGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Abilities_QBaseGameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Abilities_QBaseGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQBaseGameplayAbility, UQBaseGameplayAbility::StaticClass, TEXT("UQBaseGameplayAbility"), &Z_Registration_Info_UClass_UQBaseGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQBaseGameplayAbility), 1556474098U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Abilities_QBaseGameplayAbility_h_1950495737(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Abilities_QBaseGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Abilities_QBaseGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
