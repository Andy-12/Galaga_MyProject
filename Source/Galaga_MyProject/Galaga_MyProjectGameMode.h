// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_MyProjectGameMode.generated.h"

class ANaveEnemiga;
class AMyNaveEnemigaCaza;
class AMyNaveEnemigaTransporte; 
class AMyNaveEnemigaNodriza;
class AMyNaveEnemigaEmpaladora;
class AMyNaveEnemigaReabastecimiento;
class AMyNaveEnemigaEspia;


UCLASS(MinimalAPI)
class AGalaga_MyProjectGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_MyProjectGameMode();
protected:
	virtual void BeginPlay() override;

public:
	ANaveEnemiga* NaveEnemiga01;
	AMyNaveEnemigaCaza* NaveEnemigaCaza01;

	AMyNaveEnemigaTransporte* NaveEnemigaTransporte01;
	AMyNaveEnemigaEspia* NaveEnemigaEspia01;
	AMyNaveEnemigaEmpaladora* NaveEnemigaEmpaladora1;
	AMyNaveEnemigaNodriza* NaveEnemigaNodriza1;
	AMyNaveEnemigaReabastecimiento* NaveEnemigaReabastecimiento01;
public:
	TArray < ANaveEnemiga* > TANavesEnemigas;
	TArray < AMyNaveEnemigaCaza* > TANavesEnemigasCaza;
	TArray < AMyNaveEnemigaTransporte* > TANavesEnemigasTransporte;
private:
	int TiempoTranscurrido;
public:
	int score;
	int POWER_UP_DOUBLE_SHOT_ID;
public:
	FString powerUp;
	//MAP TEXTO
	TMap<int, FString>TMapPowerUp;


	FORCEINLINE bool GetPowerUpStatus(int PowerUpID) const
	{
		const bool* Status = PowerUpStatusMap.Find(PowerUpID);
		return (Status != nullptr) ? *Status : false;
	}



private:
	// Mapa para almacenar el estado de los power-ups
	TMap<int, bool> PowerUpStatusMap;
public:
	virtual void Tick(float DeltaTime) override;
};



