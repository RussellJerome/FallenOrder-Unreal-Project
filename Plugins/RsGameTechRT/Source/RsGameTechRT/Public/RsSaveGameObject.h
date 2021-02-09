// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "RsSaveGameObject.generated.h"

/**
 * 
 */
UCLASS()
class RSGAMETECHRT_API URsSaveGameObject : public USaveGame
{
	GENERATED_BODY()
public:
	/*
	ERsSaveGameVersion                                 Version;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	ERsSaveGameVersion                                 ConstructedVersion;                                       // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	TArray<struct FRsActorRecord>                      ActorRecords;                                             // 0x0030(0x0010) (ZeroConstructor, SaveGame)
	TArray<unsigned char>                              CompressedActorRecords;                                   // 0x0040(0x0010) (ZeroConstructor)
	uint32_t                                           UncompressedActorRecordsSize;                             // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
	struct FRsPlayerStartRecord                        PlayerStartRecord;                                        // 0x0060(0x0070)
	TArray<struct FRsStreamingAreaRef>                 InitialStreamingAreas;                                    // 0x00D0(0x0010) (ZeroConstructor)
	bool                                               bUsePlayerStartRecord;                                    // 0x00E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SaveSlot;                                                 // 0x00E1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00E2(0x0006) MISSED OFFSET
	struct FDateTime                                   TimeSaved;                                                // 0x00E8(0x0008) (ZeroConstructor)
	uint32_t                                           Changelist;                                               // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Crc32;                                                    // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRsSaveGameMetaData                         MetaData;                                                 // 0x00F8(0x0028)
	*/
};
