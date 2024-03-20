// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_MyProjectGameMode.h"
#include "Galaga_MyProjectPawn.h"
#include "NaveEnemiga.h"
#include "MyNaveEnemigaCaza.h"
#include "MyNaveEnemigaTransporte.h"

AGalaga_MyProjectGameMode::AGalaga_MyProjectGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_MyProjectPawn::StaticClass();
}

void AGalaga_MyProjectGameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing

	FVector ubicacionNaveCaza01 = FVector(-900.0f, 500.0f, 250.0f);
	FVector ubicacionNaveCaza02 = FVector(-500.0f, 500.0f, 250.0f);
	FVector ubicacionNaveTransporte01 = FVector(-900.0f, -500.0f, 250.0f);
	FVector ubicacionNaveTransporte02 = FVector(-500.0f, -500.0f, 250.0f);

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		NaveEnemigaCaza01 = World->SpawnActor<AMyNaveEnemigaCaza>(ubicacionNaveCaza01, rotacionNave);
		NaveEnemigaCaza02 = World->SpawnActor<AMyNaveEnemigaCaza>(ubicacionNaveCaza02, rotacionNave);
		NaveEnemigaTransporte01 = World->SpawnActor<AMyNaveEnemigaTransporte>(ubicacionNaveTransporte01, rotacionNave);
		NaveEnemigaTransporte02 = World->SpawnActor<AMyNaveEnemigaTransporte>(ubicacionNaveTransporte02, rotacionNave);

	}

	NaveEnemigaCaza01->SetPosicion(FVector(-900.0f, 500.0f, 250.0f));
	NaveEnemigaCaza02->SetPosicion(FVector(-500.0f, 500.0f, 250.0f));
	NaveEnemigaTransporte01->SetPosicion(FVector(-900.0f, -500.0f, 250.0f));
	NaveEnemigaTransporte02->SetPosicion(FVector(-500.0f, -500.0f, 250.0f));

}

