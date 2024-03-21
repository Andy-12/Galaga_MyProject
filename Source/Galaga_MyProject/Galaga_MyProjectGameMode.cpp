// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_MyProjectGameMode.h"
#include "Galaga_MyProjectPawn.h"
#include "NaveEnemiga.h"
#include "MyNaveEnemigaCaza.h"
#include "MyNaveEnemigaTransporte.h"
#include "MyNaveEnemigaEspia.h"
#include "MyNaveEnemigaNodriza.h"
#include "MyNaveEnemigaReabastecimiento.h"
#include "MyNaveEnemigaEmpaladora.h"

AGalaga_MyProjectGameMode::AGalaga_MyProjectGameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_MyProjectPawn::StaticClass();
}

void AGalaga_MyProjectGameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing

	/*FVector ubicacionNaveCaza01 = FVector(-900.0f, 500.0f, 250.0f);
	FVector ubicacionNaveCaza02 = FVector(-500.0f, 500.0f, 250.0f);
	FVector ubicacionNaveTransporte01 = FVector(-900.0f, -500.0f, 250.0f);
	FVector ubicacionNaveTransporte02 = FVector(-500.0f, -500.0f, 250.0f);*/

	FVector ubicacionInicioNaves = FVector(1900.0f, -1700.0f, 200.0f);
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
	/*	NaveEnemigaCaza01 = World->SpawnActor<AMyNaveEnemigaCaza>(ubicacionNaveCaza01, rotacionNave);
		NaveEnemigaCaza02 = World->SpawnActor<AMyNaveEnemigaCaza>(ubicacionNaveCaza02, rotacionNave);
		NaveEnemigaTransporte01 = World->SpawnActor<AMyNaveEnemigaTransporte>(ubicacionNaveTransporte01, rotacionNave);
		NaveEnemigaTransporte02 = World->SpawnActor<AMyNaveEnemigaTransporte>(ubicacionNaveTransporte02, rotacionNave);*/

		FVector ubicacionActual = ubicacionInicioNaves;
		for (int i = 0; i < 5; i++) {

				ubicacionActual = FVector(ubicacionActual.X, ubicacionActual.Y + 150.0f , ubicacionActual.Z);
				AMyNaveEnemigaCaza* NaveEnemigaCazaActual = World->SpawnActor<AMyNaveEnemigaCaza>(ubicacionActual, rotacionNave);

				TANavesEnemigas.Add(NaveEnemigaCazaActual);
		}
		for (int m = 0; m < 5; m++) {

			ubicacionActual = FVector(ubicacionActual.X, ubicacionActual.Y + 150.0f, ubicacionActual.Z);
			AMyNaveEnemigaEspia* NaveEnemigaEspiaActual = World->SpawnActor<AMyNaveEnemigaEspia>(ubicacionActual, rotacionNave);

			TANavesEnemigas.Add(NaveEnemigaEspiaActual);
		}
		for (int n = 0; n < 5; n++) {

			ubicacionActual = FVector(ubicacionActual.X, ubicacionActual.Y + 150.0f, ubicacionActual.Z);
			AMyNaveEnemigaEmpaladora* NaveEnemigaEmpaladoraActual = World->SpawnActor<AMyNaveEnemigaEmpaladora>(ubicacionActual, rotacionNave);

			TANavesEnemigas.Add(NaveEnemigaEmpaladoraActual);
		}

		

		for (int j = 0; j < 5; j++) {
			ubicacionActual = FVector(ubicacionActual.X, ubicacionActual.Y + 150.0f, ubicacionActual.Z);
			AMyNaveEnemigaTransporte* NaveEnemigaTransporteActual = World->SpawnActor<AMyNaveEnemigaTransporte>(ubicacionActual, rotacionNave);

			TANavesEnemigas.Add(NaveEnemigaTransporteActual);

			//TANavesEnemigasTransporte.Push(NaveEnemigaTransporteTemporal);
		}
				
			ubicacionActual = FVector(1750.0f,-1750.0f,200.0f);
		for (int k = 0; k < 5; k++) {
			ubicacionActual = FVector(ubicacionActual.X-150.0f, ubicacionActual.Y, ubicacionActual.Z);
			AMyNaveEnemigaNodriza* NaveEnemigaNodrizaActual = World->SpawnActor<AMyNaveEnemigaNodriza>(ubicacionActual, rotacionNave);

			TANavesEnemigas.Add(NaveEnemigaNodrizaActual);

		}
		   ubicacionActual = FVector(1750.0f, 1250.0f, 200.0f);
		for (int l = 0; l < 5; l++) {
		
			ubicacionActual = FVector(ubicacionActual.X-150.0f, ubicacionActual.Y, ubicacionActual.Z);
			AMyNaveEnemigaReabastecimiento* NaveEnemigaReabastecimientoActual = World->SpawnActor<AMyNaveEnemigaReabastecimiento>(ubicacionActual, rotacionNave);

			TANavesEnemigas.Add(NaveEnemigaReabastecimientoActual);

		}

		//NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNave01, rotacionNave);
		//NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNave02, rotacionNave);

		TiempoTranscurrido = 0;
	}

	//NaveEnemigaCaza01->SetPosicion(FVector(-900.0f, 500.0f, 250.0f));
	//NaveEnemigaCaza02->SetPosicion(FVector(-500.0f, 500.0f, 250.0f));
	//NaveEnemigaTransporte01->SetPosicion(FVector(-900.0f, -500.0f, 250.0f));
	//NaveEnemigaTransporte02->SetPosicion(FVector(-500.0f, -500.0f, 250.0f));
	TMapPowerUp.Add(3000, "escudo");
	TMapPowerUp.Add(200, "doble tiro");
	TMapPowerUp.Add(1000, "vida extra");
	TMapPowerUp.Add(1500, "invulnerable");
	TMapPowerUp.Add(500, "velocidad");

	////NUEVO
	PowerUpStatusMap.Add(3000, false);
	PowerUpStatusMap.Add(200, false);
	PowerUpStatusMap.Add(1000, false);
	PowerUpStatusMap.Add(1500, false);
	PowerUpStatusMap.Add(500, false);

}

