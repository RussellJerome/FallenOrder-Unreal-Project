// Fill out your copyright notice in the Description page of Project Settings.

#include "RsGameplayStatics.h"

void URsGameplayStatics::WaitForStreamingAreaToLoad(UObject* WorldContextObject, FLatentActionInfo& LatentInfo, FName& StreamingArea, bool bPauseGame, bool bWaitForNonVisibleLevels, bool bWaitForLODLevels, FName& OptionalLevelContainer) {};



void URsGameplayStatics::UnloadStreamingArea(UObject* WorldContextObject, FName& StreamingArea, FLatentActionInfo& LatentInfo) {};

//void URsGameplayStatics::UnloadStandaloneStreamingLevel(UObject* WorldContextObject, URsStreamingDefinition* StreamingLevelDefinition, FLatentActionInfo& LatentInfo) {};

void URsGameplayStatics::UnloadAllStreamingAreas(UObject* WorldContextObject, FLatentActionInfo& LatentInfo) {};

void URsGameplayStatics::UnloadAllStandaloneStreamingLevels(class UObject* WorldContextObject) {};

void URsGameplayStatics::TeleportLoad(UObject* WorldContextObject, FLatentActionInfo& LatentInfo, FName& PlayerStartName) {};

void URsGameplayStatics::SyncActorsFromDefinitionHelper(UObject* WorldContextObject, FTransform& Transform, URsSyncDefinition* SyncDefinition, AActor* Master, FVector2D& MasterBlendSpaceInput, TArray<AActor*> Actors, TArray< FVector2D> SlaveBlendSpaceinputs, UAnimationAsset* OverrideAnimation, URsMasterSyncInstance* MasterInstance, TArray<URsSlaveSyncInstance*> SlaveInstanceArray) {};



//Test
//void URsGameplayStatics::LoadStandaloneStreamingLevel(UObject* WorldContextObject, class URsStreamingDefinition* StreamingLevelDefinition, TEnumAsByte<ERsDesiredLevelLoadState> DesiredLoadState, FName& InitialLoadToken, FLatentActionInfo& LatentInfo) {};

void URsGameplayStatics::SetHealth(ARsCharacter* Character, float Health, bool SetIfDead) {};

void URsGameplayStatics::SetCanDie(ARsCharacter* Character, bool bCanDie) {};

ARsHero* URsGameplayStatics::RsGetPlayerHero(UObject* WorldContextObject) { return NULL; };