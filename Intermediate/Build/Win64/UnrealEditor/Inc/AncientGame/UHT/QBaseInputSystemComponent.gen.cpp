// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/Input/QBaseInputSystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQBaseInputSystemComponent() {}
// Cross Module References
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQBaseInputSystemComponent();
	ANCIENTGAME_API UClass* Z_Construct_UClass_UQBaseInputSystemComponent_NoRegister();
	ANCIENTGAME_API UFunction* Z_Construct_UDelegateFunction_AncientGame_OnAimSignature__DelegateSignature();
	ANCIENTGAME_API UFunction* Z_Construct_UDelegateFunction_AncientGame_OnCrouchSignature__DelegateSignature();
	ANCIENTGAME_API UFunction* Z_Construct_UDelegateFunction_AncientGame_OnInteractionSignature__DelegateSignature();
	ANCIENTGAME_API UFunction* Z_Construct_UDelegateFunction_AncientGame_OnJumpSignature__DelegateSignature();
	ANCIENTGAME_API UFunction* Z_Construct_UDelegateFunction_AncientGame_OnLookSignature__DelegateSignature();
	ANCIENTGAME_API UFunction* Z_Construct_UDelegateFunction_AncientGame_OnMoveSignature__DelegateSignature();
	ANCIENTGAME_API UFunction* Z_Construct_UDelegateFunction_AncientGame_OnRollSignature__DelegateSignature();
	ANCIENTGAME_API UFunction* Z_Construct_UDelegateFunction_AncientGame_OnSprintSignature__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AncientGame();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AncientGame_OnMoveSignature__DelegateSignature_Statics
	{
		struct _Script_AncientGame_eventOnMoveSignature_Parms
		{
			FVector2D Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_OnMoveSignature__DelegateSignature_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AncientGame_OnMoveSignature__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AncientGame_eventOnMoveSignature_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnMoveSignature__DelegateSignature_Statics::NewProp_Value_MetaData), Z_Construct_UDelegateFunction_AncientGame_OnMoveSignature__DelegateSignature_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AncientGame_OnMoveSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_OnMoveSignature__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_OnMoveSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//#define INPUT_ACTION_DECLARE(ActionName) \\\n//DECLARE_MULTICAST_DELEGATE(FOnAction##ActionName##Signature);\n//\n//#define INPUT_ACTION_TRIGGER_DECLARE(ActionName) \\\n//DECLARE_MULTICAST_DELEGATE(FOnAction##ActionName##Signature);\n//\n//#define INPUT_ACTION_START_END_DECLARE(ActionName) \\\n//DECLARE_MULTICAST_DELEGATE(FOnAction##ActionName##StartSignature); \\\n//DECLARE_MULTICAST_DELEGATE(FOnAction##ActionName##EndSignature);\n//\n//#define INPUT_ACTION_VECTOR2D_TRIGGER_DECLARE(ActionName) \\\n//DECLARE_MULTICAST_DELEGATE_OneParam(FOnAction##ActionName##Signature, const FVector2D&);\n//\n//#define INPUT_ACTION_VECTOR2D_START_END_DECLARE(ActionName) \\\n//DECLARE_MULTICAST_DELEGATE_OneParam(FOnAction##ActionName##StartSignature, const FVector2D&); \\\n//DECLARE_MULTICAST_DELEGATE_OneParam(FOnAction##ActionName##EndSignature, const FVector2D&);\n//\n//\n//#define INPUT_ACTION_ACCESSORS(ActionName) \\\n//public:FOnAction##ActionName##Signature OnAction##ActionName##Delegate; \\\n//private:void OnAction##ActionName(const FInputActionValue& Value){ OnAction##ActionName##Delegate.Broadcast(); }\n//\n//\n//#define INPUT_ACTION_TRIGGER_ACCESSORS(ActionName) \\\n//public:FOnAction##ActionName##Signature OnAction##ActionName##Delegate; \\\n//private:void OnAction##ActionName(const FInputActionValue& Value){OnAction##ActionName##Delegate.Broadcast(); }\n//\n//#define INPUT_ACTION_START_END_ACCESSORS(ActionName) \\\n//public:FOnAction##ActionName##StartSignature  OnAction##ActionName##StartDelegate; \\\n//public:FOnAction##ActionName##EndSignature  OnAction##ActionName##EndDelegate; \\\n//private:void OnAction##ActionName##Start(const FInputActionValue& Value) { OnAction##ActionName##StartDelegate.Broadcast();} \\\n//private:void OnAction##ActionName##End(const FInputActionValue& Value) {OnAction##ActionName##EndDelegate.Broadcast();} \n//\n//#define INPUT_ACTION_VECTOR2D_TRIGGER_ACCESSORS(ActionName) \\\n//public:FOnAction##ActionName##Signature  OnAction##ActionName##Delegate; \\\n//private:void OnAction##ActionName(const FInputActionValue& Value) { FVector2D  MoveDelta = Value.Get<FVector2D>(); OnAction##ActionName##Delegate.Broadcast(MoveDelta); }\n//\n//#define INPUT_ACTION_VECTOR2D_START_END_ACCESSORS(ActionName) \\\n//public:FOnAction##ActionName##StartSignature  OnAction##ActionName##StartDelegate; \\\n//public:FOnAction##ActionName##EndSignature  OnAction##ActionName##EndDelegate; \\\n//private:void OnAction##ActionName##Start(const FInputActionValue& Value) { FVector2D  MoveDelta = Value.Get<FVector2D>();OnAction##ActionName##StartDelegate.Broadcast(MoveDelta);} \\\n//private:void OnAction##ActionName##End(const FInputActionValue& Value) {FVector2D  MoveDelta = Value.Get<FVector2D>(); OnAction##ActionName##EndDelegate.Broadcast(MoveDelta); } \n//\n//\n//#define INPUT_ACTION_BIND(EnhancedInputComponent,ActionName) \\\n//if (EnhancedInputComponent&&ActionName) { \\\n//        EnhancedInputComponent->BindAction(ActionName, ETriggerEvent::Started, this, &ThisClass::OnAction##ActionName); \\\n//}\n//#define INPUT_ACTION_TRIGGER_BIND(EnhancedInputComponent,ActionName) \\\n//if (EnhancedInputComponent&&ActionName) { \\\n//        EnhancedInputComponent->BindAction(ActionName, ETriggerEvent::Triggered, this, &ThisClass::OnAction##ActionName); \\\n//}\n//#define INPUT_ACTION_START_END_BIND(EnhancedInputComponent,ActionName) \\\n//if (EnhancedInputComponent&&ActionName) { \\\n//        EnhancedInputComponent->BindAction(ActionName, ETriggerEvent::Started, this, &ThisClass::OnAction##ActionName##Start); \\\n//        EnhancedInputComponent->BindAction(ActionName, ETriggerEvent::Completed, this, &ThisClass::OnAction##ActionName##End); \\\n//}\n//\n" },
#endif
		{ "ModuleRelativePath", "Components/Input/QBaseInputSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "#define INPUT_ACTION_DECLARE(ActionName) \\\nDECLARE_MULTICAST_DELEGATE(FOnAction##ActionName##Signature);\n\n#define INPUT_ACTION_TRIGGER_DECLARE(ActionName) \\\nDECLARE_MULTICAST_DELEGATE(FOnAction##ActionName##Signature);\n\n#define INPUT_ACTION_START_END_DECLARE(ActionName) \\\nDECLARE_MULTICAST_DELEGATE(FOnAction##ActionName##StartSignature); \\\nDECLARE_MULTICAST_DELEGATE(FOnAction##ActionName##EndSignature);\n\n#define INPUT_ACTION_VECTOR2D_TRIGGER_DECLARE(ActionName) \\\nDECLARE_MULTICAST_DELEGATE_OneParam(FOnAction##ActionName##Signature, const FVector2D&);\n\n#define INPUT_ACTION_VECTOR2D_START_END_DECLARE(ActionName) \\\nDECLARE_MULTICAST_DELEGATE_OneParam(FOnAction##ActionName##StartSignature, const FVector2D&); \\\nDECLARE_MULTICAST_DELEGATE_OneParam(FOnAction##ActionName##EndSignature, const FVector2D&);\n\n\n#define INPUT_ACTION_ACCESSORS(ActionName) \\\npublic:FOnAction##ActionName##Signature OnAction##ActionName##Delegate; \\\nprivate:void OnAction##ActionName(const FInputActionValue& Value){ OnAction##ActionName##Delegate.Broadcast(); }\n\n\n#define INPUT_ACTION_TRIGGER_ACCESSORS(ActionName) \\\npublic:FOnAction##ActionName##Signature OnAction##ActionName##Delegate; \\\nprivate:void OnAction##ActionName(const FInputActionValue& Value){OnAction##ActionName##Delegate.Broadcast(); }\n\n#define INPUT_ACTION_START_END_ACCESSORS(ActionName) \\\npublic:FOnAction##ActionName##StartSignature  OnAction##ActionName##StartDelegate; \\\npublic:FOnAction##ActionName##EndSignature  OnAction##ActionName##EndDelegate; \\\nprivate:void OnAction##ActionName##Start(const FInputActionValue& Value) { OnAction##ActionName##StartDelegate.Broadcast();} \\\nprivate:void OnAction##ActionName##End(const FInputActionValue& Value) {OnAction##ActionName##EndDelegate.Broadcast();}\n\n#define INPUT_ACTION_VECTOR2D_TRIGGER_ACCESSORS(ActionName) \\\npublic:FOnAction##ActionName##Signature  OnAction##ActionName##Delegate; \\\nprivate:void OnAction##ActionName(const FInputActionValue& Value) { FVector2D  MoveDelta = Value.Get<FVector2D>(); OnAction##ActionName##Delegate.Broadcast(MoveDelta); }\n\n#define INPUT_ACTION_VECTOR2D_START_END_ACCESSORS(ActionName) \\\npublic:FOnAction##ActionName##StartSignature  OnAction##ActionName##StartDelegate; \\\npublic:FOnAction##ActionName##EndSignature  OnAction##ActionName##EndDelegate; \\\nprivate:void OnAction##ActionName##Start(const FInputActionValue& Value) { FVector2D  MoveDelta = Value.Get<FVector2D>();OnAction##ActionName##StartDelegate.Broadcast(MoveDelta);} \\\nprivate:void OnAction##ActionName##End(const FInputActionValue& Value) {FVector2D  MoveDelta = Value.Get<FVector2D>(); OnAction##ActionName##EndDelegate.Broadcast(MoveDelta); }\n\n\n#define INPUT_ACTION_BIND(EnhancedInputComponent,ActionName) \\\nif (EnhancedInputComponent&&ActionName) { \\\n        EnhancedInputComponent->BindAction(ActionName, ETriggerEvent::Started, this, &ThisClass::OnAction##ActionName); \\\n}\n#define INPUT_ACTION_TRIGGER_BIND(EnhancedInputComponent,ActionName) \\\nif (EnhancedInputComponent&&ActionName) { \\\n        EnhancedInputComponent->BindAction(ActionName, ETriggerEvent::Triggered, this, &ThisClass::OnAction##ActionName); \\\n}\n#define INPUT_ACTION_START_END_BIND(EnhancedInputComponent,ActionName) \\\nif (EnhancedInputComponent&&ActionName) { \\\n        EnhancedInputComponent->BindAction(ActionName, ETriggerEvent::Started, this, &ThisClass::OnAction##ActionName##Start); \\\n        EnhancedInputComponent->BindAction(ActionName, ETriggerEvent::Completed, this, &ThisClass::OnAction##ActionName##End); \\\n}" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AncientGame_OnMoveSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AncientGame, nullptr, "OnMoveSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AncientGame_OnMoveSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnMoveSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AncientGame_OnMoveSignature__DelegateSignature_Statics::_Script_AncientGame_eventOnMoveSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnMoveSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AncientGame_OnMoveSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnMoveSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AncientGame_OnMoveSignature__DelegateSignature_Statics::_Script_AncientGame_eventOnMoveSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AncientGame_OnMoveSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AncientGame_OnMoveSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMoveSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMoveSignature, FVector2D const& Value)
{
	struct _Script_AncientGame_eventOnMoveSignature_Parms
	{
		FVector2D Value;
	};
	_Script_AncientGame_eventOnMoveSignature_Parms Parms;
	Parms.Value=Value;
	OnMoveSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AncientGame_OnLookSignature__DelegateSignature_Statics
	{
		struct _Script_AncientGame_eventOnLookSignature_Parms
		{
			FVector2D Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_OnLookSignature__DelegateSignature_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AncientGame_OnLookSignature__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AncientGame_eventOnLookSignature_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnLookSignature__DelegateSignature_Statics::NewProp_Value_MetaData), Z_Construct_UDelegateFunction_AncientGame_OnLookSignature__DelegateSignature_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AncientGame_OnLookSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AncientGame_OnLookSignature__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_OnLookSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Input/QBaseInputSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AncientGame_OnLookSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AncientGame, nullptr, "OnLookSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AncientGame_OnLookSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnLookSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AncientGame_OnLookSignature__DelegateSignature_Statics::_Script_AncientGame_eventOnLookSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnLookSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AncientGame_OnLookSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnLookSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AncientGame_OnLookSignature__DelegateSignature_Statics::_Script_AncientGame_eventOnLookSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AncientGame_OnLookSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AncientGame_OnLookSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLookSignature_DelegateWrapper(const FMulticastScriptDelegate& OnLookSignature, FVector2D const& Value)
{
	struct _Script_AncientGame_eventOnLookSignature_Parms
	{
		FVector2D Value;
	};
	_Script_AncientGame_eventOnLookSignature_Parms Parms;
	Parms.Value=Value;
	OnLookSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AncientGame_OnCrouchSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_OnCrouchSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Input/QBaseInputSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AncientGame_OnCrouchSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AncientGame, nullptr, "OnCrouchSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnCrouchSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AncientGame_OnCrouchSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AncientGame_OnCrouchSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AncientGame_OnCrouchSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCrouchSignature_DelegateWrapper(const FMulticastScriptDelegate& OnCrouchSignature)
{
	OnCrouchSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AncientGame_OnJumpSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_OnJumpSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Input/QBaseInputSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AncientGame_OnJumpSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AncientGame, nullptr, "OnJumpSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnJumpSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AncientGame_OnJumpSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AncientGame_OnJumpSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AncientGame_OnJumpSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnJumpSignature_DelegateWrapper(const FMulticastScriptDelegate& OnJumpSignature)
{
	OnJumpSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AncientGame_OnSprintSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_OnSprintSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Input/QBaseInputSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AncientGame_OnSprintSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AncientGame, nullptr, "OnSprintSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnSprintSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AncientGame_OnSprintSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AncientGame_OnSprintSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AncientGame_OnSprintSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSprintSignature_DelegateWrapper(const FMulticastScriptDelegate& OnSprintSignature)
{
	OnSprintSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AncientGame_OnAimSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_OnAimSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Input/QBaseInputSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AncientGame_OnAimSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AncientGame, nullptr, "OnAimSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnAimSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AncientGame_OnAimSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AncientGame_OnAimSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AncientGame_OnAimSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAimSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAimSignature)
{
	OnAimSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AncientGame_OnRollSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_OnRollSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Input/QBaseInputSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AncientGame_OnRollSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AncientGame, nullptr, "OnRollSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnRollSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AncientGame_OnRollSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AncientGame_OnRollSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AncientGame_OnRollSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRollSignature_DelegateWrapper(const FMulticastScriptDelegate& OnRollSignature)
{
	OnRollSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AncientGame_OnInteractionSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AncientGame_OnInteractionSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Input/QBaseInputSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AncientGame_OnInteractionSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AncientGame, nullptr, "OnInteractionSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AncientGame_OnInteractionSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AncientGame_OnInteractionSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_AncientGame_OnInteractionSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AncientGame_OnInteractionSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnInteractionSignature_DelegateWrapper(const FMulticastScriptDelegate& OnInteractionSignature)
{
	OnInteractionSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UQBaseInputSystemComponent::execRemoveInputContext)
	{
		P_GET_OBJECT(UInputMappingContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveInputContext(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQBaseInputSystemComponent::execAddNewInputContext)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_OBJECT(UInputMappingContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddNewInputContext(Z_Param_PlayerController,Z_Param_Context);
		P_NATIVE_END;
	}
	void UQBaseInputSystemComponent::StaticRegisterNativesUQBaseInputSystemComponent()
	{
		UClass* Class = UQBaseInputSystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNewInputContext", &UQBaseInputSystemComponent::execAddNewInputContext },
			{ "RemoveInputContext", &UQBaseInputSystemComponent::execRemoveInputContext },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQBaseInputSystemComponent_AddNewInputContext_Statics
	{
		struct QBaseInputSystemComponent_eventAddNewInputContext_Parms
		{
			APlayerController* PlayerController;
			UInputMappingContext* Context;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQBaseInputSystemComponent_AddNewInputContext_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseInputSystemComponent_eventAddNewInputContext_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQBaseInputSystemComponent_AddNewInputContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseInputSystemComponent_eventAddNewInputContext_Parms, Context), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQBaseInputSystemComponent_AddNewInputContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseInputSystemComponent_AddNewInputContext_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseInputSystemComponent_AddNewInputContext_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseInputSystemComponent_AddNewInputContext_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Input/QBaseInputSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseInputSystemComponent_AddNewInputContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseInputSystemComponent, nullptr, "AddNewInputContext", nullptr, nullptr, Z_Construct_UFunction_UQBaseInputSystemComponent_AddNewInputContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseInputSystemComponent_AddNewInputContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQBaseInputSystemComponent_AddNewInputContext_Statics::QBaseInputSystemComponent_eventAddNewInputContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseInputSystemComponent_AddNewInputContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseInputSystemComponent_AddNewInputContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseInputSystemComponent_AddNewInputContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQBaseInputSystemComponent_AddNewInputContext_Statics::QBaseInputSystemComponent_eventAddNewInputContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQBaseInputSystemComponent_AddNewInputContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseInputSystemComponent_AddNewInputContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQBaseInputSystemComponent_RemoveInputContext_Statics
	{
		struct QBaseInputSystemComponent_eventRemoveInputContext_Parms
		{
			UInputMappingContext* Context;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQBaseInputSystemComponent_RemoveInputContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QBaseInputSystemComponent_eventRemoveInputContext_Parms, Context), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQBaseInputSystemComponent_RemoveInputContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQBaseInputSystemComponent_RemoveInputContext_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQBaseInputSystemComponent_RemoveInputContext_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/Input/QBaseInputSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQBaseInputSystemComponent_RemoveInputContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQBaseInputSystemComponent, nullptr, "RemoveInputContext", nullptr, nullptr, Z_Construct_UFunction_UQBaseInputSystemComponent_RemoveInputContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseInputSystemComponent_RemoveInputContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQBaseInputSystemComponent_RemoveInputContext_Statics::QBaseInputSystemComponent_eventRemoveInputContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseInputSystemComponent_RemoveInputContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQBaseInputSystemComponent_RemoveInputContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQBaseInputSystemComponent_RemoveInputContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQBaseInputSystemComponent_RemoveInputContext_Statics::QBaseInputSystemComponent_eventRemoveInputContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQBaseInputSystemComponent_RemoveInputContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQBaseInputSystemComponent_RemoveInputContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQBaseInputSystemComponent);
	UClass* Z_Construct_UClass_UQBaseInputSystemComponent_NoRegister()
	{
		return UQBaseInputSystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UQBaseInputSystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IMBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IMBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Move_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Move;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Look_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Look;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Jump_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Jump;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Crouch_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Crouch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Aim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Aim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Roll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interaction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interaction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInteraction_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteraction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQBaseInputSystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AncientGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseInputSystemComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UQBaseInputSystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQBaseInputSystemComponent_AddNewInputContext, "AddNewInputContext" }, // 2375127744
		{ &Z_Construct_UFunction_UQBaseInputSystemComponent_RemoveInputContext, "RemoveInputContext" }, // 1254690909
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseInputSystemComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseInputSystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//INPUT_ACTION_VECTOR2D_TRIGGER_DECLARE(Move)\n//INPUT_ACTION_VECTOR2D_TRIGGER_DECLARE(Look)\n//INPUT_ACTION_START_END_DECLARE(Crouch)\n//INPUT_ACTION_START_END_DECLARE(Jump)\n//INPUT_ACTION_START_END_DECLARE(Sprint)\n//INPUT_ACTION_START_END_DECLARE(Aim)\n//INPUT_ACTION_DECLARE(Roll)\n//INPUT_ACTION_DECLARE(Interaction)\n" },
#endif
		{ "IncludePath", "Components/Input/QBaseInputSystemComponent.h" },
		{ "ModuleRelativePath", "Components/Input/QBaseInputSystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INPUT_ACTION_VECTOR2D_TRIGGER_DECLARE(Move)\nINPUT_ACTION_VECTOR2D_TRIGGER_DECLARE(Look)\nINPUT_ACTION_START_END_DECLARE(Crouch)\nINPUT_ACTION_START_END_DECLARE(Jump)\nINPUT_ACTION_START_END_DECLARE(Sprint)\nINPUT_ACTION_START_END_DECLARE(Aim)\nINPUT_ACTION_DECLARE(Roll)\nINPUT_ACTION_DECLARE(Interaction)" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_IMBase_MetaData[] = {
		{ "Category", "Input|MapContext" },
		{ "ModuleRelativePath", "Components/Input/QBaseInputSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_IMBase = { "IMBase", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseInputSystemComponent, IMBase), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_IMBase_MetaData), Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_IMBase_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Move_MetaData[] = {
		{ "Category", "Input|Locomotion" },
		{ "ModuleRelativePath", "Components/Input/QBaseInputSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Move = { "Move", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseInputSystemComponent, Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Move_MetaData), Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Move_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Look_MetaData[] = {
		{ "Category", "Input|Locomotion" },
		{ "ModuleRelativePath", "Components/Input/QBaseInputSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Look = { "Look", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseInputSystemComponent, Look), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Look_MetaData), Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Look_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Jump_MetaData[] = {
		{ "Category", "Input|Locomotion" },
		{ "ModuleRelativePath", "Components/Input/QBaseInputSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Jump = { "Jump", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseInputSystemComponent, Jump), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Jump_MetaData), Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Jump_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Crouch_MetaData[] = {
		{ "Category", "Input|Locomotion" },
		{ "ModuleRelativePath", "Components/Input/QBaseInputSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Crouch = { "Crouch", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseInputSystemComponent, Crouch), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Crouch_MetaData), Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Crouch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Sprint_MetaData[] = {
		{ "Category", "Input|Locomotion" },
		{ "ModuleRelativePath", "Components/Input/QBaseInputSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Sprint = { "Sprint", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseInputSystemComponent, Sprint), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Sprint_MetaData), Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Sprint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Aim_MetaData[] = {
		{ "Category", "Input|Locomotion|Actions" },
		{ "ModuleRelativePath", "Components/Input/QBaseInputSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Aim = { "Aim", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseInputSystemComponent, Aim), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Aim_MetaData), Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Aim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Roll_MetaData[] = {
		{ "Category", "Input|Locomotion|Actions" },
		{ "ModuleRelativePath", "Components/Input/QBaseInputSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseInputSystemComponent, Roll), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Roll_MetaData), Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Roll_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Interaction_MetaData[] = {
		{ "Category", "Input|Interaction|Actions" },
		{ "ModuleRelativePath", "Components/Input/QBaseInputSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Interaction = { "Interaction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseInputSystemComponent, Interaction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Interaction_MetaData), Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Interaction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_OnInteraction_MetaData[] = {
		{ "ModuleRelativePath", "Components/Input/QBaseInputSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_OnInteraction = { "OnInteraction", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQBaseInputSystemComponent, OnInteraction), Z_Construct_UDelegateFunction_AncientGame_OnInteractionSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_OnInteraction_MetaData), Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_OnInteraction_MetaData) }; // 1346941442
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQBaseInputSystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_IMBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Move,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Look,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Jump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Crouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Sprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Aim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Roll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_Interaction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQBaseInputSystemComponent_Statics::NewProp_OnInteraction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQBaseInputSystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQBaseInputSystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQBaseInputSystemComponent_Statics::ClassParams = {
		&UQBaseInputSystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQBaseInputSystemComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseInputSystemComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseInputSystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UQBaseInputSystemComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQBaseInputSystemComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UQBaseInputSystemComponent()
	{
		if (!Z_Registration_Info_UClass_UQBaseInputSystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQBaseInputSystemComponent.OuterSingleton, Z_Construct_UClass_UQBaseInputSystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQBaseInputSystemComponent.OuterSingleton;
	}
	template<> ANCIENTGAME_API UClass* StaticClass<UQBaseInputSystemComponent>()
	{
		return UQBaseInputSystemComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQBaseInputSystemComponent);
	UQBaseInputSystemComponent::~UQBaseInputSystemComponent() {}
	struct Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQBaseInputSystemComponent, UQBaseInputSystemComponent::StaticClass, TEXT("UQBaseInputSystemComponent"), &Z_Registration_Info_UClass_UQBaseInputSystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQBaseInputSystemComponent), 2693613489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_421083488(TEXT("/Script/AncientGame"),
		Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_AncientGame_Source_AncientGame_Components_Input_QBaseInputSystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
