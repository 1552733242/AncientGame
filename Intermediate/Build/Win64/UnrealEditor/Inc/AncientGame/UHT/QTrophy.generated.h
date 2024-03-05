// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/QTrophy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ANCIENTGAME_QTrophy_generated_h
#error "QTrophy.generated.h already included, missing '#pragma once' in QTrophy.h"
#endif
#define ANCIENTGAME_QTrophy_generated_h

#define FID_UEProject_AncientGame_Source_AncientGame_Items_QTrophy_h_18_SPARSE_DATA
#define FID_UEProject_AncientGame_Source_AncientGame_Items_QTrophy_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Items_QTrophy_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Items_QTrophy_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_UEProject_AncientGame_Source_AncientGame_Items_QTrophy_h_18_ACCESSORS
#define FID_UEProject_AncientGame_Source_AncientGame_Items_QTrophy_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQTrophy(); \
	friend struct Z_Construct_UClass_AQTrophy_Statics; \
public: \
	DECLARE_CLASS(AQTrophy, AQBaseItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AncientGame"), NO_API) \
	DECLARE_SERIALIZER(AQTrophy)


#define FID_UEProject_AncientGame_Source_AncientGame_Items_QTrophy_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQTrophy(AQTrophy&&); \
	NO_API AQTrophy(const AQTrophy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQTrophy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQTrophy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AQTrophy) \
	NO_API virtual ~AQTrophy();


#define FID_UEProject_AncientGame_Source_AncientGame_Items_QTrophy_h_15_PROLOG
#define FID_UEProject_AncientGame_Source_AncientGame_Items_QTrophy_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_AncientGame_Source_AncientGame_Items_QTrophy_h_18_SPARSE_DATA \
	FID_UEProject_AncientGame_Source_AncientGame_Items_QTrophy_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Items_QTrophy_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Items_QTrophy_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_Items_QTrophy_h_18_ACCESSORS \
	FID_UEProject_AncientGame_Source_AncientGame_Items_QTrophy_h_18_INCLASS_NO_PURE_DECLS \
	FID_UEProject_AncientGame_Source_AncientGame_Items_QTrophy_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANCIENTGAME_API UClass* StaticClass<class AQTrophy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_AncientGame_Source_AncientGame_Items_QTrophy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
