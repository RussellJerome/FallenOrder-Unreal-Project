// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RsCharacter.h"
#include "RsAICharacter.generated.h"

/**
 * 
 */
UCLASS()
class RSGAMETECHRT_API ARsAICharacter : public ARsCharacter
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsAICharacter")
	USceneComponent* AlwaysUpdateTransformComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsAICharacter")
	bool bDontSetDeathCollisionTweak;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsAICharacter")
	bool bIsDismembered;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsAICharacter")
	int NumberOfAiSpawnedOnDeath;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsAICharacter")
	bool bEnableRagdoll;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsAICharacter")
	bool bKillOnEnterWater;
};
