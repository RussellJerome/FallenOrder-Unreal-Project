// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RsHeroComponent.h"
#include "RsJumpSettings.h"
#include "RsJumpComponent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class RSGAMETECHRT_API URsJumpComponent : public URsHeroComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsJumpComponent")
	URsJumpSettings* JumpSettings;

	unsigned char UnknownData00[0x98];
	
};
