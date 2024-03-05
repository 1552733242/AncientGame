// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/Character/QCharacterStateComponent.h"
#include "DataAssets/Item/QItemDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQCharacterStateComponent() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQAttributeSetBase_NoRegister();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQCharacterStateComponent();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQCharacterStateComponent_NoRegister();
	ANCIENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	void UQCharacterStateComponent::StaticRegisterNativesUQCharacterStateComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQCharacterStateComponent);
	UClass* Z_Construct_UClass_UQCharacterStateComponent_NoRegister()
	{
		return UQCharacterStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UQCharacterStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHand_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQCharacterStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterStateComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQCharacterStateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/Character/QCharacterStateComponent.h" },
		{ "ModuleRelativePath", "Components/Character/QCharacterStateComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQCharacterStateComponent_Statics::NewProp_LeftHand_MetaData[] = {
		{ "Category", "QCharacterStateComponent" },
		{ "ModuleRelativePath", "Components/Character/QCharacterStateComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQCharacterStateComponent_Statics::NewProp_LeftHand = { "LeftHand", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQCharacterStateComponent, LeftHand), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterStateComponent_Statics::NewProp_LeftHand_MetaData), Z_Construct_UClass_UQCharacterStateComponent_Statics::NewProp_LeftHand_MetaData) }; // 3861944561
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQCharacterStateComponent_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/Character/QCharacterStateComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQCharacterStateComponent_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQCharacterStateComponent, AttributeSet), Z_Construct_UClass_UQAttributeSetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterStateComponent_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UClass_UQCharacterStateComponent_Statics::NewProp_AttributeSet_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQCharacterStateComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQCharacterStateComponent_Statics::NewProp_LeftHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQCharacterStateComponent_Statics::NewProp_AttributeSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQCharacterStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQCharacterStateComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQCharacterStateComponent_Statics::ClassParams = {
		&UQCharacterStateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQCharacterStateComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterStateComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterStateComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UQCharacterStateComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQCharacterStateComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQCharacterStateComponent()
	{
		if (!Z_Registration_Info_UClass_UQCharacterStateComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQCharacterStateComponent.OuterSingleton, Z_Construct_UClass_UQCharacterStateComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQCharacterStateComponent.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<UQCharacterStateComponent>()
	{
		return UQCharacterStateComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQCharacterStateComponent);
	UQCharacterStateComponent::~UQCharacterStateComponent() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Character_QCharacterStateComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Character_QCharacterStateComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQCharacterStateComponent, UQCharacterStateComponent::StaticClass, TEXT("UQCharacterStateComponent"), &Z_Registration_Info_UClass_UQCharacterStateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQCharacterStateComponent), 524101268U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Character_QCharacterStateComponent_h_1883077360(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Character_QCharacterStateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Character_QCharacterStateComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
