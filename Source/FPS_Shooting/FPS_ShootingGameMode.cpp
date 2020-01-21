// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FPS_ShootingGameMode.h"
#include "FPS_ShootingHUD.h"
#include "FPS_ShootingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_ShootingGameMode::AFPS_ShootingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Dynamic/Player/Behaviour/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPS_ShootingHUD::StaticClass();
}
