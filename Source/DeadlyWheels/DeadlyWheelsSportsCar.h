// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "DeadlyWheelsPawn.h"
#include "DeadlyWheelsSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class DEADLYWHEELS_API ADeadlyWheelsSportsCar : public ADeadlyWheelsPawn
{
	GENERATED_BODY()
	
public:

	ADeadlyWheelsSportsCar();
};
