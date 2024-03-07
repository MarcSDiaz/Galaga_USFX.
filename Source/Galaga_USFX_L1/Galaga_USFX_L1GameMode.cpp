// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L1GameMode.h"
#include "Galaga_USFX_L1PlayerController.h"
#include "Galaga_USFX_L1Character.h"
#include "UObject/ConstructorHelpers.h"

AGalaga_USFX_L1GameMode::AGalaga_USFX_L1GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGalaga_USFX_L1PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}