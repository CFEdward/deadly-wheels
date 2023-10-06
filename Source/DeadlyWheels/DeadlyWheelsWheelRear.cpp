// Copyright Epic Games, Inc. All Rights Reserved.

#include "DeadlyWheelsWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UDeadlyWheelsWheelRear::UDeadlyWheelsWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}