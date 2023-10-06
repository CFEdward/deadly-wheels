// Copyright Epic Games, Inc. All Rights Reserved.

#include "DeadlyWheelsGameMode.h"
#include "DeadlyWheelsPlayerController.h"

ADeadlyWheelsGameMode::ADeadlyWheelsGameMode()
{
	PlayerControllerClass = ADeadlyWheelsPlayerController::StaticClass();
}
