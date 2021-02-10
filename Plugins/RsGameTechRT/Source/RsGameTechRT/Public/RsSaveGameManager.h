// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Respawn/SaveGame/RsSaveGameManagerBase.h"
#include "RsSaveGameObject.h"
#include "RsSaveGameManager.generated.h"

/**
 * 
 */
UCLASS()
class RSGAMETECHRT_API URsSaveGameManager : public URsSaveGameManagerBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "URsSaveGameManager")
	URsSaveGameObject*                           CurrentSaveObject;                                        // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "URsSaveGameManager")
	TMap<FString, FRsActorRecord>         ActorRecords;                                             // 0x0060(0x0050) (ZeroConstructor, Transient)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "URsSaveGameManager")
	TMap<FString, FRsActorRecord>         PendingActorRecords;                                      // 0x00B0(0x0050) (ZeroConstructor, Transient)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "URsSaveGameManager")
	TArray<FRsSaveGameInfo>                     CachedSaveSlotInfo;                                       // 0x01B0(0x0010) (ZeroConstructor, Transient)
};
