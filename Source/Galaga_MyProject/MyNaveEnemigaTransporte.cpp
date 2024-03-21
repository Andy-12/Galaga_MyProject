// Fill out your copyright notice in the Description page of Project Settings.


#include "MyNaveEnemigaTransporte.h"

void AMyNaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

AMyNaveEnemigaTransporte::AMyNaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim_90_Out.Shape_Trim_90_Out'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
	velocidad = -2;
}

void AMyNaveEnemigaTransporte::Mover(float DeltaTime)
{
	// Obtiene la posici�n actual del actor
	FVector PosicionActual = GetActorLocation();

	// Genera nuevas coordenadas X e Y aleatorias
	/*float NuevaX = FMath::RandRange(-1000.0f, 1000.0f) * (DeltaTime / 1000.0f);
	float NuevaY = FMath::RandRange(-1000.0f, 1000.0f) * (DeltaTime / 1000.0f);
	float NuevaZ = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;*/

	
	float NuevaX = 10.0f * (DeltaTime * velocidad);
	// Crea un nuevo vector de posici�n con las coordenadas aleatorias y la misma Z que la posici�n actual
	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y , PosicionActual.Z);

	// Establece la nueva posici�n del actor
	SetActorLocation(NuevaPosicion);
}

void AMyNaveEnemigaTransporte::Vida(float Resistencia)
{
}

void AMyNaveEnemigaTransporte::Escapar(float Velocidad)
{
}
