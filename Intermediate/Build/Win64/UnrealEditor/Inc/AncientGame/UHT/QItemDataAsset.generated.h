// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataAssets/Item/QItemDataAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANCIENTGAME_QItemDataAsset_generated_h
#error "QItemDataAsset.generated.h already included, missing '#pragma once' in QItemDataAsset.h"
#endif
#define ANCIENTGAME_QItemDataAsset_generated_h

#define FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemData_Statics; \
	ANCIENTGAME_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> ANCIENTGAME_API UScriptStruct* StaticStruct<struct FItemData>();

#define FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorldItemData_Statics; \
	ANCIENTGAME_API static class UScriptStruct* StaticStruct(); \
	typedef FItemData Super;


template<> ANCIENTGAME_API UScriptStruct* StaticStruct<struct FWorldItemData>();

#define FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_61_SPARSE_DATA
#define FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_61_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_61_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_61_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_61_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQItemDataAsset(); \
	friend struct Z_Construct_UClass_UQItemDataAsset_Statics; \
public: \
	DECLARE_CLASS(UQItemDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AncientGame"), NO_API) \
	DECLARE_SERIALIZER(UQItemDataAsset)


#define FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQItemDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQItemDataAsset(UQItemDataAsset&&); \
	NO_API UQItemDataAsset(const UQItemDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQItemDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQItemDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQItemDataAsset) \
	NO_API virtual ~UQItemDataAsset();


#define FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_58_PROLOG
#define FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_61_SPARSE_DATA \
	FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_61_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_61_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_61_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_61_INCLASS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANCIENTGAME_API UClass* StaticClass<class UQItemDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_AncientGame_Source_AncientGame_DataAssets_Item_QItemDataAsset_h


#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::Container) \
	op(EItemType::LeftHandWeapon) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> ANCIENTGAME_API UEnum* StaticEnum<EItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
