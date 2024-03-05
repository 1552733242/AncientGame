// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/AnimationInstance/QBaseLocomotionAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlendSpace;
#ifdef ANCIENTGAME_QBaseLocomotionAnimInstance_generated_h
#error "QBaseLocomotionAnimInstance.generated.h already included, missing '#pragma once' in QBaseLocomotionAnimInstance.h"
#endif
#define ANCIENTGAME_QBaseLocomotionAnimInstance_generated_h

#define FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLeanAmount_Statics; \
	ANCIENTGAME_API static class UScriptStruct* StaticStruct();


template<> ANCIENTGAME_API UScriptStruct* StaticStruct<struct FLeanAmount>();

#define FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FYaw_Statics; \
	ANCIENTGAME_API static class UScriptStruct* StaticStruct();


template<> ANCIENTGAME_API UScriptStruct* StaticStruct<struct FYaw>();

#define FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVelocityBlend_Statics; \
	ANCIENTGAME_API static class UScriptStruct* StaticStruct();


template<> ANCIENTGAME_API UScriptStruct* StaticStruct<struct FVelocityBlend>();

#define FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_79_SPARSE_DATA
#define FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_79_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_79_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetN_WalkRun_BR); \
	DECLARE_FUNCTION(execGetN_WalkRun_BL); \
	DECLARE_FUNCTION(execGetN_WalkRun_B); \
	DECLARE_FUNCTION(execGetN_WalkRun_FR); \
	DECLARE_FUNCTION(execGetN_WalkRun_FL); \
	DECLARE_FUNCTION(execGetN_WalkRun_F);


#define FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_79_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQBaseLocomotionAnimInstance(); \
	friend struct Z_Construct_UClass_UQBaseLocomotionAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UQBaseLocomotionAnimInstance, UQBaseAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AncientGame"), NO_API) \
	DECLARE_SERIALIZER(UQBaseLocomotionAnimInstance)


#define FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_79_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQBaseLocomotionAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQBaseLocomotionAnimInstance(UQBaseLocomotionAnimInstance&&); \
	NO_API UQBaseLocomotionAnimInstance(const UQBaseLocomotionAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQBaseLocomotionAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQBaseLocomotionAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQBaseLocomotionAnimInstance) \
	NO_API virtual ~UQBaseLocomotionAnimInstance();


#define FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_76_PROLOG
#define FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_79_SPARSE_DATA \
	FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_79_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_79_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_79_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_79_INCLASS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANCIENTGAME_API UClass* StaticClass<class UQBaseLocomotionAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_AncientGame_Source_AncientGame_Characters_AnimationInstance_QBaseLocomotionAnimInstance_h


#define FOREACH_ENUM_EMOVEMENTDIRECTION(op) \
	op(EMovementDirection::Forward) \
	op(EMovementDirection::Right) \
	op(EMovementDirection::Left) \
	op(EMovementDirection::Backward) 

enum class EMovementDirection : uint8;
template<> struct TIsUEnumClass<EMovementDirection> { enum { Value = true }; };
template<> ANCIENTGAME_API UEnum* StaticEnum<EMovementDirection>();

#define FOREACH_ENUM_EHIPSDIRECTION(op) \
	op(EHipsDirection::F) \
	op(EHipsDirection::B) \
	op(EHipsDirection::RF) \
	op(EHipsDirection::RB) \
	op(EHipsDirection::LF) \
	op(EHipsDirection::LB) 

enum class EHipsDirection : uint8;
template<> struct TIsUEnumClass<EHipsDirection> { enum { Value = true }; };
template<> ANCIENTGAME_API UEnum* StaticEnum<EHipsDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
