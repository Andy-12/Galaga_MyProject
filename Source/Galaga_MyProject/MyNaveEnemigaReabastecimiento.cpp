// Fill out your copyright notice in the Description page of Project Settings.


#include "MyNaveEnemigaReabastecimiento.h"

void AMyNaveEnemigaReabastecimiento::BeginPlay()
{
	Super::BeginPlay();
}

AMyNaveEnemigaReabastecimiento::AMyNaveEnemigaReabastecimiento()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}

void AMyNaveEnemigaReabastecimiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void AMyNaveEnemigaReabastecimiento::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();

	// Genera nuevas coordenadas X e Y aleatorias
	float NuevaX = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;
	float NuevaY = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;

	// Crea un nuevo vector de posición con las coordenadas aleatorias y la misma Z que la posición actual
	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z);

	// Establece la nueva posición del actor
	SetActorLocation(NuevaPosicion);
}

void AMyNaveEnemigaReabastecimiento::Vida(float Resistencia)
{
}

void AMyNaveEnemigaReabastecimiento::descargar()
{
}

void AMyNaveEnemigaReabastecimiento::cargar()
{
}

void AMyNaveEnemigaReabastecimiento::Protegerse()
{
}
