// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DeadlyWheelsPlayerController.generated.h"

class UInputMappingContext;
class ADeadlyWheelsPawn;
class UDeadlyWheelsUI;

/**
 *  Vehicle Player Controller class
 *  Handles input mapping and user interface
 */
UCLASS(abstract)
class DEADLYWHEELS_API ADeadlyWheelsPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:

	/** Input Mapping Context to be used for player input */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* InputMappingContext;

	/** Pointer to the controlled vehicle pawn */
	TObjectPtr<ADeadlyWheelsPawn> VehiclePawn;

	/** Type of the UI to spawn */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = UI)
	TSubclassOf<UDeadlyWheelsUI> VehicleUIClass;

	/** Pointer to the UI widget */
	TObjectPtr<UDeadlyWheelsUI> VehicleUI;

	// Begin Actor interface
protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float Delta) override;

	// End Actor interface

	// Begin PlayerController interface
protected:

	virtual void OnPossess(APawn* InPawn) override;

	// End PlayerController interface
};
