// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SwMeditationTrainingSpectator.generated.h"

/**
 * 
 */
UCLASS()
class SWGAME_API ASwMeditationTrainingSpectator : public APlayerController
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingSpectator")
	UClass*                                      SpectatorPawnClass;                                       // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingSpectator")
	float                                              SpectatorFOV;                                             // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};
