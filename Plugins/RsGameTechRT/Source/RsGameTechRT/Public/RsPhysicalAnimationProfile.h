// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "StructsAndEnums_RsGameTechRT.h"
#include "RsPhysicalAnimationProfile.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class RSGAMETECHRT_API URsPhysicalAnimationProfile : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, Category = "RsPhysicalAnimationProfile")
	FRsPhysicalAnimationParameters PhysicalAnimationParameters;
};
