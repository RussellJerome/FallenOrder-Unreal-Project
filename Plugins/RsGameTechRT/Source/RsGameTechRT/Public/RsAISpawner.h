// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RsAISpawner.generated.h"

UCLASS()
class RSGAMETECHRT_API ARsAISpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARsAISpawner();
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawn, UObject*, SpawnedAI);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDespawnSpawn, UObject*, DeSpawnedAI);
	
	UPROPERTY(BlueprintAssignable, Category = "AISpawn")
		FSpawn OnAISpawnedEvent;

	UPROPERTY(BlueprintAssignable, Category = "AISpawn")
		FDespawnSpawn OnAIDespawnedEvent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
