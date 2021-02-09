// Fill out your copyright notice in the Description page of Project Settings.

#include "RsGameplayStatics.h"

void URsGameplayStatics::WaitForStreamingAreaToLoad(UObject* WorldContextObject, FLatentActionInfo& LatentInfo, FName& StreamingArea, bool bPauseGame, bool bWaitForNonVisibleLevels, bool bWaitForLODLevels, FName& OptionalLevelContainer) {};



void URsGameplayStatics::UnloadStreamingArea(UObject* WorldContextObject, FName& StreamingArea, FLatentActionInfo& LatentInfo) {};

//void URsGameplayStatics::UnloadStandaloneStreamingLevel(UObject* WorldContextObject, URsStreamingDefinition* StreamingLevelDefinition, FLatentActionInfo& LatentInfo) {};

void URsGameplayStatics::TeleportLoad(UObject* WorldContextObject, FLatentActionInfo& LatentInfo, FName& PlayerStartName) {};

void URsGameplayStatics::SyncActorsFromDefinitionHelper(UObject* WorldContextObject, FTransform& Transform, URsSyncDefinition* SyncDefinition, AActor* Master, FVector2D& MasterBlendSpaceInput, TArray<AActor*> Actors, TArray< FVector2D> SlaveBlendSpaceinputs, UAnimationAsset* OverrideAnimation, URsMasterSyncInstance* MasterInstance, TArray<URsSlaveSyncInstance*> SlaveInstanceArray) {};



//Test
//void URsGameplayStatics::LoadStandaloneStreamingLevel(UObject* WorldContextObject, class URsStreamingDefinition* StreamingLevelDefinition, TEnumAsByte<ERsDesiredLevelLoadState> DesiredLoadState, FName& InitialLoadToken, FLatentActionInfo& LatentInfo) {};

void URsGameplayStatics::SetHealth(ARsCharacter* Character, float Health, bool SetIfDead) {};

void URsGameplayStatics::SetCanDie(ARsCharacter* Character, bool bCanDie) {};

ARsHero* URsGameplayStatics::RsGetPlayerHero(UObject* WorldContextObject) { return NULL; };

void URsGameplayStatics::LoadStreamingArea(UObject* WorldContextObject, const FName& StreamingArea, const FName& InitialLoadToken, bool bShouldBlockOnLoad, const FString& OptionalLoadOrder, const FLatentActionInfo& LatentInfo) {};

//void STATIC_LoadStandaloneStreamingLevel(class UObject* WorldContextObject, class URsStreamingDefinition* StreamingLevelDefinition, TEnumAsByte<ERsDesiredLevelLoadState> DesiredLoadState, const struct FName& InitialLoadToken, const struct FLatentActionInfo& LatentInfo);

void URsGameplayStatics::LoadPlayerStartListForWorld(UObject* WorldContextObject, const FLatentActionInfo& LatentInfo, const FName& WorldName) {};

//Break
void URsGameplayStatics::EnablePhysicalAnimationProfile(AActor* TargetActor, const FRsPhysicalAnimationRuntimeProfileParameters& OperationParameters, URsPhysicalAnimationProfile* InProfile) {};

void URsGameplayStatics::DisablePhysicalAnimationImmediately(AActor* TargetActor, const FRsPhysicalAnimationRuntimeProfileParameters& OperationParameters) {};

void URsGameplayStatics::DisablePhysicalAnimation(AActor* TargetActor, const FRsPhysicalAnimationRuntimeProfileParameters& OperationParameters) {};

bool URsGameplayStatics::DetermineTargetToRight(AActor* ActorSelf, AActor* ActorTarget) { return false; };

bool URsGameplayStatics::DetermineTargetBehind(AActor* ActorSelf, AActor* ActorTarget) { return false; };

void URsGameplayStatics::DeferEventUntilNextFrame(UObject* WorldContext, const FUntilNextFrame& Event) {};

//class URsSlaveSyncInstance* STATIC_CreateSlaveSyncInstance(class UObject* WorldContext, class AActor* Actor, class UAnimationAsset* Animation, const struct FName& BoneName, bool bEndSyncOnMontageBlendingOut);
	//class URsMasterSyncInstance* STATIC_CreateMasterSyncInstance(class UObject* WorldContext, class AActor* Actor, class UAnimationAsset* Animation, const struct FRsGeoLocator& ConstraintLocator, bool bEndSyncOnMontageBlendingOut);
	//class ARsConversation* STATIC_CreateConversation(class UObject* WorldContextObject, class UDialogue* ConversationData, TArray<class AActor*> Actors, int Priority);

void URsGameplayStatics::ConvertToRagdoll(AActor* Actor, bool DisableColliders) {};

//void URsGameplayStatics::ClearLevelTransform(UObject* WorldContextObject, URsStreamingDefinition* StreamingLevelDefinition) {};

void URsGameplayStatics::BreakSync(UObject* WorldContext, int SyncId) {};

bool URsGameplayStatics::BreakFirstSync(UObject* WorldContext, AActor* Actor) { return false;  };

void URsGameplayStatics::BreakActorInSync(UObject* WorldContext, AActor* Actor, int SyncId) {};

void URsGameplayStatics::BlueprintError(UObject* WorldContextObject, const FString& Error) {};