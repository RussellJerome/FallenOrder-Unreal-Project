// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SwProjectileSpreadingData.generated.h"

/**
 * 
 */
UCLASS()
class SWGAME_API USwProjectileSpreadingData : public UDataAsset
{
	GENERATED_BODY()
public:

	UPROPERTY(EditDefaultsOnly, Category = "SwProjectileSpreadingData")
	float TrackingPercentage;
	
	UPROPERTY(EditDefaultsOnly, Category = "SwProjectileSpreadingData")
	float MinDeviationX;
	
	UPROPERTY(EditDefaultsOnly, Category = "SwProjectileSpreadingData")
	float MaxDeviationX;
	
	UPROPERTY(EditDefaultsOnly, Category = "SwProjectileSpreadingData")
	float MinDeviationY;
	
	UPROPERTY(EditDefaultsOnly, Category = "SwProjectileSpreadingData")
	float MaxDeviationY;
	
	UPROPERTY(EditDefaultsOnly, Category = "SwProjectileSpreadingData")
	float OffsetX;
	
	UPROPERTY(EditDefaultsOnly, Category = "SwProjectileSpreadingData")
	float OffsetY;
};
