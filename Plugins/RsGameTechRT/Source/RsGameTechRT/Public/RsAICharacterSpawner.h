// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RsAISpawner.h"
#include "RsAICharacter.h"
#include "GameplayTagContainer.h"
#include "RsAICharacterSpawner.generated.h"

/**
 * 
 */
UCLASS()
class RSGAMETECHRT_API ARsAICharacterSpawner : public ARsAISpawner
{
	GENERATED_BODY()
public:
	
	//struct FRsAISpawnerRef                             SpawnerRef;                                               // 0x0398(0x0010)
	//struct FRsAISimpleSpawnerInstance                  SimpleSpawnerInstance;                                    // 0x03A8(0x01A0) (Edit, DisableEditOnTemplate, SaveGame)

	//void SetSpawnerWanderSettings(const struct FRsAISpawnerWanderSettings& SpawnerWanderSettings);
	//void SetSpawnerScriptingSettings(const struct FRsAIScriptingOptions& SpawnerScriptingSettings);
	//void SetSpawnerPOISettings(const struct FRsAISpawnerPOISettings& SpawnerPOISettings);
	//void SetSpawnerPatrolSettings(const struct FRsAISpawnerPatrolSettings& SpawnerPatrolSettings);
	//void SetSpawnerIntroSettings(const struct FRsAISpawnerIntroSettings& SpawnerIntroSettings);
	
	//UFUNCTION(BlueprintCallable, Category = "RsAICharacterSpawner")
	//	void SetSpawnerAdvancedSettings(bool bAutoSpawn, const FName& GroupName, const FName& OverrideSyncSlotName, int SpawnMax, float SpawnDelay, bool bEnabled, bool bAllowSpawnOffNavMesh) {};
	
	//void SetLeashSettings(const struct FRsAISpawnerLeashSettings& SpawnerLeashSettings);
	
	//UFUNCTION(BlueprintCallable, Category = "RsAICharacterSpawner")
		//void GetSpawnerAdvancedSettings(bool& bAutoSpawn, FName& GroupName, FName& OverrideSyncSlotName, int& SpawnMax, float& SpawnDelay, bool& bEnabled, bool& bAllowSpawnOffNavMesh, FGameplayTag& SpeakerTagOverride) {};
	
	UFUNCTION(Blueprintpure, Category = "RsAICharacterSpawner")
		TArray<ARsAICharacter*> GetSpawnedAI() { return TArray<ARsAICharacter*>(); };
	
	UFUNCTION(Blueprintpure, Category = "RsAICharacterSpawner")
		ARsAICharacter* GetFirstCurrentlySpawnedAI() { return nullptr; };
};
