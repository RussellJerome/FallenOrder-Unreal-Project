// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RsHero.h"
#include "Engine/LatentActionManager.h"
#include "RsSyncDefinition.h"
#include "RsMasterSyncInstance.h"
#include "RsSlaveSyncInstance.h"
//#include "Respawn/RsStreamingDefinition.h"
#include "RsGameplayStatics.generated.h"

/**
 * 
 */
UCLASS()
class RSGAMETECHRT_API URsGameplayStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics|Streaming", meta = (WorldContext = "WorldContextObject"))
	static void WaitForStreamingAreaToLoad( UObject* WorldContextObject, FLatentActionInfo& LatentInfo, FName& StreamingArea, bool bPauseGame, bool bWaitForNonVisibleLevels, bool bWaitForLODLevels, FName& OptionalLevelContainer);

	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics|Streaming", meta = (WorldContext = "WorldContextObject"))
	static void UnloadStreamingArea(UObject* WorldContextObject, FName& StreamingArea, FLatentActionInfo& LatentInfo);
	
	//UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics|Streaming", meta = (WorldContext = "WorldContextObject"))
	//static void UnloadStandaloneStreamingLevel(UObject* WorldContextObject, URsStreamingDefinition* StreamingLevelDefinition, FLatentActionInfo& LatentInfo);
	
	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics|Streaming", meta = (WorldContext = "WorldContextObject"))
	static void UnloadAllStreamingAreas(UObject* WorldContextObject, FLatentActionInfo& LatentInfo);
	
	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics|Streaming", meta = (WorldContext = "WorldContextObject"))
	static void UnloadAllStandaloneStreamingLevels(UObject* WorldContextObject);


	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (WorldContext = "WorldContextObject"))
	void TeleportLoad(UObject* WorldContextObject, FLatentActionInfo& LatentInfo, FName& PlayerStartName);
	
	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (WorldContext = "WorldContextObject"))
	void SyncActorsFromDefinitionHelper(UObject* WorldContextObject, FTransform& Transform, URsSyncDefinition* SyncDefinition, AActor* Master, FVector2D& MasterBlendSpaceInput, TArray<AActor*> Actors, TArray< FVector2D> SlaveBlendSpaceinputs, UAnimationAsset* OverrideAnimation, URsMasterSyncInstance* MasterInstance, TArray<URsSlaveSyncInstance*> SlaveInstanceArray);
	

	//Test
	//UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (WorldContext = "WorldContextObject"))
//	static void LoadStandaloneStreamingLevel(UObject* WorldContextObject, class URsStreamingDefinition* StreamingLevelDefinition, TEnumAsByte<ERsDesiredLevelLoadState> DesiredLoadState, FName& InitialLoadToken, FLatentActionInfo& LatentInfo);

	//UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (WorldContext = "WorldContextObject"))
	//int SyncActorsFromDefinitionBasic(UObject* WorldContextObject, URsSyncDefinition* SyncDefinition, AActor* Master, AActor* Slave);
	/*
	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics", meta = (WorldContext = "WorldContextObject"))
	int SyncActorsFromDefinitionAtLocation(UObject* WorldContextObject, URsSyncDefinition* SyncDefinition, FTransform& Transform, TArray<AActor*> Actors, UAnimationAsset* OverrideAnimation, TArray<FVector2D> SlaveBlendSpaceinputs, URsMasterSyncInstance** MasterInstance, TArray<URsSlaveSyncInstance*>* SlaveInstanceArray);
	
	int SyncActorsFromDefinition(class UObject* WorldContext, class URsSyncDefinition* SyncDefinition, class AActor* Master, TArray<class AActor*> Actors, class UAnimationAsset* OverrideAnimation, const struct FVector2D& MasterBlendSpaceInput, TArray<struct FVector2D> SlaveBlendSpaceinputs, class URsMasterSyncInstance** MasterInstance, TArray<class URsSlaveSyncInstance*>* SlaveInstanceArray);
	int SyncActors(class UObject* WorldContext, class URsMasterSyncInstance* MasterInstance, TArray<class URsSlaveSyncInstance*> SlaveInstanceArray, TEnumAsByte<ERsBreakSyncType> BreakOnMontageEnd, TEnumAsByte<ERsBreakSyncType> BreakOnTakeDamage);
	void StopMontagesAndEndNotifyStates(class UAnimInstance* AnimInstance, float BlendOutTime);
	void StopMontageAndEndNotifyStates(class UAnimInstance* AnimInstance, class UAnimMontage* Montage, float BlendOutTime);
	void StopDamageOverTime(class AActor* DamagedActor);
	void StartDamageOverTime(class AActor* DamagedActor, float DamagePerTick, float DamageDuration, float DamageTickRate, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass);
	*/


	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics")
		static void SetHealth(ARsCharacter* Character, float Health, bool SetIfDead);

	UFUNCTION(BlueprintCallable, Category = "RsGameplayStatics")
		static void SetCanDie(ARsCharacter* Character, bool bCanDie);

	UFUNCTION(BlueprintPure, Category = "RsGameplayStatics", meta = (WorldContext = "WorldContextObject"))
		static ARsHero* RsGetPlayerHero(UObject* WorldContextObject);

	
};
