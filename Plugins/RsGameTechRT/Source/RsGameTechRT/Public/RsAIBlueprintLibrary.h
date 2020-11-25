// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RsAICharacterDefinition.h"
#include "RsAIBlueprintLibrary.generated.h"

/**
 * 
 */

UCLASS()
class RSGAMETECHRT_API URsAIBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	DECLARE_DYNAMIC_DELEGATE(FSpawnTest);
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static void SpawnAIFromDefinition(UObject* WorldContextObject, URsAICharacterDefinition* AICharacterDefinition, const FSpawnTest& OnAISpawnedDelegate, const FVector& Location, const FRotator& Rotation, AActor* SpawnParent, bool bNoCollisionFail, bool bProjectToNavmesh);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void DebugEnableAI(class UObject* WorldContextObject, bool bEnable);
};
