// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAssets/Item/QItemDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQItemDataAsset() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQItemDataAsset();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQItemDataAsset_NoRegister();
	ANCIENTGAME_API UEnum* Z_Construct_UEnum_AncientGame_EItemType();
	ANCIENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
	ANCIENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FWorldItemData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
	static UEnum* EItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AncientGame_EItemType, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("EItemType"));
		}
		return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
	}
	template<> ANCIENTGAME_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_AncientGame_EItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AncientGame_EItemType_Statics::Enumerators[] = {
		{ "EItemType::Container", (int64)EItemType::Container },
		{ "EItemType::LeftHandWeapon", (int64)EItemType::LeftHandWeapon },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AncientGame_EItemType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Container.DisplayName", "Container" },
		{ "Container.Name", "EItemType::Container" },
		{ "LeftHandWeapon.Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "LeftHandWeapon.DisplayName", "Container" },
		{ "LeftHandWeapon.Name", "EItemType::LeftHandWeapon" },
		{ "LeftHandWeapon.ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "ModuleRelativePath", "DataAssets/Item/QItemDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AncientGame_EItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AncientGame,
		nullptr,
		"EItemType",
		"EItemType",
		Z_Construct_UEnum_AncientGame_EItemType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AncientGame_EItemType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AncientGame_EItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AncientGame_EItemType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AncientGame_EItemType()
	{
		if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_AncientGame_EItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FItemData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemData;
class UScriptStruct* FItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemData, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("ItemData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton;
}
template<> ANCIENTGAME_API UScriptStruct* StaticStruct<FItemData>()
{
	return FItemData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arg_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Arg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DataAssets/Item/QItemDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "DataAssets/Item/QItemDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemID_MetaData), Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_UID_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "DataAssets/Item/QItemDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, UID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_UID_MetaData), Z_Construct_UScriptStruct_FItemData_Statics::NewProp_UID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "DataAssets/Item/QItemDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemName_MetaData), Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Image_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "DataAssets/Item/QItemDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Image_MetaData), Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Image_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "DataAssets/Item/QItemDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemType), Z_Construct_UEnum_AncientGame_EItemType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_MetaData), Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_MetaData) }; // 3304309685
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Arg_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "DataAssets/Item/QItemDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Arg = { "Arg", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, Arg), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Arg_MetaData), Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Arg_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_UID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Arg,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ItemData",
		Z_Construct_UScriptStruct_FItemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers),
		sizeof(FItemData),
		alignof(FItemData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FItemData()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton, Z_Construct_UScriptStruct_FItemData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWorldItemData>() == std::is_polymorphic<FItemData>(), "USTRUCT FWorldItemData cannot be polymorphic unless super FItemData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldItemData;
class UScriptStruct* FWorldItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldItemData, (UObject*)Z_Construct_UPackage__Script_AncientGame(), TEXT("WorldItemData"));
	}
	return Z_Registration_Info_UScriptStruct_WorldItemData.OuterSingleton;
}
template<> ANCIENTGAME_API UScriptStruct* StaticStruct<FWorldItemData>()
{
	return FWorldItemData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldItemData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buseSkeletal_MetaData[];
#endif
		static void NewProp_buseSkeletal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_buseSkeletal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldItemData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DataAssets/Item/QItemDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldItemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldItemData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldItemData_Statics::NewProp_buseSkeletal_MetaData[] = {
		{ "Category", "WorldItemData" },
		{ "ModuleRelativePath", "DataAssets/Item/QItemDataAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWorldItemData_Statics::NewProp_buseSkeletal_SetBit(void* Obj)
	{
		((FWorldItemData*)Obj)->buseSkeletal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorldItemData_Statics::NewProp_buseSkeletal = { "buseSkeletal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWorldItemData), &Z_Construct_UScriptStruct_FWorldItemData_Statics::NewProp_buseSkeletal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldItemData_Statics::NewProp_buseSkeletal_MetaData), Z_Construct_UScriptStruct_FWorldItemData_Statics::NewProp_buseSkeletal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldItemData_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "WorldItemData" },
		{ "ModuleRelativePath", "DataAssets/Item/QItemDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWorldItemData_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldItemData, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldItemData_Statics::NewProp_SkeletalMesh_MetaData), Z_Construct_UScriptStruct_FWorldItemData_Statics::NewProp_SkeletalMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldItemData_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "WorldItemData" },
		{ "ModuleRelativePath", "DataAssets/Item/QItemDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWorldItemData_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWorldItemData, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldItemData_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UScriptStruct_FWorldItemData_Statics::NewProp_StaticMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldItemData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldItemData_Statics::NewProp_buseSkeletal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldItemData_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldItemData_Statics::NewProp_StaticMesh,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldItemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
		Z_Construct_UScriptStruct_FItemData,
		&NewStructOps,
		"WorldItemData",
		Z_Construct_UScriptStruct_FWorldItemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldItemData_Statics::PropPointers),
		sizeof(FWorldItemData),
		alignof(FWorldItemData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWorldItemData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldItemData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWorldItemData()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldItemData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldItemData.InnerSingleton, Z_Construct_UScriptStruct_FWorldItemData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldItemData.InnerSingleton;
	}
	void UQItemDataAsset::StaticRegisterNativesUQItemDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQItemDataAsset);
	UClass* Z_Construct_UClass_UQItemDataAsset_NoRegister()
	{
		return UQItemDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UQItemDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQItemDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQItemDataAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQItemDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataAssets/Item/QItemDataAsset.h" },
		{ "ModuleRelativePath", "DataAssets/Item/QItemDataAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQItemDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQItemDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQItemDataAsset_Statics::ClassParams = {
		&UQItemDataAsset::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQItemDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UQItemDataAsset_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UQItemDataAsset()
	{
		if (!Z_Registration_Info_UClass_UQItemDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQItemDataAsset.OuterSingleton, Z_Construct_UClass_UQItemDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQItemDataAsset.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<UQItemDataAsset>()
	{
		return UQItemDataAsset::StaticClass();
	}
	UQItemDataAsset::UQItemDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQItemDataAsset);
	UQItemDataAsset::~UQItemDataAsset() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_Statics::EnumInfo[] = {
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3304309685U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_Statics::ScriptStructInfo[] = {
		{ FItemData::StaticStruct, Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps, TEXT("ItemData"), &Z_Registration_Info_UScriptStruct_ItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemData), 3861944561U) },
		{ FWorldItemData::StaticStruct, Z_Construct_UScriptStruct_FWorldItemData_Statics::NewStructOps, TEXT("WorldItemData"), &Z_Registration_Info_UScriptStruct_WorldItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldItemData), 1991578501U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQItemDataAsset, UQItemDataAsset::StaticClass, TEXT("UQItemDataAsset"), &Z_Registration_Info_UClass_UQItemDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQItemDataAsset), 789851135U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_1247968613(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
