// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DiamondSquare.generated.h"

class UProceduralMeshComponent;
class UMaterialInterface;

UCLASS()
class DND_API ADiamondSquare : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADiamondSquare();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Meta = (MakeEditWidget = true))
	TArray<FVector> Vertices;

	UPROPERTY(EditAnywhere)
	TArray<int32> Traingles;

	UPROPERTY(EditAnywhere)
	TArray<FVector2D> UV0;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* Material;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UProceduralMeshComponent* ProceduralMesh;
};
