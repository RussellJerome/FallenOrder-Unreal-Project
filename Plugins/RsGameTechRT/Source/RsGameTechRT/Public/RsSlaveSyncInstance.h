// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RsSyncInstance.h"
#include "RsSlaveSyncInstance.generated.h"

/**
 * 
 */
UCLASS()
class RSGAMETECHRT_API URsSlaveSyncInstance : public URsSyncInstance
{
	GENERATED_BODY()
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x01F0(0x0040) MISSED OFFSET
	FTransform                                  OffsetTransform;                                          // 0x0230(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0260(0x0010) MISSED OFFSET
	FName                                       ConstrainedBoneName;                                      // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MaintainRelativeRotation;                                 // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0279(0x0007) MISSED OFFSET
	
};
