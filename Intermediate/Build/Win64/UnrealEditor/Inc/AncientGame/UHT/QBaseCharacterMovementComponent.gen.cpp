// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/Movement/QBaseCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQBaseCharacterMovementComponent() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQBaseCharacterMovementComponent();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQBaseCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	void UQBaseCharacterMovementComponent::StaticRegisterNativesUQBaseCharacterMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQBaseCharacterMovementComponent);
	UClass* Z_Construct_UClass_UQBaseCharacterMovementComponent_NoRegister()
	{
		return UQBaseCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UQBaseCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQBaseCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseCharacterMovementComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/Movement/QBaseCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Components/Movement/QBaseCharacterMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQBaseCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQBaseCharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQBaseCharacterMovementComponent_Statics::ClassParams = {
		&UQBaseCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UQBaseCharacterMovementComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UQBaseCharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UQBaseCharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQBaseCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UQBaseCharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQBaseCharacterMovementComponent.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<UQBaseCharacterMovementComponent>()
	{
		return UQBaseCharacterMovementComponent::StaticClass();
	}
	UQBaseCharacterMovementComponent::UQBaseCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQBaseCharacterMovementComponent);
	UQBaseCharacterMovementComponent::~UQBaseCharacterMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Movement_QBaseCharacterMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Movement_QBaseCharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQBaseCharacterMovementComponent, UQBaseCharacterMovementComponent::StaticClass, TEXT("UQBaseCharacterMovementComponent"), &Z_Registration_Info_UClass_UQBaseCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQBaseCharacterMovementComponent), 2147621712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Movement_QBaseCharacterMovementComponent_h_1360996905(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Movement_QBaseCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Movement_QBaseCharacterMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
