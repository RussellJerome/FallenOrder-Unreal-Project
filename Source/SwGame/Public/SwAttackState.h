// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RsCombatState.h"
#include "StructsAndEnums.h"
#include "SwAttackState.generated.h"

/**
 * 
 */
UCLASS()
class SWGAME_API USwAttackState : public URsCombatState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwAttackState")
	bool                                               bHasTickImplemetation;                                    // 0x0188(0x0001) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwAttackState")
	bool                                               bHasShouldChainAttackImplementation;                      // 0x0189(0x0001) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwAttackState")
	TArray<AActor*>                              RegisteredDamageCausers;                                  // 0x0240(0x0010) (ZeroConstructor, Transient)

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwAttackState")
	void TickAttack(class ARsCharacter* TheAttacker, float DeltaTime);
	void TickAttack_Implementation(class ARsCharacter* TheAttacker, float DeltaTime) {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwAttackState")
	bool ShouldChainAttackAnimation(class ARsCharacter* TheAttacker, FRsCharacterAnimationData& NextAnimation, class UClass* AbilityType);
	bool ShouldChainAttackAnimation_Implementation(class ARsCharacter* TheAttacker, FRsCharacterAnimationData& NextAnimation, class UClass* AbilityType) { return false; };

	UFUNCTION(BlueprintCallable, Category = "SwAttackState")
		void RegisterDamageCauser(class AActor* NewDamageCauser) {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwAttackState")
	void OnEndAttack(class ARsCharacter* TheAttacker);
	void OnEndAttack_Implementation(class ARsCharacter* TheAttacker) {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwAttackState")
	void OnDealtAnyDamage(class ARsCharacter* TheAttacker, float Damage, const FRsDamageParams& DamageInfo, class AActor* DamagedActor, class AActor* DamageCauser);
	void OnDealtAnyDamage_Implementation(class ARsCharacter* TheAttacker, float Damage, const FRsDamageParams& DamageInfo, class AActor* DamagedActor, class AActor* DamageCauser) {};
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwAttackState")
	void OnConnectedButDealtNoDamage(class ARsCharacter* TheAttacker, const FRsDamageParams& DamageInfo, class AActor* OtherActor);
	void OnConnectedButDealtNoDamage_Implementation(class ARsCharacter* TheAttacker, const FRsDamageParams& DamageInfo, class AActor* OtherActor) {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwAttackState")
	void OnBeginAttack(class ARsCharacter* TheAttacker);
	void OnBeginAttack_Implementation(class ARsCharacter* TheAttacker) {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwAttackState")
	void OnAttackDefended(class ARsCharacter* TheAttacker, class ARsCharacter* TheDefender, ERsCombatDefenseSuccesType DefenseType, const FHitResult& HitSweep);
	void OnAttackDefended_Implementation(class ARsCharacter* TheAttacker, class ARsCharacter* TheDefender, ERsCombatDefenseSuccesType DefenseType, const FHitResult& HitSweep) {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwAttackState")
	void OnAttackCompleted(class ARsCharacter* TheAttacker);
	void OnAttackCompleted_Implementation(class ARsCharacter* TheAttacker) {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwAttackState")
	void OnAttackAborted(class ARsCharacter* TheAttacker);
	void OnAttackAborted_Implementation(class ARsCharacter* TheAttacker) {};

	UFUNCTION(BlueprintCallable, Category = "SwAttackState")
		void ChainForceAbilityPreTrigger(class UClass* ForceAbilityType, TEnumAsByte<ESwAbilityUpgradeLevel> UpgradeLevel, class UAnimationAsset* OverrideAnimation) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwAttackState")
		void ChainForceAbility(class UClass* ForceAbilityType, class UAnimationAsset* AnimationOverride) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwAttackState")
		class UAnimMontage* ChainAnimationOrAbility(const struct FRsCharacterAnimationData& InAnimData, class UClass* AbilityType) { return nullptr; };
};
