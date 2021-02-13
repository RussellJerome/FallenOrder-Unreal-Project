// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/ActorComponent.h"
#include "Engine/Public/Respawn/Streaming/RsStreamingDefinition.h"
#include "Engine/Public/Respawn/Classes/RsStreamingAreaPlayerStart.h"
#include "StructsAndEnums_RsGameTechRT.h"
#include "RsSaveGameBlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS()
class RSGAMETECHRT_API URsSaveGameBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static void SetSaveSlot(UObject* WorldContext, /*Int I think*/ int SaveSlot) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static void SetSaveGameMetaData(UObject* WorldContext, const FRsSaveGameMetaData& InMetaData) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static void SavePlayerStart(UObject* WorldContext, const FTransform& PlayerStartTransform) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static void SaveContainingLevelImmediate(AActor* Actor) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static void SaveContainingLevel(AActor* Actor, bool bIsPendingCheckpoint) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static void SaveComponentImmediate(UActorComponent* Component) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static void SaveCheckpointWithPlayerStartInfo(UObject* WorldContext, URsStreamingDefinition* RootStreamingLevelDefinition, const FName& PlayerStartName) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static void SaveCheckpointWithPlayerStart(UObject* WorldContext, ARsStreamingAreaPlayerStart* PlayerStart) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static void SaveCheckpoint(UObject* WorldContext, const FTransform& PlayerStartTransform) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static void SaveActorPropertyImmediate(AActor* Actor, const FName& PropertyName) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static void SaveActorImmediate(AActor* Actor) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static void SaveActor(AActor* Actor, bool bIsPendingCheckpoint) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static void ResetPendingSaves(UObject* WorldContext) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static void ReloadLastCheckpoint(UObject* WorldContext) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static void RefreshCachedSaveFileInfo(UObject* WorldContext) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static void RefreshCachedNewGamePlusUnlocks(UObject* WorldContext) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static bool LoadSaveGameForSlot(UObject* WorldContext, int SaveSlotIndex) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static bool LoadSaveGameBackupForSlot(UObject* WorldContext, int SaveSlotIndex) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static bool LoadSaveGame(UObject* WorldContext, const FString& SaveName) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static void LoadContainingLevel(AActor* Actor) {};

	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static bool LoadActor(AActor* Actor) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static bool IsSavingToDisk(UObject* WorldContext) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static bool IsRefreshingCachedNewGamePlusUnlocks(UObject* WorldContext) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static bool IsLoadingSaveFileInfo(UObject* WorldContext) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static bool IsCurrentSaveNewGamePlus(UObject* WorldContext) { return false; };
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static bool IsClearingAllSaves(UObject* WorldContext) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static int GetSaveSlotCount(UObject* WorldContext) { return 0; };

	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		/*Int I think*/ static int GetSaveSlot(UObject* WorldContext) { return 0; };
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static URsStreamingDefinition* GetSaveGameStreamingInfo(UObject* WorldContext, /*int i tink*/ int SaveSlot, FName& OutStreamingPlayerStartName) { return nullptr; };
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		/*should be int*/ static int GetMostRecentSaveSlot(UObject* WorldContext) { return 0; };
	
	//DoesntWork
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static void GetExistingSaveGames(UObject* WorldContext, bool bAllowNonSlotSaves, bool bSortByTime, TArray<FRsSaveGameInfo>& OutSaveGames) {};

	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static bool GetCurrentSaveGameMetaData(UObject* WorldContext, FRsSaveGameMetaData& OutSaveGameMetaData) { return false; };

	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static bool DoesSaveGameExistForSlot(UObject* WorldContext, int SaveSlotIndex, bool bIncludeBackup) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static bool DoesSaveGameExist(UObject* WorldContext) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static bool DoesSaveGameBackupExistForSlot(UObject* WorldContext, int SaveSlotIndex) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static void ConfirmPendingSaves(UObject* WorldContext) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsSaveGameBlueprintLibrary", meta = (WorldContext = "WorldContext"))
		static void ClearAllSaves(UObject* WorldContext) {};
	
};
