// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/QBaseItem.h"
#include "DataAssets/Item/QItemDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQBaseItem() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_AQBaseItem();
	ANCIENTGAME_API UClass* Z_Construct_UClass_AQBaseItem_NoRegister();
	ANCIENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FWorldItemData();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	void AQBaseItem::StaticRegisterNativesAQBaseItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQBaseItem);
	UClass* Z_Construct_UClass_AQBaseItem_NoRegister()
	{
		return AQBaseItem::StaticClass();
	}
	struct Z_Construct_UClass_AQBaseItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQBaseItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQBaseItem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQBaseItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/QBaseItem.h" },
		{ "ModuleRelativePath", "Items/QBaseItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQBaseItem_Statics::NewProp_ItemData_MetaData[] = {
		{ "Category", "QBaseItem" },
		{ "ModuleRelativePath", "Items/QBaseItem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AQBaseItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQBaseItem, ItemData), Z_Construct_UScriptStruct_FWorldItemData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQBaseItem_Statics::NewProp_ItemData_MetaData), Z_Construct_UClass_AQBaseItem_Statics::NewProp_ItemData_MetaData) }; // 1991578501
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AQBaseItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQBaseItem_Statics::NewProp_ItemData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQBaseItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQBaseItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AQBaseItem_Statics::ClassParams = {
		&AQBaseItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AQBaseItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AQBaseItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQBaseItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AQBaseItem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQBaseItem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AQBaseItem()
	{
		if (!Z_Registration_Info_UClass_AQBaseItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQBaseItem.OuterSingleton, Z_Construct_UClass_AQBaseItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AQBaseItem.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<AQBaseItem>()
	{
		return AQBaseItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQBaseItem);
	AQBaseItem::~AQBaseItem() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Items_QBaseItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Items_QBaseItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AQBaseItem, AQBaseItem::StaticClass, TEXT("AQBaseItem"), &Z_Registration_Info_UClass_AQBaseItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQBaseItem), 3956137829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Items_QBaseItem_h_1403044030(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Items_QBaseItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Items_QBaseItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
