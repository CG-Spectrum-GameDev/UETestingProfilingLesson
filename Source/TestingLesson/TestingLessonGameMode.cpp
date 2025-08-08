// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestingLessonGameMode.h"
#include "TestingLessonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestingLessonGameMode::ATestingLessonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