void AGalaga_MyProjectGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido++;

	if (TiempoTranscurrido >= 500)
	{
		int numeroEnemigo = FMath::RandRange(5, 9);
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Hola estoy aqui")));


			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Entero: %d"), numeroEnemigo));
			
			//SCORE
			score = score + 50;
			TiempoTranscurrido = 0;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("score: %d"), score));
		}
		for (int i = 25; i < 29; i++) {
			TANavesEnemigas[i]->SetVelocidad(2);
		}
		//TANavesEnemigas[numeroEnemigo]->PrimaryActorTick.bCanEverTick = false;
		FVector Prueba = FVector(1900.0f, -1700.0f, 200.0f);
		//TANavesEnemigas[numeroEnemigo]->SetActorLocation(Prueba);
		//IMPRIME POWER UP EN TEXTO
		for (const auto& par : TMapPowerUp) {

			int scoreMap = par.Key;
			FString PowerUp = par.Value;
			if (scoreMap == score) {

				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("PowerUp: %s"), *PowerUp));

			}

		}
		//CONVIERTE EN TRUE EL VALOR DEL TMAP
		for (auto& par2 : PowerUpStatusMap)
		{
			int PowerUpScore = par2.Key;
			bool& bPowerUpStatus = par2.Value; // Usamos una referencia para poder modificar el valor original en el TMap

			if (score >= PowerUpScore && !bPowerUpStatus)
			{
				bPowerUpStatus = true;
				FString StatusMessage = FString::Printf(TEXT("PowerUp with score %d is now active: %s"), PowerUpScore, bPowerUpStatus ? TEXT("True") : TEXT("False"));
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, StatusMessage);
			}
		}

	}
}

