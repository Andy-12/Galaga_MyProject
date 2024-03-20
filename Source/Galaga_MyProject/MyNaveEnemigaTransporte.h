// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "MyNaveEnemigaTransporte.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_MYPROJECT_API AMyNaveEnemigaTransporte : public ANaveEnemiga
{
	GENERATED_BODY()
protected:
	virtual void Tick(float DeltaTime) override;
public:
	AMyNaveEnemigaTransporte();
	virtual void Mover(float DeltaTime);
	virtual void Vida(float Resistencia);

protected:
	void Escapar(float Velocidad);
	
};
