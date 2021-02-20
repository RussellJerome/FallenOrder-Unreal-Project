// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RsCombatState.h"
#include "SwDefenseState.generated.h"

/**
 * 
 */
UCLASS()
class SWGAME_API USwDefenseState : public URsCombatState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwDefenseState")
	bool                                               bIsDefenseActive;                                         // 0x0128(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwDefenseState")
	TEnumAsByte<ERsCombatState>                        ConfigurableDefenseType;                                  // 0x012A(0x0001) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwDefenseState")
	bool                                               bHasTickImplemetation;                                    // 0x012B(0x0001) (ZeroConstructor, IsPlainOldData)
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwDefenseState")
	void TickDefense(class ARsCharacter* TheDefender, float DeltaTime);
	void TickDefense_Implementation(class ARsCharacter* TheDefender, float DeltaTime) {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwDefenseState")
	void OnEndDefense(class ARsCharacter* TheDefender);
	void OnEndDefense_Implementation(class ARsCharacter* TheDefender) {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwDefenseState")
	ERsCombatDefenseSuccesType OnDefenseSuccess(class ARsCharacter* TheDefender, const FRsDamageParams& DamageInfo, class ARsCharacter* AttackingCharacter, class AActor* DamageCauser);
	ERsCombatDefenseSuccesType OnDefenseSuccess_Implementation(class ARsCharacter* TheDefender, const FRsDamageParams& DamageInfo, class ARsCharacter* AttackingCharacter, class AActor* DamageCauser) { return ERsCombatDefenseSuccesType::ERsCombatDefenseSuccesType_MAX; };

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwDefenseState")
	void OnDefenseAborted(class ARsCharacter* TheDefender);
	void OnDefenseAborted_Implementation(class ARsCharacter* TheDefender) {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwDefenseState")
	void OnBeginDefense(class ARsCharacter* TheDefender);
	void OnBeginDefense_Implementation(class ARsCharacter* TheDefender) {};
};
