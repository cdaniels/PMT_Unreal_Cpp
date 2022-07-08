// Copyright Epic Games, Inc. All Rights Reserved.

#include "PMT_Unreal_CppGameMode.h"
#include "PMT_Unreal_CppHUD.h"
#include "PMT_Unreal_CppCharacter.h"
#include "UObject/ConstructorHelpers.h"

APMT_Unreal_CppGameMode::APMT_Unreal_CppGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APMT_Unreal_CppHUD::StaticClass();
}
