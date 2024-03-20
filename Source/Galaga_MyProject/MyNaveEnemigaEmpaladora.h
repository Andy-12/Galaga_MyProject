// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "MyNaveEnemigaEmpaladora.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_MYPROJECT_API AMyNaveEnemigaEmpaladora : public ANaveEnemiga
{
	GENERATED_BODY()
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	AMyNaveEnemigaEmpaladora();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Mover(float DeltaTime);
	virtual void Vida(float Resistencia);
protected:
	void Dash(float DeltaTime);
	virtual void TipoBomba();

};