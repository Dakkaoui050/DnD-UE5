// Fill out your copyright notice in the Description page of Project Settings.


#include "DiamondSquare.h"
#include "ProceduralMeshComponent.h"

ADiamondSquare::ADiamondSquare()
{
	PrimaryActorTick.bCanEverTick = true;

	ProceduralMesh = CreateDefaultSubobject<UProceduralMeshComponent>("ProceduralMesh");
	ProceduralMesh->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void ADiamondSquare::BeginPlay()
{
	Super::BeginPlay();
	
	ProceduralMesh->CreateMeshSection(0, Vertices, Traingles, TArray<FVector>(), TArray<FVector2D>(), TArray<FColor>(), TArray<FProcMeshTangent>(), true);
	ProceduralMesh->SetMaterial(0, Material);
}

// Called every frame
void ADiamondSquare::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

