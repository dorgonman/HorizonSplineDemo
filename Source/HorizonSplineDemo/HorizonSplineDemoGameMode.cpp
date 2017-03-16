// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "HorizonSplineDemo.h"
#include "HorizonSplineDemoGameMode.h"
#include "HorizonSplineDemoHUD.h"
#include "HorizonSplineDemoCharacter.h"

AHorizonSplineDemoGameMode::AHorizonSplineDemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHorizonSplineDemoHUD::StaticClass();
}
