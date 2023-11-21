// Fill out your copyright notice in the Description page of Project Settings.


#include "Worlds.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"
#include "Math/UnrealMathUtility.h"
#include "Landscape.h"

// Sets default values
AWorlds::AWorlds()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWorlds::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWorlds::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AWorlds::OnConstruction(const FTransform& Transform)
{

}
void AWorlds::GenerateTerrain()
{
    // Terrain generation logic (as per your existing implementation)
    // ...
}

void AWorlds::AddFeature(WorldFeature feature)
{
    // Add features to your world
    // ...
}

void AWorlds::AddLake(const FVector& Location, float Radius, float Depth)
{
    // Logic for adding a lake
    // ...
}

void AWorlds::AddForest(const FVector& Center, float Radius)
{
    // Logic for adding a forest
    // ...
}

void AWorlds::SetSize(int Size)
{
    // Logic to set the size of your world
    // ...
}

ALandscape* AWorlds::FindLandscapeActor()
{
    if (GetWorld() == nullptr)
    {
        return nullptr; // World context is invalid, cannot proceed
    }

    for (TActorIterator<ALandscape> It(GetWorld()); It; ++It)
    {
        return *It; // Return the first found landscape
    }
    return nullptr; // No landscape found
}

