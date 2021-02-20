// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "RsNavVolume.generated.h"

/**
 * 
 */
UCLASS()
class RSGAMETECHRT_API ARsNavVolume : public AVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsNavVolume")
	class URsNavCurrentComponent*                      current;                                                  // 0x03B0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsNavVolume")
	struct FColor                                      VolumeColor;                                              // 0x03B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsNavVolume")
	bool                                               ShowInGame;                                               // 0x03BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsNavVolume")
	bool                                               bRsNavVolumeShouldAlwaysDrawSolid;                        // 0x03BD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};
