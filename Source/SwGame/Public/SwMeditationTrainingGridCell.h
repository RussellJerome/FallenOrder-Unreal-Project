// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "StructsAndEnums.h"
#include "SwMeditationTrainingGridCell.generated.h"

/**
 * 
 */
UCLASS()
class SWGAME_API ASwMeditationTrainingGridCell : public AStaticMeshActor
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwMeditationTrainingGridCell")
		void OnTriedToSpawnWithNoPoints();
	void OnTriedToSpawnWithNoPoints_Implementation() {};
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwMeditationTrainingGridCell")
		void OnStatusChanged(ESwMeditationTrainingCellStatusFlags Status, bool bNewValue);
	void OnStatusChanged_Implementation(ESwMeditationTrainingCellStatusFlags Status, bool bNewValue) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingGridCell")
		bool HasStatus(ESwMeditationTrainingCellStatusFlags Status) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingGridCell")
		bool HasAnyStatus(ESwMeditationTrainingCellStatusFlags Flags) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingGridCell")
		bool HasAllStatus(ESwMeditationTrainingCellStatusFlags Flags) { return false; };
};
