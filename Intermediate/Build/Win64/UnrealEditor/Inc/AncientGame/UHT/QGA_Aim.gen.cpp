// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/Abilities/QGA_Aim.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQGA_Aim() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQBaseGameplayAbility();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQGA_Aim();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQGA_Aim_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	void UQGA_Aim::StaticRegisterNativesUQGA_Aim()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQGA_Aim);
	UClass* Z_Construct_UClass_UQGA_Aim_NoRegister()
	{
		return UQGA_Aim::StaticClass();
	}
	struct Z_Construct_UClass_UQGA_Aim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQGA_Aim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQBaseGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQGA_Aim_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGA_Aim_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/QGA_Aim.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/QGA_Aim.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQGA_Aim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQGA_Aim>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQGA_Aim_Statics::ClassParams = {
		&UQGA_Aim::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQGA_Aim_Statics::Class_MetaDataParams), Z_Construct_UClass_UQGA_Aim_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UQGA_Aim()
	{
		if (!Z_Registration_Info_UClass_UQGA_Aim.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQGA_Aim.OuterSingleton, Z_Construct_UClass_UQGA_Aim_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQGA_Aim.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<UQGA_Aim>()
	{
		return UQGA_Aim::StaticClass();
	}
	UQGA_Aim::UQGA_Aim(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQGA_Aim);
	UQGA_Aim::~UQGA_Aim() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Abilities_QGA_Aim_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Abilities_QGA_Aim_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQGA_Aim, UQGA_Aim::StaticClass, TEXT("UQGA_Aim"), &Z_Registration_Info_UClass_UQGA_Aim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQGA_Aim), 3195637128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Abilities_QGA_Aim_h_1119943843(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Abilities_QGA_Aim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Abilities_QGA_Aim_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
