// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "DeadlyWheelsPawn.h"
#include "DeadlyWheelsSportsCar.generated.h"

class UShooter;
/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class DEADLYWHEELS_API ADeadlyWheelsSportsCar : public ADeadlyWheelsPawn
{
	GENERATED_BODY()
	
public:

	ADeadlyWheelsSportsCar();

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

protected:

	void FireButtonPressed();

private:

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStaticMeshComponent> TurretMesh;
	
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USceneComponent> FirePoint;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UShooter> ShooterComponent;

public:

	FORCEINLINE USceneComponent* GetFirePoint() const { return FirePoint; }
	
};
