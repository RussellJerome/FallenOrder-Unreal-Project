// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/WeakObjectPtrTemplates.h"
#include "GameFramework/Actor.h"
#include "Animation/AnimationAsset.h"
#include "StructsAndEnums.h"
#include "RsSyncInstance.generated.h"

/**
 * 
 */
UCLASS()
class RSGAMETECHRT_API URsSyncInstance : public UObject
{
	GENERATED_BODY()
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0028(0x0004) MISSED OFFSET
	TWeakObjectPtr<AActor>                       Actor;                                                    // 0x002C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	UAnimationAsset*                             Animation;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEndSyncOnMontageBlendingOut;                             // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysTickPoseAndRefreshBones;                           // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x0042(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStopAnimationOnSyncEnd;                                  // 0x0043(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseHeroOnGroundFallback;                                 // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              BlendInTime;                                              // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FRsCharacterAnimationData                   DeathAnimationData;                                       // 0x0050(0x0048) (Edit, BlueprintVisible)
	bool                                               bNavIgnoreZ;                                              // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x27];                                      // 0x0099(0x0027) MISSED OFFSET
	//FScriptMulticastDelegate                    OnSyncStoppedDelegate;                                    // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	//FScriptMulticastDelegate                    OnSyncEnding;                                             // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	//FScriptMulticastDelegate                    OnTakeSyncDamage;                                         // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	//FScriptMulticastDelegate                    OnSyncAnimStarted;                                        // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0xF0];                                      // 0x0100(0x00F0) MISSED OFFSET
	
};
