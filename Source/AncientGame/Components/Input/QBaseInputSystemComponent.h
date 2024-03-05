// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "QBaseInputSystemComponent.generated.h"

class UInputMappingContext;
class UInputAction;

//#define INPUT_ACTION_DECLARE(ActionName) \
//DECLARE_MULTICAST_DELEGATE(FOnAction##ActionName##Signature);
//
//#define INPUT_ACTION_TRIGGER_DECLARE(ActionName) \
//DECLARE_MULTICAST_DELEGATE(FOnAction##ActionName##Signature);
//
//#define INPUT_ACTION_START_END_DECLARE(ActionName) \
//DECLARE_MULTICAST_DELEGATE(FOnAction##ActionName##StartSignature); \
//DECLARE_MULTICAST_DELEGATE(FOnAction##ActionName##EndSignature);
//
//#define INPUT_ACTION_VECTOR2D_TRIGGER_DECLARE(ActionName) \
//DECLARE_MULTICAST_DELEGATE_OneParam(FOnAction##ActionName##Signature, const FVector2D&);
//
//#define INPUT_ACTION_VECTOR2D_START_END_DECLARE(ActionName) \
//DECLARE_MULTICAST_DELEGATE_OneParam(FOnAction##ActionName##StartSignature, const FVector2D&); \
//DECLARE_MULTICAST_DELEGATE_OneParam(FOnAction##ActionName##EndSignature, const FVector2D&);
//
//
//#define INPUT_ACTION_ACCESSORS(ActionName) \
//public:FOnAction##ActionName##Signature OnAction##ActionName##Delegate; \
//private:void OnAction##ActionName(const FInputActionValue& Value){ OnAction##ActionName##Delegate.Broadcast(); }
//
//
//#define INPUT_ACTION_TRIGGER_ACCESSORS(ActionName) \
//public:FOnAction##ActionName##Signature OnAction##ActionName##Delegate; \
//private:void OnAction##ActionName(const FInputActionValue& Value){OnAction##ActionName##Delegate.Broadcast(); }
//
//#define INPUT_ACTION_START_END_ACCESSORS(ActionName) \
//public:FOnAction##ActionName##StartSignature  OnAction##ActionName##StartDelegate; \
//public:FOnAction##ActionName##EndSignature  OnAction##ActionName##EndDelegate; \
//private:void OnAction##ActionName##Start(const FInputActionValue& Value) { OnAction##ActionName##StartDelegate.Broadcast();} \
//private:void OnAction##ActionName##End(const FInputActionValue& Value) {OnAction##ActionName##EndDelegate.Broadcast();} 
//
//#define INPUT_ACTION_VECTOR2D_TRIGGER_ACCESSORS(ActionName) \
//public:FOnAction##ActionName##Signature  OnAction##ActionName##Delegate; \
//private:void OnAction##ActionName(const FInputActionValue& Value) { FVector2D  MoveDelta = Value.Get<FVector2D>(); OnAction##ActionName##Delegate.Broadcast(MoveDelta); }
//
//#define INPUT_ACTION_VECTOR2D_START_END_ACCESSORS(ActionName) \
//public:FOnAction##ActionName##StartSignature  OnAction##ActionName##StartDelegate; \
//public:FOnAction##ActionName##EndSignature  OnAction##ActionName##EndDelegate; \
//private:void OnAction##ActionName##Start(const FInputActionValue& Value) { FVector2D  MoveDelta = Value.Get<FVector2D>();OnAction##ActionName##StartDelegate.Broadcast(MoveDelta);} \
//private:void OnAction##ActionName##End(const FInputActionValue& Value) {FVector2D  MoveDelta = Value.Get<FVector2D>(); OnAction##ActionName##EndDelegate.Broadcast(MoveDelta); } 
//
//
//#define INPUT_ACTION_BIND(EnhancedInputComponent,ActionName) \
//if (EnhancedInputComponent&&ActionName) { \
//        EnhancedInputComponent->BindAction(ActionName, ETriggerEvent::Started, this, &ThisClass::OnAction##ActionName); \
//}
//#define INPUT_ACTION_TRIGGER_BIND(EnhancedInputComponent,ActionName) \
//if (EnhancedInputComponent&&ActionName) { \
//        EnhancedInputComponent->BindAction(ActionName, ETriggerEvent::Triggered, this, &ThisClass::OnAction##ActionName); \
//}
//#define INPUT_ACTION_START_END_BIND(EnhancedInputComponent,ActionName) \
//if (EnhancedInputComponent&&ActionName) { \
//        EnhancedInputComponent->BindAction(ActionName, ETriggerEvent::Started, this, &ThisClass::OnAction##ActionName##Start); \
//        EnhancedInputComponent->BindAction(ActionName, ETriggerEvent::Completed, this, &ThisClass::OnAction##ActionName##End); \
//}
//


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveSignature, const FVector2D&, Value);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLookSignature, const FVector2D&, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCrouchSignature);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnJumpSignature);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSprintSignature);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAimSignature);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRollSignature);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInteractionSignature);


