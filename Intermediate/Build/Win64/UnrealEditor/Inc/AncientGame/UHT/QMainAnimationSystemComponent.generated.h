// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Animation/QMainAnimationSystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
#ifdef ANCIENTGAME_QMainAnimationSystemComponent_generated_h
#error "QMainAnimationSystemComponent.generated.h already included, missing '#pragma once' in QMainAnimationSystemComponent.h"
#endif
#define ANCIENTGAME_QMainAnimationSystemComponent_generated_h

#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_11_DELEGATE \
ANCIENTGAME_API void FJumpSignature_DelegateWrapper(const FMulticastScriptDelegate& JumpSignature);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_12_DELEGATE \
ANCIENTGAME_API void FCrouchStartSignature_DelegateWrapper(const FMulticastScriptDelegate& CrouchStartSignature);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_13_DELEGATE \
ANCIENTGAME_API void FCrouchEndSignature_DelegateWrapper(const FMulticastScriptDelegate& CrouchEndSignature);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_14_DELEGATE \
ANCIENTGAME_API void FSprintStartSignature_DelegateWrapper(const FMulticastScriptDelegate& SprintStartSignature);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_15_DELEGATE \
ANCIENTGAME_API void FSprintEndSignature_DelegateWrapper(const FMulticastScriptDelegate& SprintEndSignature);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_16_DELEGATE \
ANCIENTGAME_API void FAimStartSignature_DelegateWrapper(const FMulticastScriptDelegate& AimStartSignature);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_17_DELEGATE \
ANCIENTGAME_API void FAimEndSignature_DelegateWrapper(const FMulticastScriptDelegate& AimEndSignature);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_23_SPARSE_DATA
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAimEnd); \
	DECLARE_FUNCTION(execOnAimStart); \
	DECLARE_FUNCTION(execOnSprintEnd); \
	DECLARE_FUNCTION(execOnSprintStart); \
	DECLARE_FUNCTION(execOnCrouchEnd); \
	DECLARE_FUNCTION(execOnCrouchStart); \
	DECLARE_FUNCTION(execOnJumped); \
	DECLARE_FUNCTION(execOnCharacterMovementModeChanged);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_23_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQMainAnimationSystemComponent(); \
	friend struct Z_Construct_UClass_UQMainAnimationSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UQMainAnimationSystemComponent, UQBaseAnimationSystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AncientGame"), NO_API) \
	DECLARE_SERIALIZER(UQMainAnimationSystemComponent)


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQMainAnimationSystemComponent(UQMainAnimationSystemComponent&&); \
	NO_API UQMainAnimationSystemComponent(const UQMainAnimationSystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQMainAnimationSystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQMainAnimationSystemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQMainAnimationSystemComponent) \
	NO_API virtual ~UQMainAnimationSystemComponent();


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_20_PROLOG
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_23_SPARSE_DATA \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_23_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANCIENTGAME_API UClass* StaticClass<class UQMainAnimationSystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QMainAnimationSystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
