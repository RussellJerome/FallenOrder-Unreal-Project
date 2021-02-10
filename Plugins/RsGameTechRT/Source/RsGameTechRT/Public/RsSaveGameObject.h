// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "StructsAndEnums_RsGameTechRT.h"
#include "Engine/Public/Respawn/SaveGame/SaveGameData.h"
#include "RsSaveGameObject.generated.h"

/**
 * 
 */
UCLASS()
class RSGAMETECHRT_API URsSaveGameObject : public USaveGame
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "URsSaveGameObject")
	TEnumAsByte<ERsSaveGameVersion>                                Version;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "URsSaveGameObject")
	TEnumAsByte<ERsSaveGameVersion>                                 ConstructedVersion;                                       // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "URsSaveGameObject")
	TArray<FRsActorRecord>                      ActorRecords;                                             // 0x0030(0x0010) (ZeroConstructor, SaveGame)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "URsSaveGameObject")
	TArray<UObject*>                              CompressedActorRecords;                                   // 0x0040(0x0010) (ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "URsSaveGameObject")
	int                                           UncompressedActorRecordsSize;                             // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "URsSaveGameObject")
	FRsPlayerStartRecord                        PlayerStartRecord;                                        // 0x0060(0x0070)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "URsSaveGameObject")
	TArray<FRsStreamingAreaRef>                 InitialStreamingAreas;                                    // 0x00D0(0x0010) (ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "URsSaveGameObject")
	bool                                               bUsePlayerStartRecord;                                    // 0x00E0(0x0001) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "URsSaveGameObject")
	/*I got No Fucking Clue what this is*/ int                                     SaveSlot;                                                 // 0x00E1(0x0001) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "URsSaveGameObject")
	FDateTime                                   TimeSaved;                                                // 0x00E8(0x0008) (ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "URsSaveGameObject")
		int                                           Changelist;                                               // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "URsSaveGameObject")
		int                                           Crc32;                                                    // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "URsSaveGameObject")
	FRsSaveGameMetaData                         MetaData;                                                 // 0x00F8(0x0028)
};
