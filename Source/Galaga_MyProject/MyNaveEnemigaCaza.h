// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "MyNaveEnemigaCaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_MYPROJECT_API AMyNaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
public:
	AMyNaveEnemigaCaza();
	virtual void Tick(float DeltaTime) override;
public:
	virtual void Mover(float DeltaTime);
	virtual void Vida(float Resistencia);
protected:
	virtual void TipoAtaque(FVector Rayo);
	void TamanoForma(); 

	
};
