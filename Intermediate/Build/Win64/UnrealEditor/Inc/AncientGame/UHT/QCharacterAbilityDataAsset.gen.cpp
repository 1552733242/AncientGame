// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAssets/Character/QCharacterAbilityDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQCharacterAbilityDataAsset() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQCharacterAbilityDataAsset();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQCharacterAbilityDataAsset_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	void UQCharacterAbilityDataAsset::StaticRegisterNativesUQCharacterAbilityDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQCharacterAbilityDataAsset);
	UClass* Z_Construct_UClass_UQCharacterAbilityDataAsset_NoRegister()
	{
		return UQCharacterAbilityDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Effects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Effects;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Abilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAssets/Character/QCharacterAbilityDataAsset.h" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAbilityDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::NewProp_Effects_Inner = { "Effects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAbilityDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQCharacterAbilityDataAsset, Effects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::NewProp_Effects_MetaData), Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::NewProp_Effects_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "DataAssets/Character/QCharacterAbilityDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQCharacterAbilityDataAsset, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::NewProp_Abilities_MetaData), Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::NewProp_Abilities_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::NewProp_Effects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::NewProp_Effects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::NewProp_Abilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::NewProp_Abilities,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQCharacterAbilityDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::ClassParams = {
		&UQCharacterAbilityDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQCharacterAbilityDataAsset()
	{
		if (!Z_Registration_Info_UClass_UQCharacterAbilityDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQCharacterAbilityDataAsset.OuterSingleton, Z_Construct_UClass_UQCharacterAbilityDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQCharacterAbilityDataAsset.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<UQCharacterAbilityDataAsset>()
	{
		return UQCharacterAbilityDataAsset::StaticClass();
	}
	UQCharacterAbilityDataAsset::UQCharacterAbilityDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQCharacterAbilityDataAsset);
	UQCharacterAbilityDataAsset::~UQCharacterAbilityDataAsset() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Character_QCharacterAbilityDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Character_QCharacterAbilityDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQCharacterAbilityDataAsset, UQCharacterAbilityDataAsset::StaticClass, TEXT("UQCharacterAbilityDataAsset"), &Z_Registration_Info_UClass_UQCharacterAbilityDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQCharacterAbilityDataAsset), 1096675044U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Character_QCharacterAbilityDataAsset_h_1562027054(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Character_QCharacterAbilityDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Character_QCharacterAbilityDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
