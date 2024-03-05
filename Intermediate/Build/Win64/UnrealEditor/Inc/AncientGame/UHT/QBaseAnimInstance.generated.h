// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/AnimationInstance/QBaseAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECharacterMovementAction : uint8;
enum class ECharacterMovementGait : uint8;
enum class ECharacterMovementRotationMode : uint8;
enum class ECharacterMovementStance : uint8;
enum class ECharacterMovementState : uint8;
enum class ECharacterOverlayState : uint8;
enum class ECharacterViewMode : uint8;
#ifdef ANCIENTGAME_QBaseAnimInstance_generated_h
#error "QBaseAnimInstance.generated.h already included, missing '#pragma once' in QBaseAnimInstance.h"
#endif
#define ANCIENTGAME_QBaseAnimInstance_generated_h

#define FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseAnimInstance_h_25_SPARSE_DATA
#define FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseAnimInstance_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseAnimInstance_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseAnimInstance_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOverlayState); \
	DECLARE_FUNCTION(execGetViewMode); \
	DECLARE_FUNCTION(execGetAction); \
	DECLARE_FUNCTION(execGetStance); \
	DECLARE_FUNCTION(execGetRotationMode); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetGait);


#define FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseAnimInstance_h_25_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseAnimInstance_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQBaseAnimInstance(); \
	friend struct Z_Construct_UClass_UQBaseAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UQBaseAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AncientGame"), NO_API) \
	DECLARE_SERIALIZER(UQBaseAnimInstance)


#define FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseAnimInstance_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQBaseAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQBaseAnimInstance(UQBaseAnimInstance&&); \
	NO_API UQBaseAnimInstance(const UQBaseAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQBaseAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQBaseAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQBaseAnimInstance) \
	NO_API virtual ~UQBaseAnimInstance();


#define FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseAnimInstance_h_22_PROLOG
#define FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseAnimInstance_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseAnimInstance_h_25_SPARSE_DATA \
	FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseAnimInstance_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseAnimInstance_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseAnimInstance_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseAnimInstance_h_25_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseAnimInstance_h_25_INCLASS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseAnimInstance_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANCIENTGAME_API UClass* StaticClass<class UQBaseAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
