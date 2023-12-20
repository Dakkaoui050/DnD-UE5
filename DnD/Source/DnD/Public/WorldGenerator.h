// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/EditableText.h"
#include "ProceduralMeshComponent.h"
#include "WorldGenerator.generated.h"

UCLASS()
class DND_API AWorldGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWorldGenerator();

	// UProperty for storing the player's input
	

	// Function to generate the world based on the player's input
	void GenerateWorld();
	void GenerateHeightmapTerrain();
	void ParseInputAndGenerateTerrain();
	
	
private:
	

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> InputWidgetClass;

	UProceduralMeshComponent* WorldMesh;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Generation")
	FString Input;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World")
	float HeightScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World")
	float TerrainScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World")
	float NoiseScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World")
	float HeightFactor;

};
