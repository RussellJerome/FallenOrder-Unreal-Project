// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RsCharacterDefinition.h"
#include "BehaviorTree/BlackboardData.h"
#include "RsAICharacterDefinition.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class RSGAMETECHRT_API URsAICharacterDefinition : public URsCharacterDefinition
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, Category = "AICharacterDefinition")
		UClass*                                      AIClass;                                                  // 0x0200(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData)

	UPROPERTY(EditDefaultsOnly, Category = "AICharacterDefinition")
		FName                                       TweakFile;                                                // 0x0208(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
		//URsActorTweaksBook*                          Tweaks;                                                   // 0x0210(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
		//URsAIVODefinition*                           VODefinition;                                             // 0x0218(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
		//FRsAICharacterBehaviors                     Behaviors;                                                // 0x0220(0x0038) (Edit, DisableEditOnInstance)

	//UPROPERTY(EditDefaultsOnly, Category = "AICharacterDefinition")
	//	UBlackboardData*                             Blackboard;                                               // 0x0258(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	UPROPERTY(EditDefaultsOnly, Category = "AICharacterDefinition")
		float                                              TargetProjectionHeight;                                   // 0x0260(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	UPROPERTY(EditDefaultsOnly, Category = "AICharacterDefinition")
		bool bRequiresPathToTarget;

	UPROPERTY(EditDefaultsOnly, Category = "AICharacterDefinition")
		bool bCanReturnHome;

	//URsAIAwarenessStateDefinition_Ambient*       AmbientStateDefinition;                                   // 0x0268(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoClear, IsPlainOldData)
	//URsAIAwarenessStateDefinition_Aggro*         AggroStateDefinition;                                     // 0x0270(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoClear, IsPlainOldData)
	//FRsAICharacterAwarenessReactionAnimations   AwarenessReactions;                                       // 0x0278(0x0040) (Edit, DisableEditOnInstance)
	//FRsAICharacterAwarenessEvaluators           AwarenessEvaluators;                                      // 0x02B8(0x0018) (Edit, DisableEditOnInstance)
	//FRsSimpleAnimationDataSet                   Taunts;                                                   // 0x02D0(0x0010) (Edit, DisableEditOnInstance)
	//FRsSimpleAnimationDataSet                   CombatReactions;                                          // 0x02E0(0x0010) (Edit, DisableEditOnInstance)

	UPROPERTY(EditDefaultsOnly, Category = "AICharacterDefinition")
		FName                                       ZTargetCameraMode;                                        // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	UPROPERTY(EditDefaultsOnly, Category = "AICharacterDefinition")
		FName                                       ZTargetFocusSocket;                                       // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	UPROPERTY(EditDefaultsOnly, Category = "AICharacterDefinition")
		float                                              ZTargetMaxDist;                                           // 0x0300(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	UPROPERTY(EditDefaultsOnly, Category = "AICharacterDefinition")
		float                                              NoPathToAttackTargetTimeOut;                              // 0x0304(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	UPROPERTY(EditDefaultsOnly, Category = "AICharacterDefinition")
		bool bUseNoPathToAttackTargetTimeOut;

};
