// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RsHero.h"
#include "Engine/LatentActionManager.h"
#include "RsSyncDefinition.h"
#include "RsMasterSyncInstance.h"
#include "RsSlaveSyncInstance.h"
#include "RsPhysicalAnimationProfile.h"
#include "Engine/Public/Respawn/Streaming/RsStreamingDefinition.h"
//#include "Engine/RsStreamingDefinition.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "LatentActions.h"
#include "DelayAction.h"
#include "RsGameplayStatics.generated.h"

/**
 * 
 */




UCLASS()
class RSGAMETECHRT_API URsGameplayStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics|Streaming", meta = (Latent, LatentInfo = "LatentInfo", WorldContext = "WorldContextObject"))
	static void WaitForStreamingAreaToLoad( UObject* WorldContextObject, FLatentActionInfo& LatentInfo, FName& StreamingArea, bool bPauseGame, bool bWaitForNonVisibleLevels, bool bWaitForLODLevels, FName& OptionalLevelContainer);


	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics|Streaming", meta = (Latent, LatentInfo = "LatentInfo", WorldContext = "WorldContextObject"))
	static void UnloadStreamingArea(UObject* WorldContextObject, FName& StreamingArea, FLatentActionInfo& LatentInfo);
	
	//UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics|Streaming", meta = (WorldContext = "WorldContextObject"))
	//static void UnloadStandaloneStreamingLevel(UObject* WorldContextObject, URsStreamingDefinition* StreamingLevelDefinition, FLatentActionInfo& LatentInfo);


	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (Latent, LatentInfo = "LatentInfo", WorldContext = "WorldContextObject"))
	void TeleportLoad(UObject* WorldContextObject, FLatentActionInfo& LatentInfo, FName& PlayerStartName);
	
	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (WorldContext = "WorldContextObject"))
	void SyncActorsFromDefinitionHelper(UObject* WorldContextObject, FTransform& Transform, URsSyncDefinition* SyncDefinition, AActor* Master, FVector2D& MasterBlendSpaceInput, TArray<AActor*> Actors, TArray< FVector2D> SlaveBlendSpaceinputs, UAnimationAsset* OverrideAnimation, URsMasterSyncInstance* MasterInstance, TArray<URsSlaveSyncInstance*> SlaveInstanceArray);
	

	
	//Test Functions
	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (WorldContext = "WorldContextObject"))
		static bool SetWorldRootLevel(UObject* WorldContextObject, URsStreamingDefinition* StreamingLevelDefinition) { return false; };

	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics|Streaming", meta = (Latent, LatentInfo = "LatentInfo", WorldContext = "WorldContextObject"))
		static void UnloadAllStreamingAreas(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {};

	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (WorldContext = "WorldContextObject"))
		static void UnloadAllStandaloneStreamingLevels(UObject* WorldContextObject) {};


	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics")
		static void SetHealth(ARsCharacter* Character, float Health, bool SetIfDead);

	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics")
		static void SetCanDie(ARsCharacter* Character, bool bCanDie);

	UFUNCTION(BlueprintPure, Category = "RsGameplayStatics", meta = (WorldContext = "WorldContextObject"))
		static ARsHero* RsGetPlayerHero(UObject* WorldContextObject);
	
	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (Latent, LatentInfo = "LatentInfo", WorldContext = "WorldContextObject"))
		static void LoadWorld(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FName& WorldName, const FName& PlayerStartName, bool bAllowLoadoutOverride) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (Latent, LatentInfo = "LatentInfo", WorldContext = "WorldContextObject"))
		static void LoadStreamingArea(UObject* WorldContextObject, const FName& StreamingArea, const FName& InitialLoadToken, bool bShouldBlockOnLoad, const FString& OptionalLoadOrder, const FLatentActionInfo& LatentInfo);

	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (Latent, LatentInfo = "LatentInfo", WorldContext = "WorldContextObject"))
		static void LoadStandaloneStreamingLevel(UObject* WorldContextObject, URsStreamingDefinition* StreamingLevelDefinition, TEnumAsByte<ERsDesiredLevelLoadState> DesiredLoadState, const FName& InitialLoadToken, FLatentActionInfo LatentInfo) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (Latent, LatentInfo = "LatentInfo", WorldContext = "WorldContextObject"))
		static void LoadPlayerStartListForWorld(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, const FName& WorldName);

	//Break for load world shit
	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (WorldContext = "WorldContextObject"))
		static void EnablePhysicalAnimationProfile(AActor* TargetActor, const FRsPhysicalAnimationRuntimeProfileParameters& OperationParameters, URsPhysicalAnimationProfile* InProfile);
	
	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (WorldContext = "WorldContextObject"))
		static void DisablePhysicalAnimationImmediately(AActor* TargetActor, const FRsPhysicalAnimationRuntimeProfileParameters& OperationParameters);
	
	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (WorldContext = "WorldContextObject"))
		static void DisablePhysicalAnimation(AActor* TargetActor, const FRsPhysicalAnimationRuntimeProfileParameters& OperationParameters);
	
	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (WorldContext = "WorldContextObject"))
		static bool DetermineTargetToRight(AActor* ActorSelf, AActor* ActorTarget);
	
	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (WorldContext = "WorldContextObject"))
		static bool DetermineTargetBehind(AActor* ActorSelf, AActor* ActorTarget);
	
	DECLARE_DYNAMIC_DELEGATE(FUntilNextFrame);
	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (WorldContext = "WorldContext"))
		static void DeferEventUntilNextFrame(UObject* WorldContext, const FUntilNextFrame& Event);
	
	//class URsSlaveSyncInstance* STATIC_CreateSlaveSyncInstance(class UObject* WorldContext, class AActor* Actor, class UAnimationAsset* Animation, const struct FName& BoneName, bool bEndSyncOnMontageBlendingOut);
	//class URsMasterSyncInstance* STATIC_CreateMasterSyncInstance(class UObject* WorldContext, class AActor* Actor, class UAnimationAsset* Animation, const struct FRsGeoLocator& ConstraintLocator, bool bEndSyncOnMontageBlendingOut);
	//class ARsConversation* STATIC_CreateConversation(class UObject* WorldContextObject, class UDialogue* ConversationData, TArray<class AActor*> Actors, int Priority);

	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (WorldContext = "WorldContextObject"))
		static void ConvertToRagdoll(AActor* Actor, bool DisableColliders);

	//UFUNCTION(BlueprintPure, Category = "RsGameplayStatics", meta = (WorldContext = "WorldContextObject"))
		//static void ClearLevelTransform(UObject* WorldContextObject, URsStreamingDefinition* StreamingLevelDefinition);
	
	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (WorldContext = "WorldContextObject"))
		static void BreakSync(UObject* WorldContext, int SyncId);
	
	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (WorldContext = "WorldContextObject"))
		static bool BreakFirstSync(UObject* WorldContext, AActor* Actor);
	
	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (WorldContext = "WorldContextObject"))
		static void BreakActorInSync(UObject* WorldContext, AActor* Actor, int SyncId);
	
	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (WorldContext = "WorldContextObject"))
		static void BlueprintError(UObject* WorldContextObject, const FString& Error);

	
};
