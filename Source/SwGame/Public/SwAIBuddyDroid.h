// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SwAICharacter.h"
#include "SwAIBuddyDroid.generated.h"

/**
 * 
 */
UCLASS()
class SWGAME_API ASwAIBuddyDroid : public ASwAICharacter
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwAIBuddyDroid")
	float AttachLerpTotalTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwAIBuddyDroid")
	float DetachLerpTotalTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwAIBuddyDroid")
	FVector DetachTargetLocationOffset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwAIBuddyDroid")
	float LowProfileSocketWeight;
	
	//URsPhysicalAnimationProfile* PhysicalAnimationProfileIdleDefault;
};
