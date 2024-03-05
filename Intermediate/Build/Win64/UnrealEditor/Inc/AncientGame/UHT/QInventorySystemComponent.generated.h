// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Inventory/QInventorySystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UQInventorySystemComponent;
struct FItemData;
#ifdef ANCIENTGAME_QInventorySystemComponent_generated_h
#error "QInventorySystemComponent.generated.h already included, missing '#pragma once' in QInventorySystemComponent.h"
#endif
#define ANCIENTGAME_QInventorySystemComponent_generated_h

#define FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h_12_DELEGATE \
ANCIENTGAME_API void FItemSignature_DelegateWrapper(const FMulticastScriptDelegate& ItemSignature, FItemData Item);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h_19_SPARSE_DATA
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllItems); \
	DECLARE_FUNCTION(execBP_RemoveItems); \
	DECLARE_FUNCTION(execBP_RemoveItem); \
	DECLARE_FUNCTION(execBP_AddItems); \
	DECLARE_FUNCTION(execBP_AddItem); \
	DECLARE_FUNCTION(execBP_MoveItems); \
	DECLARE_FUNCTION(execBP_MoveItem);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h_19_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQInventorySystemComponent(); \
	friend struct Z_Construct_UClass_UQInventorySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UQInventorySystemComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AncientGame"), NO_API) \
	DECLARE_SERIALIZER(UQInventorySystemComponent)


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQInventorySystemComponent(UQInventorySystemComponent&&); \
	NO_API UQInventorySystemComponent(const UQInventorySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQInventorySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQInventorySystemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQInventorySystemComponent) \
	NO_API virtual ~UQInventorySystemComponent();


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h_16_PROLOG
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h_19_SPARSE_DATA \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h_19_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANCIENTGAME_API UClass* StaticClass<class UQInventorySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_AncientGame_Source_AncientGame_Components_Inventory_QInventorySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
