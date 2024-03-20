// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_MyProjectGameMode.generated.h"

class ANaveEnemiga;
class AMyNaveEnemigaCaza;
class AMyNaveEnemigaTransporte;

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
	AMyNaveEnemigaCaza* NaveEnemigaCaza02;
	AMyNaveEnemigaTransporte* NaveEnemigaTransporte01;
	AMyNaveEnemigaTransporte* NaveEnemigaTransporte02;
};



