// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Ability/QBaseAbilitySystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANCIENTGAME_QBaseAbilitySystemComponent_generated_h
#error "QBaseAbilitySystemComponent.generated.h already included, missing '#pragma once' in QBaseAbilitySystemComponent.h"
#endif
#define ANCIENTGAME_QBaseAbilitySystemComponent_generated_h

#define FID_UEProject_AncientGame_Source_AncientGame_Components_Ability_QBaseAbilitySystemComponent_h_15_SPARSE_DATA
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Ability_QBaseAbilitySystemComponent_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Ability_QBaseAbilitySystemComponent_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Ability_QBaseAbilitySystemComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActionRoll); \
	DECLARE_FUNCTION(execOnActionAimEnd); \
	DECLARE_FUNCTION(execOnActionAimStart); \
	DECLARE_FUNCTION(execOnActionSprintEnd); \
	DECLARE_FUNCTION(execOnActionSprintStart); \
	DECLARE_FUNCTION(execOnActionCrouchEnd); \
	DECLARE_FUNCTION(execOnActionCrouchStart); \
	DECLARE_FUNCTION(execOnActionJumpEnd); \
	DECLARE_FUNCTION(execOnActionJumpStart);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Ability_QBaseAbilitySystemComponent_h_15_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Ability_QBaseAbilitySystemComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQBaseAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UQBaseAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UQBaseAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AncientGame"), NO_API) \
	DECLARE_SERIALIZER(UQBaseAbilitySystemComponent)


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Ability_QBaseAbilitySystemComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQBaseAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQBaseAbilitySystemComponent(UQBaseAbilitySystemComponent&&); \
	NO_API UQBaseAbilitySystemComponent(const UQBaseAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQBaseAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQBaseAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQBaseAbilitySystemComponent) \
	NO_API virtual ~UQBaseAbilitySystemComponent();


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Ability_QBaseAbilitySystemComponent_h_12_PROLOG
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Ability_QBaseAbilitySystemComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Ability_QBaseAbilitySystemComponent_h_15_SPARSE_DATA \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Ability_QBaseAbilitySystemComponent_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Ability_QBaseAbilitySystemComponent_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Ability_QBaseAbilitySystemComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Ability_QBaseAbilitySystemComponent_h_15_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Ability_QBaseAbilitySystemComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Ability_QBaseAbilitySystemComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANCIENTGAME_API UClass* StaticClass<class UQBaseAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_AncientGame_Source_AncientGame_Components_Ability_QBaseAbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
