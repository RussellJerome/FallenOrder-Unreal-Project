// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/WeakObjectPtr.h"
#include "RsAIBlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS()
class RSGAMETECHRT_API URsAIBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void SpawnAIFromDefinition(UObject* WorldContextObject, UClass* AICharacterDefinition, const FLatentActionInfo& OnAISpawnedDelegate, const FVector& Location, const FRotator& Rotation, AActor* SpawnParent, bool bNoCollisionFail, bool bProjectToNavmesh);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void DebugEnableAI(class UObject* WorldContextObject, bool bEnable);
};
