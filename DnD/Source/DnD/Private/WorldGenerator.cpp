// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldGenerator.h"
#include "ProceduralMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AWorldGenerator::AWorldGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
   
    WorldMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("ProceduralMesh"));
    RootComponent = WorldMesh;
}

void AWorldGenerator::GenerateWorld()
{
    if (WorldMesh)
    {
        // Define vertices for a square (size 100x100)
        TArray<FVector> Vertices;
        Vertices.Add(FVector(0, 0, 0)); // Bottom Left
        Vertices.Add(FVector(0, 100, 0)); // Bottom Right
        Vertices.Add(FVector(100, 0, 0)); // Top Left
        Vertices.Add(FVector(100, 100, 0)); // Top Right

        // Define triangles (the order of vertices matters for rendering)
        TArray<int32> Triangles;
        Triangles.Add(0);
        Triangles.Add(1);
        Triangles.Add(2);
        Triangles.Add(3);
        Triangles.Add(2);
        Triangles.Add(1);

        // Define UVs for texture mapping (optional)
        TArray<FVector2D> UVs;
        UVs.Add(FVector2D(0, 0));
        UVs.Add(FVector2D(0, 1));
        UVs.Add(FVector2D(1, 0));
        UVs.Add(FVector2D(1, 1));

        // Normals (pointing up)
        TArray<FVector> Normals;
        for (int32 i = 0; i < Vertices.Num(); i++)
        {
            Normals.Add(FVector(0, 0, 1));
        }

        // Tangents (optional)
        TArray<FProcMeshTangent> Tangents;
        for (int32 i = 0; i < Vertices.Num(); i++)
        {
            Tangents.Add(FProcMeshTangent(0, 1, 0));
        }

        // Create the mesh section
        WorldMesh->CreateMeshSection_LinearColor(0, Vertices, Triangles, Normals, UVs, TArray<FLinearColor>(), Tangents, true);

        // Update collision if necessary
        WorldMesh->ContainsPhysicsTriMeshData(true);
    }
}

// Called when the game starts or when spawned
void AWorldGenerator::BeginPlay()
{
	Super::BeginPlay();

    GenerateWorld();
}

// Called every frame
void AWorldGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

