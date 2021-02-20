// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RsReactionState.h"
#include "SwReactionState.generated.h"

/**
 * 
 */
UCLASS()
class SWGAME_API USwReactionState : public URsReactionState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwReactionState")
	bool                                               bHasTickImplemetation;                                    // 0x0128(0x0001) (ZeroConstructor, IsPlainOldData)

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwReactionState")
	void TickReaction(class ARsCharacter* TheOneReacting, float DeltaTime);
	void TickReaction_Implementation(class ARsCharacter* TheOneReacting, float DeltaTime) {};
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwReactionState")
	void OnEndReaction(class ARsCharacter* TheOneReacting);
	void OnEndReaction_Implementation(class ARsCharacter* TheOneReacting) {};
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwReactionState")
	void OnBeginReaction(class ARsCharacter* TheOneReacting);
	void OnBeginReaction_Implementation(class ARsCharacter* TheOneReacting) {};
};
