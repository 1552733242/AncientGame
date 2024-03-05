// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Input/QBaseInputSystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UInputMappingContext;
#ifdef ANCIENTGAME_QBaseInputSystemComponent_generated_h
#error "QBaseInputSystemComponent.generated.h already included, missing '#pragma once' in QBaseInputSystemComponent.h"
#endif
#define ANCIENTGAME_QBaseInputSystemComponent_generated_h

#define FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_74_DELEGATE \
ANCIENTGAME_API void FOnMoveSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMoveSignature, FVector2D const& Value);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_75_DELEGATE \
ANCIENTGAME_API void FOnLookSignature_DelegateWrapper(const FMulticastScriptDelegate& OnLookSignature, FVector2D const& Value);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_77_DELEGATE \
ANCIENTGAME_API void FOnCrouchSignature_DelegateWrapper(const FMulticastScriptDelegate& OnCrouchSignature);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_79_DELEGATE \
ANCIENTGAME_API void FOnJumpSignature_DelegateWrapper(const FMulticastScriptDelegate& OnJumpSignature);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_81_DELEGATE \
ANCIENTGAME_API void FOnSprintSignature_DelegateWrapper(const FMulticastScriptDelegate& OnSprintSignature);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_83_DELEGATE \
ANCIENTGAME_API void FOnAimSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAimSignature);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_85_DELEGATE \
ANCIENTGAME_API void FOnRollSignature_DelegateWrapper(const FMulticastScriptDelegate& OnRollSignature);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_87_DELEGATE \
ANCIENTGAME_API void FOnInteractionSignature_DelegateWrapper(const FMulticastScriptDelegate& OnInteractionSignature);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_103_SPARSE_DATA
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_103_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_103_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveInputContext); \
	DECLARE_FUNCTION(execAddNewInputContext);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_103_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQBaseInputSystemComponent(); \
	friend struct Z_Construct_UClass_UQBaseInputSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UQBaseInputSystemComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AncientGame"), NO_API) \
	DECLARE_SERIALIZER(UQBaseInputSystemComponent)


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_103_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQBaseInputSystemComponent(UQBaseInputSystemComponent&&); \
	NO_API UQBaseInputSystemComponent(const UQBaseInputSystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQBaseInputSystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQBaseInputSystemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQBaseInputSystemComponent) \
	NO_API virtual ~UQBaseInputSystemComponent();


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_100_PROLOG
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_103_SPARSE_DATA \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_103_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_103_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_103_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_103_INCLASS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANCIENTGAME_API UClass* StaticClass<class UQBaseInputSystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
