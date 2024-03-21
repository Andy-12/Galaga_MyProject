// Fill out your copyright notice in the Description page of Project Settings.


#include "MyNaveEnemigaEmpaladora.h"

void AMyNaveEnemigaEmpaladora::BeginPlay()
{
	Super::BeginPlay();
}

AMyNaveEnemigaEmpaladora::AMyNaveEnemigaEmpaladora()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);
	velocidad = -2;
}

void AMyNaveEnemigaEmpaladora::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void AMyNaveEnemigaEmpaladora::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();

	// Genera nuevas coordenadas X e Y aleatorias
	
	float NuevaX = 10.0f * (DeltaTime * velocidad);

	// Crea un nuevo vector de posición con las coordenadas aleatorias y la misma Z que la posición actual
	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y, PosicionActual.Z);

	// Establece la nueva posición del actor
	SetActorLocation(NuevaPosicion);

}

void AMyNaveEnemigaEmpaladora::Vida(float Resistencia)
{
}

void AMyNaveEnemigaEmpaladora::Dash(float DeltaTime)
{
}

void AMyNaveEnemigaEmpaladora::TipoBomba()
{
}
