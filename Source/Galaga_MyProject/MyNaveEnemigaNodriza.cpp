// Fill out your copyright notice in the Description page of Project Settings.


#include "MyNaveEnemigaNodriza.h"

void AMyNaveEnemigaNodriza::BeginPlay()
{
	Super::BeginPlay();
}

AMyNaveEnemigaNodriza::AMyNaveEnemigaNodriza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
}

void AMyNaveEnemigaNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void AMyNaveEnemigaNodriza::Mover(float DeltaTime)
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

void AMyNaveEnemigaNodriza::Vida(float Resistencia)
{
}

void AMyNaveEnemigaNodriza::SoltarNaves()
{
}

void AMyNaveEnemigaNodriza::Absorver()
{
}

void AMyNaveEnemigaNodriza::TipoAtaque(FVector Bombas)
{
}
