// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RsAICharacterDefinition.h"
#include "RsAIBlueprintLibrary.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FScriptDelegateTest
{
	GENERATED_BODY()
public:
	FWeakObjectPtr Object;
	FName FunctionName;
	//char UnknownData[0x14];
};

UCLASS()
class RSGAMETECHRT_API URsAIBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void SpawnAIFromDefinition(UObject* WorldContextObject, URsAICharacterDefinition* AICharacterDefinition, const FScriptDelegateTest& OnAISpawnedDelegate, const FVector& Location, const FRotator& Rotation, AActor* SpawnParent, bool bNoCollisionFail, bool bProjectToNavmesh);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void DebugEnableAI(class UObject* WorldContextObject, bool bEnable);
};
