// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/QItemWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
struct FItemData;
#ifdef ANCIENTGAME_QItemWidget_generated_h
#error "QItemWidget.generated.h already included, missing '#pragma once' in QItemWidget.h"
#endif
#define ANCIENTGAME_QItemWidget_generated_h

#define FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_13_DELEGATE \
ANCIENTGAME_API bool FItemDetectionChangeEvent_DelegateWrapper(const FScriptDelegate& ItemDetectionChangeEvent, UUserWidget* Sender, FItemData Item);


#define FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_14_DELEGATE \
ANCIENTGAME_API void FItemChangeEvent_DelegateWrapper(const FScriptDelegate& ItemChangeEvent, UUserWidget* Sender, FItemData Item);


#define FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_20_SPARSE_DATA
#define FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCanItemChange); \
	DECLARE_FUNCTION(execHandleOnItemChange);


#define FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_20_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQItemWidget(); \
	friend struct Z_Construct_UClass_UQItemWidget_Statics; \
public: \
	DECLARE_CLASS(UQItemWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AncientGame"), NO_API) \
	DECLARE_SERIALIZER(UQItemWidget)


#define FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQItemWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQItemWidget(UQItemWidget&&); \
	NO_API UQItemWidget(const UQItemWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQItemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQItemWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQItemWidget) \
	NO_API virtual ~UQItemWidget();


#define FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_17_PROLOG
#define FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_20_SPARSE_DATA \
	FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_20_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_20_INCLASS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANCIENTGAME_API UClass* StaticClass<class UQItemWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_AncientGame_Source_AncientGame_UI_QItemWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
