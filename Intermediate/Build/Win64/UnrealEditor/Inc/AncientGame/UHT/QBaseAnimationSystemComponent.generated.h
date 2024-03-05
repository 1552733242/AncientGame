// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Animation/QBaseAnimationSystemComponent.h"
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
#ifdef ANCIENTGAME_QBaseAnimationSystemComponent_generated_h
#error "QBaseAnimationSystemComponent.generated.h already included, missing '#pragma once' in QBaseAnimationSystemComponent.h"
#endif
#define ANCIENTGAME_QBaseAnimationSystemComponent_generated_h

#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterMovementMainParameters_Statics; \
	ANCIENTGAME_API static class UScriptStruct* StaticStruct();


template<> ANCIENTGAME_API UScriptStruct* StaticStruct<struct FCharacterMovementMainParameters>();

#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterMovementEssentialValues_Statics; \
	ANCIENTGAME_API static class UScriptStruct* StaticStruct();


template<> ANCIENTGAME_API UScriptStruct* StaticStruct<struct FCharacterMovementEssentialValues>();

#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_118_DELEGATE \
ANCIENTGAME_API void FOnOverlayStateChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnOverlayStateChangeSignature, ECharacterOverlayState NewOverlayState);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_119_DELEGATE \
ANCIENTGAME_API void FOnViewModeChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnViewModeChangeSignature, ECharacterViewMode NewViewMode);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_120_DELEGATE \
ANCIENTGAME_API void FOnMovementGaitChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMovementGaitChangeSignature, ECharacterMovementGait NewGait);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_121_DELEGATE \
ANCIENTGAME_API void FOnMovementRotationModeChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMovementRotationModeChangeSignature, ECharacterMovementRotationMode NewRotationMode);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_122_DELEGATE \
ANCIENTGAME_API void FOnMovementActionChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMovementActionChangeSignature, ECharacterMovementAction NewAction);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_123_DELEGATE \
ANCIENTGAME_API void FOnMovementStateChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMovementStateChangeSignature, ECharacterMovementState NewState);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_124_DELEGATE \
ANCIENTGAME_API void FOnMovementStanceChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMovementStanceChangeSignature, ECharacterMovementStance NewSStance);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_130_SPARSE_DATA
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_130_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_130_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetOverlayState); \
	DECLARE_FUNCTION(execSetViewMode); \
	DECLARE_FUNCTION(execSetAction); \
	DECLARE_FUNCTION(execSetStance); \
	DECLARE_FUNCTION(execSetRotationMode); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execSetGait);


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_130_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_130_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQBaseAnimationSystemComponent(); \
	friend struct Z_Construct_UClass_UQBaseAnimationSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UQBaseAnimationSystemComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AncientGame"), NO_API) \
	DECLARE_SERIALIZER(UQBaseAnimationSystemComponent)


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_130_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQBaseAnimationSystemComponent(UQBaseAnimationSystemComponent&&); \
	NO_API UQBaseAnimationSystemComponent(const UQBaseAnimationSystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQBaseAnimationSystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQBaseAnimationSystemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQBaseAnimationSystemComponent) \
	NO_API virtual ~UQBaseAnimationSystemComponent();


#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_127_PROLOG
#define FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_130_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_130_SPARSE_DATA \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_130_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_130_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_130_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_130_INCLASS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h_130_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANCIENTGAME_API UClass* StaticClass<class UQBaseAnimationSystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_AncientGame_Source_AncientGame_Components_Animation_QBaseAnimationSystemComponent_h


#define FOREACH_ENUM_ECHARACTERMOVEMENTGAIT(op) \
	op(ECharacterMovementGait::Walk) \
	op(ECharacterMovementGait::Run) \
	op(ECharacterMovementGait::Sprint) 

enum class ECharacterMovementGait : uint8;
template<> struct TIsUEnumClass<ECharacterMovementGait> { enum { Value = true }; };
template<> ANCIENTGAME_API UEnum* StaticEnum<ECharacterMovementGait>();

#define FOREACH_ENUM_ECHARACTERMOVEMENTSTATE(op) \
	op(ECharacterMovementState::None) \
	op(ECharacterMovementState::InAir) \
	op(ECharacterMovementState::OnGround) \
	op(ECharacterMovementState::Mantling) \
	op(ECharacterMovementState::Ragdoll) 

enum class ECharacterMovementState : uint8;
template<> struct TIsUEnumClass<ECharacterMovementState> { enum { Value = true }; };
template<> ANCIENTGAME_API UEnum* StaticEnum<ECharacterMovementState>();

#define FOREACH_ENUM_ECHARACTERMOVEMENTROTATIONMODE(op) \
	op(ECharacterMovementRotationMode::VelocityDirection) \
	op(ECharacterMovementRotationMode::LookingDirection) \
	op(ECharacterMovementRotationMode::Aiming) 

enum class ECharacterMovementRotationMode : uint8;
template<> struct TIsUEnumClass<ECharacterMovementRotationMode> { enum { Value = true }; };
template<> ANCIENTGAME_API UEnum* StaticEnum<ECharacterMovementRotationMode>();

#define FOREACH_ENUM_ECHARACTERMOVEMENTSTANCE(op) \
	op(ECharacterMovementStance::Stance) \
	op(ECharacterMovementStance::Crouching) 

enum class ECharacterMovementStance : uint8;
template<> struct TIsUEnumClass<ECharacterMovementStance> { enum { Value = true }; };
template<> ANCIENTGAME_API UEnum* StaticEnum<ECharacterMovementStance>();

#define FOREACH_ENUM_ECHARACTERMOVEMENTACTION(op) \
	op(ECharacterMovementAction::None) \
	op(ECharacterMovementAction::LowMantle) \
	op(ECharacterMovementAction::HighMantle) \
	op(ECharacterMovementAction::Rolling) \
	op(ECharacterMovementAction::GettingUp) 

enum class ECharacterMovementAction : uint8;
template<> struct TIsUEnumClass<ECharacterMovementAction> { enum { Value = true }; };
template<> ANCIENTGAME_API UEnum* StaticEnum<ECharacterMovementAction>();

#define FOREACH_ENUM_ECHARACTERVIEWMODE(op) \
	op(ECharacterViewMode::ThirdPerson) \
	op(ECharacterViewMode::FirstPerson) 

enum class ECharacterViewMode : uint8;
template<> struct TIsUEnumClass<ECharacterViewMode> { enum { Value = true }; };
template<> ANCIENTGAME_API UEnum* StaticEnum<ECharacterViewMode>();

#define FOREACH_ENUM_ECHARACTEROVERLAYSTATE(op) \
	op(ECharacterOverlayState::Default) \
	op(ECharacterOverlayState::Bow) \
	op(ECharacterOverlayState::Sword) 

enum class ECharacterOverlayState : uint8;
template<> struct TIsUEnumClass<ECharacterOverlayState> { enum { Value = true }; };
template<> ANCIENTGAME_API UEnum* StaticEnum<ECharacterOverlayState>();

#define FOREACH_ENUM_EGROUNDEDENTRYSTATE(op) \
	op(EGroundedEntryState::None) \
	op(EGroundedEntryState::Roll) 

enum class EGroundedEntryState : uint8;
template<> struct TIsUEnumClass<EGroundedEntryState> { enum { Value = true }; };
template<> ANCIENTGAME_API UEnum* StaticEnum<EGroundedEntryState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
