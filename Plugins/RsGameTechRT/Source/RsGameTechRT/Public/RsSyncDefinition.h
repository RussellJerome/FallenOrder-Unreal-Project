// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "StructsAndEnums.h"
#include "RsSyncDefinition.generated.h"

/**
 * 
 */
UCLASS()
class RSGAMETECHRT_API URsSyncDefinition : public UDataAsset
{
	GENERATED_BODY()
public:
	TEnumAsByte<ERsBreakSyncType>                      BreakOnMontageEnd;                                        // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ERsBreakSyncType>                      BreakOnTakeDamage;                                        // 0x0031(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ERsLocationSyncType>                   LocationSyncType;                                         // 0x0032(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD];                                       // 0x0033(0x000D) MISSED OFFSET
	FRsMasterSyncData                           Master;                                                   // 0x0040(0x0100) (Edit, DisableEditOnInstance)
	//TArray<FRsSlaveSyncData>                    Slaves;                                                   // 0x0140(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              BlendInTime;                                              // 0x0150(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0154(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x0158(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAdjustSyncLocation;                                      // 0x0159(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNavToSync;                                               // 0x015A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x015B(0x0001) MISSED OFFSET
	float                                              SyncDistance;                                             // 0x015C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNavIgnoreZ;                                              // 0x0160(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
	UCurveFloat*                                 VelocityCurveOverride;                                    // 0x0168(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisallowAIAttacks;                                       // 0x0170(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGroundWithRaycasts;                                      // 0x0171(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOrientZWithGround;                                       // 0x0172(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0xD];                                       // 0x0173(0x000D) MISSED OFFSET
	
};
