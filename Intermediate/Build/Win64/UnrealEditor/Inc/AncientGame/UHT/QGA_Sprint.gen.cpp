// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/QGA_Sprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQGA_Sprint() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQBaseGameplayAbility();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQGA_Sprint();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQGA_Sprint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	void UQGA_Sprint::StaticRegisterNativesUQGA_Sprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQGA_Sprint);
	UClass* Z_Construct_UClass_UQGA_Sprint_NoRegister()
	{
		return UQGA_Sprint::StaticClass();
	}
	struct Z_Construct_UClass_UQGA_Sprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQGA_Sprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQBaseGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQGA_Sprint_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGA_Sprint_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/QGA_Sprint.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/QGA_Sprint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQGA_Sprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQGA_Sprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQGA_Sprint_Statics::ClassParams = {
		&UQGA_Sprint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGA_Sprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UQGA_Sprint_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UQGA_Sprint()
	{
		if (!Z_Registration_Info_UClass_UQGA_Sprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQGA_Sprint.OuterSingleton, Z_Construct_UClass_UQGA_Sprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQGA_Sprint.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<UQGA_Sprint>()
	{
		return UQGA_Sprint::StaticClass();
	}
	UQGA_Sprint::UQGA_Sprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQGA_Sprint);
	UQGA_Sprint::~UQGA_Sprint() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Abilities_QGA_Sprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Abilities_QGA_Sprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQGA_Sprint, UQGA_Sprint::StaticClass, TEXT("UQGA_Sprint"), &Z_Registration_Info_UClass_UQGA_Sprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQGA_Sprint), 2398277643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Abilities_QGA_Sprint_h_2568402786(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Abilities_QGA_Sprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Abilities_QGA_Sprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
