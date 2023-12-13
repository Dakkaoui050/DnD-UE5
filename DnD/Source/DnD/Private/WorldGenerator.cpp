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
        float ScaleFactor = 10.0f;
        // Define vertices for a square (size 100x100)
        TArray<FVector> Vertices;
        Vertices.Add(FVector(0, 0, 0)); // Bottom Left
        Vertices.Add(FVector(0, 1000000 * ScaleFactor, 0)); // Bottom Right
        Vertices.Add(FVector(1000000 * ScaleFactor, 0, 0)); // Top Left
        Vertices.Add(FVector(1000000 * ScaleFactor, 1000000 * ScaleFactor, 0)); // Top Right

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
void AWorldGenerator::GenerateHeightmapTerrain()
{

    int32 Size = 1000; // Define the size of your heightmap
    TArray<float> Heightmap;
    Heightmap.SetNum(Size * Size);

    float TerrainScale = 1000.0f; // Scale for X and Y coordinates
    float HeightScale = 50.0f;  // Scale for Z coordinate (height)
    float NoiseScale = 0.1f;    // Adjust this for more or less frequency
    float HeightFactor = 10.0f; // Adjust this for more or less height

    for (int32 i = 0; i < Heightmap.Num(); ++i)
    {
        if (i % Size == 0)
        {
            UE_LOG(LogTemp, Warning, TEXT("New Row"));
        }
        UE_LOG(LogTemp, Warning, TEXT("Heightmap Value: %f"), Heightmap[i]);
    }
    // Generate heightmap values using noise
    for (int32 y = 0; y < Size; ++y)
    {
        for (int32 x = 0; x < Size; ++x)
        {
            float NoiseValue = FMath::PerlinNoise2D(FVector2D(x * NoiseScale, y * NoiseScale));
            Heightmap[y * Size + x] = NoiseValue * HeightFactor;
        }
    }

    TArray<FVector> Vertices;
    TArray<int32> Triangles;
    TArray<FVector> Normals;
    TArray<FVector2D> UVs;

    // Populate vertices based on heightmap
    for (int32 y = 0; y < Size; ++y)
    {
        for (int32 x = 0; x < Size; ++x)
        {
            float Height = Heightmap[y * Size + x] * HeightScale;
            Vertices.Add(FVector(x * TerrainScale, y * TerrainScale, Height));
        }
    }

    // Generate triangles
    for (int32 y = 0; y < Size - 1; ++y)
    {
        for (int32 x = 0; x < Size - 1; ++x)
        {
            int32 topLeft = y * Size + x;
            int32 topRight = topLeft + 1;
            int32 bottomLeft = topLeft + Size;
            int32 bottomRight = bottomLeft + 1;

            // Triangle 1
            Triangles.Add(topLeft);
            Triangles.Add(bottomLeft);
            Triangles.Add(topRight);

            // Triangle 2
            Triangles.Add(topRight);
            Triangles.Add(bottomLeft);
            Triangles.Add(bottomRight);
        }
    }

    // Generate UVs
    for (int32 y = 0; y < Size; ++y)
    {
        for (int32 x = 0; x < Size; ++x)
        {
            UVs.Add(FVector2D(static_cast<float>(x) / (Size - 1), static_cast<float>(y) / (Size - 1)));
        }
    }

    Normals.Init(FVector(0, 0, 1), Vertices.Num());

    for (int32 i = 0; i < Triangles.Num(); i += 3)
    {
        FVector Vertex1 = Vertices[Triangles[i]];
        FVector Vertex2 = Vertices[Triangles[i + 1]];
        FVector Vertex3 = Vertices[Triangles[i + 2]];

        FVector Edge1 = Vertex2 - Vertex1;
        FVector Edge2 = Vertex3 - Vertex1;
        FVector TriangleNormal = FVector::CrossProduct(Edge1, Edge2).GetSafeNormal();

        Normals[Triangles[i]] += TriangleNormal;
        Normals[Triangles[i + 1]] += TriangleNormal;
        Normals[Triangles[i + 2]] += TriangleNormal;
    }

    for (FVector& Normal : Normals)
    {
        Normal.Normalize();
    }
    

    WorldMesh->CreateMeshSection_LinearColor(0, Vertices, Triangles, Normals, UVs, TArray<FLinearColor>(), TArray<FProcMeshTangent>(), true);
}

// Called when the game starts or when spawned
void AWorldGenerator::BeginPlay()
{
	Super::BeginPlay();

    GenerateWorld();
    GenerateHeightmapTerrain();
}

// Called every frame
void AWorldGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

