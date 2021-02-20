// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RsAICharacter.h"
#include "StructsAndEnums_RsGameTechRT.h"
#include "StructsAndEnums.h"
#include "SwAICharacter.generated.h"

/**
 * 
 */
UCLASS()
class SWGAME_API ASwAICharacter : public ARsAICharacter
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwAICharacter")
	FName AttackRowName; // 0x00(0x08)

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwAICharacter")
	void OnShotProjectileReflected(class ASwProjectile* Projectile, class ARsCharacter* ReflectionInstigator);
	void OnShotProjectileReflected_Implementation(class ASwProjectile* Projectile, class ARsCharacter* ReflectionInstigator) {};

	UFUNCTION(BlueprintCallable, Category = "SwAICharacter")
		void ReactionParried(const FHitResult& HitSweep, const FName& AttackType, class UAnimSequenceBase* ParryReactionOverride) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwAICharacter")
		FName GetCurrentAttackRow() { return FName::FName(); };
	
	//UFUNCTION(BlueprintCallable, Category = "SwAICharacter")
		//void AIReaction(const FRsCharacterAnimationData& AnimData, class USwReactionState* DescriptionTemplate) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwAICharacter")
		void AIDefendFromDefenseParameters(const FSwDefenseParameters& DefenseParameters) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwAICharacter")
		void AIDefendForDefenseType(class ARsCharacter* Attacker, ERsCharacterDefense DefenseType) {};
	
	
	UFUNCTION(BlueprintCallable, Category = "SwAICharacter")
		void AIDefend(const FRsCharacterAnimationData& AnimData, class USwDefenseState* DescriptionTemplate, TEnumAsByte<ERsCombatState> CombatDefenseType) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwAICharacter")
		void AIAttackSync(class USwAttackState* DescriptionTemplate, class URsSyncDefinition* SyncDef, bool bSwapMasterSlave) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwAICharacter")
		void AIAttack(const FRsCharacterAnimationData& AnimData, class USwAttackState* DescriptionTemplate) {};
};
