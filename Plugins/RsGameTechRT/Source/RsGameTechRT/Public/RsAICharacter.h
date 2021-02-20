// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RsCharacter.h"
#include "StructsAndEnums_RsTechRT.h"
#include "GameplayTagContainer.h"
#include "RsAICharacter.generated.h"

/**
 * 
 */
UCLASS()
class RSGAMETECHRT_API ARsAICharacter : public ARsCharacter
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsAICharacter")
	USceneComponent* AlwaysUpdateTransformComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsAICharacter")
	bool bDontSetDeathCollisionTweak;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsAICharacter")
	bool bIsDismembered;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsAICharacter")
	int NumberOfAiSpawnedOnDeath;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsAICharacter")
	bool bEnableRagdoll;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsAICharacter")
	bool bKillOnEnterWater;

	UFUNCTION(BlueprintCallable, Category = "RsAICharacter")
		void SetWeaponUnsheathed(bool bIsUnsheathed) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsAICharacter")
		void SetClampToNavMesh_BluePrint(bool Clamp) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsAICharacter")
		void SetCanBeKilledByWater(bool bEnable) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsAICharacter")
		void SetAIToBusy(bool bIsBusy) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsAICharacter")
		void PlaceOnNavMeshOnHitGroundEvent_Internal(ERsTopologyMode previousMode, ERsTopologyMode newMode, float Proximity) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsAICharacter")
		bool PlaceOnNavMesh_Blueprint(const struct FVector& extentMargin) { return false; };
	
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "RsAICharacter")
		void OnTopologyChangedPrivate(ERsTopologyMode previousMode, ERsTopologyMode newMode, float Proximity);
	void OnTopologyChangedPrivate_Implementation(ERsTopologyMode previousMode, ERsTopologyMode newMode, float Proximity) {};
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "RsAICharacter")
		void OnRequestAmbientToAlertDialogue(AActor* Source, ERsAIAwarenessKind AwarenessKind, ERsAIAwarenessReactionRole ReactionRole);
	void OnRequestAmbientToAlertDialogue_Implementation(AActor* Source, ERsAIAwarenessKind AwarenessKind, ERsAIAwarenessReactionRole ReactionRole) {};
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "RsAICharacter")
	void OnRequestAlertToAmbientDialogue();
	void OnRequestAlertToAmbientDialogue_Implementation() {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "RsAICharacter")
	void OnPostDeath();
	void OnPostDeath_Implementation() {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "RsAICharacter")
	void OnNotifyAISpawned(class ARsAISpawner* Spawner);
	void OnNotifyAISpawned_Implementation(class ARsAISpawner* Spawner) {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "RsAICharacter")
	void OnBeforeKillingAIWhenEnteredWater();
	void OnBeforeKillingAIWhenEnteredWater_Implementation() {};
	
	UFUNCTION(BlueprintPure, Category = "RsAICharacter")
		bool IsWeaponUnsheathed() { return false; };
	
	UFUNCTION(BlueprintPure, Category = "RsAICharacter")
		struct FGameplayTag GetSpeakerTagOverride() { return FGameplayTag::FGameplayTag(); };

	UFUNCTION(BlueprintPure, Category = "RsAICharacter")
		struct FTransform GetSpawnTransform() { return FTransform::FTransform(); };
	
	UFUNCTION(BlueprintPure, Category = "RsAICharacter")
		class ARsAISpawner* GetSpawner() { return nullptr; };
	
	UFUNCTION(BlueprintPure, Category = "RsAICharacter")
		bool GetCanBeKilledByWater() { return false; };
	
	UFUNCTION(BlueprintPure, Category = "RsAICharacter")
		bool CanPlayMontageOnNavMesh(class UAnimMontage* Montage) { return false; };
	
	UFUNCTION(BlueprintPure, Category = "RsAICharacter")
		bool CanPlayAnimSequenceOnNavMesh(class UAnimSequence* Animation) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "RsAICharacter")
		void AICharacterIsInWaterStateChanged(class ARsCharacter* RsCharacter, class ARsNavVolume* Volume, bool bIsAICharacterInWater, bool bWasInWater) {};
};
