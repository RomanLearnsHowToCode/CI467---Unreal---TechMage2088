// Fill out your copyright notice in the Description page of Project Settings.

#include "TechnoMageCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "LEVELSCHANGINGGameModeBase.h"

ALEVELSCHANGINGGameModeBase::ALEVELSCHANGINGGameModeBase()
{
	// set default pawn class to our Blueprinted character

	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TechnoMage/MyTechnoMageCharacter"));
	DefaultPawnClass = PlayerPawnBPClass.Class;

	/*if (PlayerPawnBPClass.Class != NULL)
	{

	}*/
}

