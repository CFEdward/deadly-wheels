// Copyright Epic Games, Inc. All Rights Reserved.


#include "DeadlyWheelsSportsWheelRear.h"

UDeadlyWheelsSportsWheelRear::UDeadlyWheelsSportsWheelRear()
{
	WheelRadius = 30.f;
	WheelWidth = 19.0f;
	FrictionForceMultiplier = 4.0f;
	SlipThreshold = 100.0f;
	SkidThreshold = 100.0f;
	MaxSteerAngle = 0.0f;
	MaxHandBrakeTorque = 6000.0f;
}