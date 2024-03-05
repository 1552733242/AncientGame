// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/QBaseCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
class UQBaseInputSystemComponent;
class UQCharacterStateComponent;
class UQInventorySystemComponent;
class UQMainAnimationSystemComponent;
#ifdef ANCIENTGAME_QBaseCharacter_generated_h
#error "QBaseCharacter.generated.h already included, missing '#pragma once' in QBaseCharacter.h"
#endif
#define ANCIENTGAME_QBaseCharacter_generated_h

#define FID_UEProject_AncientGame_Source_AncientGame_Characters_QBaseCharacter_h_21_SPARSE_DATA
#define FID_UEProject_AncientGame_Source_AncientGame_Characters_QBaseCharacter_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Characters_QBaseCharacter_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Characters_QBaseCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActionLook); \
	DECLARE_FUNCTION(execOnActionMove); \
	DECLARE_FUNCTION(execGetCharacterStateComonent); \
	DECLARE_FUNCTION(execGetBackpackComponent); \
	DECLARE_FUNCTION(execGetAnimationSystemCompont); \
	DECLARE_FUNCTION(execGetInputSystemComponent); \
	DECLARE_FUNCTION(execGetAbilitySystemComponent);


#define FID_UEProject_AncientGame_Source_AncientGame_Characters_QBaseCharacter_h_21_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Characters_QBaseCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQBaseCharacter(); \
	friend struct Z_Construct_UClass_AQBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(AQBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AncientGame"), NO_API) \
	DECLARE_SERIALIZER(AQBaseCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AQBaseCharacter*>(this); }


#define FID_UEProject_AncientGame_Source_AncientGame_Characters_QBaseCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQBaseCharacter(AQBaseCharacter&&); \
	NO_API AQBaseCharacter(const AQBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQBaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AQBaseCharacter) \
	NO_API virtual ~AQBaseCharacter();


#define FID_UEProject_AncientGame_Source_AncientGame_Characters_QBaseCharacter_h_18_PROLOG
#define FID_UEProject_AncientGame_Source_AncientGame_Characters_QBaseCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_AncientGame_Source_AncientGame_Characters_QBaseCharacter_h_21_SPARSE_DATA \
	FID_UEProject_AncientGame_Source_AncientGame_Characters_QBaseCharacter_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Characters_QBaseCharacter_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Characters_QBaseCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_Characters_QBaseCharacter_h_21_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Characters_QBaseCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_Characters_QBaseCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANCIENTGAME_API UClass* StaticClass<class AQBaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_AncientGame_Source_AncientGame_Characters_QBaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
