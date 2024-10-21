// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShapeCTemplateGameMode.h"
#include "ShapeCTemplateCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShapeCTemplateGameMode::AShapeCTemplateGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
