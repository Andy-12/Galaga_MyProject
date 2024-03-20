// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "MyNaveEnemigaReabastecimiento.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_MYPROJECT_API AMyNaveEnemigaReabastecimiento : public ANaveEnemiga
{
	GENERATED_BODY()
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	AMyNaveEnemigaReabastecimiento();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Mover(float DeltaTime);
	virtual void Vida(float Resistencia);
protected:
	void descargar();
	void cargar();
	void Protegerse();

};
