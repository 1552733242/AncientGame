// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Attribute/QAttributeSetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef ANCIENTGAME_QAttributeSetBase_generated_h
#error "QAttributeSetBase.generated.h already included, missing '#pragma once' in QAttributeSetBase.h"
#endif
#define ANCIENTGAME_QAttributeSetBase_generated_h

#define FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Attribute_QAttributeSetBase_h_23_SPARSE_DATA
#define FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Attribute_QAttributeSetBase_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Attribute_QAttributeSetBase_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Attribute_QAttributeSetBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Attribute_QAttributeSetBase_h_23_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Attribute_QAttributeSetBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQAttributeSetBase(); \
	friend struct Z_Construct_UClass_UQAttributeSetBase_Statics; \
public: \
	DECLARE_CLASS(UQAttributeSetBase, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AncientGame"), NO_API) \
	DECLARE_SERIALIZER(UQAttributeSetBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		NETFIELD_REP_END=MaxHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UQAttributeSetBase) \
public:


#define FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Attribute_QAttributeSetBase_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQAttributeSetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQAttributeSetBase(UQAttributeSetBase&&); \
	NO_API UQAttributeSetBase(const UQAttributeSetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQAttributeSetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQAttributeSetBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQAttributeSetBase) \
	NO_API virtual ~UQAttributeSetBase();


#define FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Attribute_QAttributeSetBase_h_20_PROLOG
#define FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Attribute_QAttributeSetBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Attribute_QAttributeSetBase_h_23_SPARSE_DATA \
	FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Attribute_QAttributeSetBase_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Attribute_QAttributeSetBase_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Attribute_QAttributeSetBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Attribute_QAttributeSetBase_h_23_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Attribute_QAttributeSetBase_h_23_INCLASS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Attribute_QAttributeSetBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANCIENTGAME_API UClass* StaticClass<class UQAttributeSetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_AncientGame_Source_AncientGame_AbilitySystem_Attribute_QAttributeSetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
