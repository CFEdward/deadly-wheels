// Copyright Epic Games, Inc. All Rights Reserved.

#include "DeadlyWheelsWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UDeadlyWheelsWheelFront::UDeadlyWheelsWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}