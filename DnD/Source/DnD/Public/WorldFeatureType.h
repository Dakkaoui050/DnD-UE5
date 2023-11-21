// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WorldFeatureType.generated.h"

UCLASS()
class DND_API AWorldFeatureType : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWorldFeatureType();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
UENUM(BlueprintType)
enum class WorldFeature : uint8 {
	Lake UMETA(DisplayName = "Lake"),
	Forest UMETA(DisplayName = "Forest")
	// ... other features
};