//INPUT_ACTION_VECTOR2D_TRIGGER_DECLARE(Move)
//INPUT_ACTION_VECTOR2D_TRIGGER_DECLARE(Look)
//INPUT_ACTION_START_END_DECLARE(Crouch)
//INPUT_ACTION_START_END_DECLARE(Jump)
//INPUT_ACTION_START_END_DECLARE(Sprint)
//INPUT_ACTION_START_END_DECLARE(Aim)
//INPUT_ACTION_DECLARE(Roll)
//INPUT_ACTION_DECLARE(Interaction)


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ANCIENTGAME_API UQBaseInputSystemComponent : public UActorComponent
{
	GENERATED_BODY()


public:	

	UQBaseInputSystemComponent();

	virtual void SetupPlayerInputComponent(APlayerController* PlayerController, class UInputComponent* PlayerInputComponent) ;
protected:
	virtual void BeginPlay() override;
	void BindAction(UInputComponent* PlayerInputComponent);

	UFUNCTION(BlueprintCallable)
	void AddNewInputContext(APlayerController* PlayerController,  UInputMappingContext* Context);

	UFUNCTION(BlueprintCallable)
	void RemoveInputContext(UInputMappingContext* Context);

	UPROPERTY(EditDefaultsOnly, Category = "Input|MapContext")
	UInputMappingContext* IMBase;

	UPROPERTY(EditDefaultsOnly, Category = "Input|Locomotion")
	UInputAction* Move;

	UPROPERTY(EditDefaultsOnly, Category = "Input|Locomotion")
	UInputAction* Look;

	UPROPERTY(EditDefaultsOnly, Category = "Input|Locomotion")
	UInputAction* Jump;

	UPROPERTY(EditDefaultsOnly, Category = "Input|Locomotion")
	UInputAction* Crouch;

	UPROPERTY(EditDefaultsOnly, Category = "Input|Locomotion")
	UInputAction* Sprint;

	UPROPERTY(EditDefaultsOnly, Category = "Input|Locomotion|Actions")
	UInputAction* Aim;

	UPROPERTY(EditDefaultsOnly, Category = "Input|Locomotion|Actions")
	UInputAction* Roll;
	
	UPROPERTY(EditDefaultsOnly, Category = "Input|Interaction|Actions")
	UInputAction* Interaction;

	int ContextIndex = 0;

	class UEnhancedInputLocalPlayerSubsystem* EnhancedInputLocalPlayerSubsystem;


public:
	FOnMoveSignature OnMove;

	FOnLookSignature OnLook;

	FOnCrouchSignature OnCrouchStart;
	FOnCrouchSignature OnCrouchEnd;

	FOnJumpSignature OnJumpStart;
	FOnJumpSignature OnJumpEnd;

	FOnAimSignature OnAimStart;
	FOnAimSignature OnAimEnd;

	FOnSprintSignature OnSprintStart;
	FOnSprintSignature OnSprintEnd;


	FOnRollSignature OnRoll;

	UPROPERTY(BlueprintAssignable)
	FOnInteractionSignature OnInteraction;

private:
	void OnMoveActive(const FInputActionValue& Value);
	void OnLookActive(const FInputActionValue& Value);

	void OnJumpStartActive();
	void OnJumpEndActive();

	void OnCrouchStartActive();
	void OnCrouchEndActive();

	void OnSprintStartActive();
	void OnSprintEndActive();

	void OnAimStartActive();
	void OnAimEndActive();

	void OnRollActive();

	void OnInteractionActive();

	/*INPUT_ACTION_VECTOR2D_TRIGGER_ACCESSORS(Move);
	INPUT_ACTION_VECTOR2D_TRIGGER_ACCESSORS(Look);
	INPUT_ACTION_START_END_ACCESSORS(Jump);
	INPUT_ACTION_START_END_ACCESSORS(Crouch);
	INPUT_ACTION_START_END_ACCESSORS(Sprint);
	INPUT_ACTION_START_END_ACCESSORS(Aim);
	INPUT_ACTION_ACCESSORS(Roll);
	INPUT_ACTION_ACCESSORS(Interaction);*/
};
