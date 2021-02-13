// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RsAISpawningSystem.generated.h"

/**
 * 
 */
UCLASS()
class RSGAMETECHRT_API URsAISpawningSystem : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	//TArray<class ARsAISpawner*>                        SpawnersNew;                                              // 0x0040(0x0010) (ZeroConstructor, Transient)
	//ARsAIDefaultSpawner*                         DefaultSpawner;                                           // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	/*
	void STATIC_UnbindEventFromAISpawned(class UObject* WorldContext, const struct FRsAISpawnerRef& SpawnerRef, const struct FScriptDelegate& Event);
	void STATIC_UnbindAllEventsFromAISpawned(class UObject* WorldContext, const struct FRsAISpawnerRef& SpawnerRef);
	void STATIC_UnbindAllEventsFromAIDespawned(class UObject* WorldContext, const struct FRsAISpawnerRef& SpawnerRef);
	void STATIC_UnbindAllAISpawnedEventsMulti(class UObject* WorldContext, TArray<class ARsAISpawner*> Spawners);
	void STATIC_UnbindAllAIDespawnedEventsMulti(class UObject* WorldContext, TArray<class ARsAISpawner*> Spawners);
	void STATIC_UnbindAISpawnedEventMulti(class UObject* WorldContext, TArray<class ARsAISpawner*> Spawners, const struct FScriptDelegate& Event);
	void STATIC_UnbindAIDespawnedEventMulti(class UObject* WorldContext, TArray<class ARsAISpawner*> Spawners, const struct FScriptDelegate& Event);
	void STATIC_SpawnAIForArray(class UObject* WorldContext, TArray<struct FRsAISpawnerRef> SpawnerRefs, float SpawnDelay);
	void STATIC_SpawnAI_Internal(class UObject* WorldContext, const struct FLatentActionInfo& LatentInfo, const struct FScriptDelegate& OnAISpawned, const struct FRsAISpawnerRef& SpawnerRef, float SpawnDelay);
	void OnSpawnedAIDied(class AActor* DeadActor);
	void OnSpawnedAIDestroyed(class AActor* DestroyedActor);
	void STATIC_EnableSpawnerMulti(class UObject* WorldContext, TArray<class ARsAISpawner*> Spawners, bool bEnabled);
	void STATIC_DespawnAllAI(class UObject* WorldContext, TEnumAsByte<ERsAIDespawnReason> DespawnReason);
	void STATIC_DespawnAIMulti(class UObject* WorldContext, TArray<class ARsAISpawner*> Spawners, TEnumAsByte<ERsAIDespawnReason> DespawnReason);
	void STATIC_DebugSpawnAI(class UObject* WorldContext, class URsAICharacterDefinition* AICharacterDefinition, const struct FScriptDelegate& OnAISpawnedDelegate);
	void STATIC_BindEventToAISpawnedForArray(class UObject* WorldContext, TArray<struct FRsAISpawnerRef> SpawnerRefs, const struct FScriptDelegate& Event);
	void STATIC_BindEventToAIDespawnedForArray(class UObject* WorldContext, TArray<struct FRsAISpawnerRef> SpawnerRefs, const struct FScriptDelegate& Event);
	void STATIC_BindEventToAIDespawned(class UObject* WorldContext, const struct FRsAISpawnerRef& SpawnerRef, const struct FScriptDelegate& Event);
	void STATIC_BindAISpawnedEventMulti(class UObject* WorldContext, TArray<class ARsAISpawner*> Spawners, const struct FScriptDelegate& Event);
	void STATIC_BindAIDespawnedEventMulti(class UObject* WorldContext, TArray<class ARsAISpawner*> Spawners, const struct FScriptDelegate& Event);
	*/
	
	//DECLARE_DYNAMIC_DELEGATE_OneParam(AISpawnedEvent, UObject*, SpawnedAI);
	//UFUNCTION(BlueprintCallable, Category = "RsAISpawningSystem", meta = (WorldContext = "WorldContext"))
	//void STATIC_BindEventToAISpawned(UObject* WorldContext, const FRsAISpawnerRef& SpawnerRef, const AISpawnedEvent& Event);
};
