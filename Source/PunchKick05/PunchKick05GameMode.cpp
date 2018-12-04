// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PunchKick05GameMode.h"
#include "PunchKick05Character.h"
#include "UObject/ConstructorHelpers.h"

APunchKick05GameMode::APunchKick05GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
