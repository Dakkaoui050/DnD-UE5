// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Landscape.h"
#include "WorldFeatureType.h"
#include "Worlds.generated.h"

class ALandscape;
UCLASS()
class DND_API AWorlds : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWorlds();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:

    virtual void OnConstruction(const FTransform& Transform) override;

    // Terrain generation
    void GenerateTerrain();

    // Features
    void AddFeature(WorldFeature feature);
    void AddLake(const FVector& Location, float Radius, float Depth);
    void AddForest(const FVector& Center, float Radius);

    // World Size
    void SetSize(int Size);

private:
    ALandscape* FindLandscapeActor();

    // The height map of the world for terrain generation
    TArray<float> HeightMap;

    // The size of the terrain
    int32 TerrainWidth = 100;
    int32 TerrainHeight = 100;
    float MaxTerrainHeight = 1000.0f; // Adjust this as needed

    // Example world features
    TSubclassOf<AActor> LakeActorClass;
    TSubclassOf<AActor> TreeActorClass;
};


