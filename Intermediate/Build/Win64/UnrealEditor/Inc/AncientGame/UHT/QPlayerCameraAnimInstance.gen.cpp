// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cameras/AnimInstance/QPlayerCameraAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Components/Animation/QBaseAnimationSystemComponent.h"
#include "Controllers/QBasePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQPlayerCameraAnimInstance() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQPlayerCameraAnimInstance();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQPlayerCameraAnimInstance_NoRegister();
	ANCIENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCameraParameters();
	ANCIENTGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterMovementMainParameters();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	void UQPlayerCameraAnimInstance::StaticRegisterNativesUQPlayerCameraAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQPlayerCameraAnimInstance);
	UClass* Z_Construct_UClass_UQPlayerCameraAnimInstance_NoRegister()
	{
		return UQPlayerCameraAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementMainParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementMainParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Cameras/AnimInstance/QPlayerCameraAnimInstance.h" },
		{ "ModuleRelativePath", "Cameras/AnimInstance/QPlayerCameraAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics::NewProp_MovementMainParameters_MetaData[] = {
		{ "Category", "QPlayerCameraAnimInstance" },
		{ "ModuleRelativePath", "Cameras/AnimInstance/QPlayerCameraAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics::NewProp_MovementMainParameters = { "MovementMainParameters", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQPlayerCameraAnimInstance, MovementMainParameters), Z_Construct_UScriptStruct_FCharacterMovementMainParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics::NewProp_MovementMainParameters_MetaData), Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics::NewProp_MovementMainParameters_MetaData) }; // 3470296184
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics::NewProp_CameraParameters_MetaData[] = {
		{ "Category", "QPlayerCameraAnimInstance" },
		{ "ModuleRelativePath", "Cameras/AnimInstance/QPlayerCameraAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics::NewProp_CameraParameters = { "CameraParameters", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQPlayerCameraAnimInstance, CameraParameters), Z_Construct_UScriptStruct_FCameraParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics::NewProp_CameraParameters_MetaData), Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics::NewProp_CameraParameters_MetaData) }; // 535446968
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics::NewProp_MovementMainParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics::NewProp_CameraParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQPlayerCameraAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics::ClassParams = {
		&UQPlayerCameraAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQPlayerCameraAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UQPlayerCameraAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQPlayerCameraAnimInstance.OuterSingleton, Z_Construct_UClass_UQPlayerCameraAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQPlayerCameraAnimInstance.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<UQPlayerCameraAnimInstance>()
	{
		return UQPlayerCameraAnimInstance::StaticClass();
	}
	UQPlayerCameraAnimInstance::UQPlayerCameraAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQPlayerCameraAnimInstance);
	UQPlayerCameraAnimInstance::~UQPlayerCameraAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Cameras_AnimInstance_QPlayerCameraAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Cameras_AnimInstance_QPlayerCameraAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQPlayerCameraAnimInstance, UQPlayerCameraAnimInstance::StaticClass, TEXT("UQPlayerCameraAnimInstance"), &Z_Registration_Info_UClass_UQPlayerCameraAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQPlayerCameraAnimInstance), 2974059397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Cameras_AnimInstance_QPlayerCameraAnimInstance_h_1488533884(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Cameras_AnimInstance_QPlayerCameraAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Cameras_AnimInstance_QPlayerCameraAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
