// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StructsAndEnums.generated.h"

 // Enum RsGameTechRT.ERsSwimPhysicalAnimationProfile
UENUM(BlueprintType)
enum ERsSwimPhysicalAnimationProfile
{
	None = 0,
	Swimming = 1,
	ERsSwimPhysicalAnimationProfile_MAX = 2
};


// Enum RsGameTechRT.ERsLocationSyncType
UENUM(BlueprintType)
enum ERsLocationSyncType
{
	FEET_LOCATION_ACTOR_ORIENTATION = 0,
	USE_TRANSFORM = 1,
	FEET_LOCATION_MASTER_TO_SLAVE_ORIENTATION = 2,
	ERsLocationSyncType_MAX = 3
};


// Enum RsGameTechRT.ERsBreakSyncType
UENUM(BlueprintType)
enum ERsBreakSyncType
{
	NoBreak = 0,
	BreakInstance = 1,
	BreakAll = 2,
	ERsBreakSyncType_MAX = 3
};

// Enum RsGameTechRT.ERsCombatState
UENUM(BlueprintType)
enum ERsCombatState
{
	Neutral = 0,
	Attacking = 1,
	Reaction = 2,
	Blocking = 3,
	Parrying = 4,
	ParrySuccess = 5,
	Evading = 6,
	Stunned = 7,
	Telekinesis = 8,
	UsingForce = 9,
	CodeCombatStateCount = 10,
	CustomCombatState1 = 11,
	CustomCombatState2 = 12,
	CustomCombatState3 = 13,
	CustomCombatState4 = 14,
	CustomCombatState5 = 15,
	CustomCombatState6 = 16,
	CustomCombatState7 = 17,
	CustomCombatState8 = 18,
	CustomCombatState9 = 19,
	CustomCombatState10 = 20,
	CustomCombatState11 = 21,
	CustomCombatState12 = 22,
	CustomCombatState13 = 23,
	CustomCombatState14 = 24,
	CustomCombatState15 = 25,
	CustomCombatState16 = 26,
	CustomCombatState17 = 27,
	CustomCombatState18 = 28,
	CustomCombatState19 = 29,
	CustomCombatState20 = 30,
	CustomCombatState21 = 31,
	CustomCombatState22 = 32,
	CustomCombatState23 = 33,
	CustomCombatState24 = 34,
	CustomCombatState25 = 35,
	CustomCombatState26 = 36,
	CustomCombatState27 = 37,
	CustomCombatState28 = 38,
	CustomCombatState29 = 39,
	CustomCombatState30 = 40,
	CustomCombatState31 = 41,
	CustomCombatState32 = 42,
	CustomCombatState_Max = 43,
	ERsCombatState_MAX = 44
};

USTRUCT(BlueprintType)
struct FRsGeoLocator
{
	GENERATED_BODY()
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0000(0x00E0) MISSED OFFSET
};

// ScriptStruct RsGameTechRT.RsCharacterAnimDataBase
// 0x0040
USTRUCT(BlueprintType)
struct FRsCharacterAnimDataBase
{
	GENERATED_BODY()
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              StartTime;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayRandomAnimation;                                      // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              Playrate;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStopAnimOnAbort;                                         // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              BlendInTime;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LoopCount;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTriggerTime;                                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FName                                       SlotNodeName;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FVector2D                                   BlendSpaceInput;                                          // 0x0030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMontage;                                              // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseBlendSpace;                                           // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
};

// ScriptStruct RsGameTechRT.RsCharacterAnimationData
// 0x0008 (0x0048 - 0x0040)
USTRUCT(BlueprintType)
struct FRsCharacterAnimationData : public FRsCharacterAnimDataBase
{
	GENERATED_BODY()
public:
	class UAnimationAsset*                             AnimAsset;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct RsGameTechRT.RsSyncDataOverride
// 0x0060
USTRUCT(BlueprintType)
struct FRsSyncDataOverride
{
	GENERATED_BODY()
public:
	UAnimationAsset*                             Animation;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                       SocketName;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BreakOnMontageBlendingOut;                                // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ContinueAnimationAfterSync;                               // 0x0011(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	FRsCharacterAnimationData                   DeathAnimationData;                                       // 0x0018(0x0048) (Edit, DisableEditOnInstance)
};

// ScriptStruct RsGameTechRT.RsSyncData
// 0x0100
USTRUCT(BlueprintType)
struct FRsSyncData
{
	GENERATED_BODY()
public:
	bool                                               bDontUseAsFallback;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseHeroOffGroundFallback;                                // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	UAnimationAsset*                             Animation;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BreakOnMontageBlendingOut;                                // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ContinueAnimationAfterSync;                               // 0x0011(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	FRsCharacterAnimationData                   DeathAnimationData;                                       // 0x0018(0x0048) (Edit, DisableEditOnInstance)
	FName                                       SocketName;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                       ComponentName;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FTransform                                  OffsetTransform;                                          // 0x0070(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ERsCombatState>                        PutInState;                                               // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	TMap<FName, FRsSyncDataOverride>     CharacterToSyncDataMappingNative;                         // 0x00A8(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
};

// ScriptStruct RsGameTechRT.RsMasterSyncData
// 0x0000 (0x0100 - 0x0100)
USTRUCT(BlueprintType)
struct FRsMasterSyncData : public FRsSyncData
{
	GENERATED_BODY()
public:
	bool                                               IsMoving;                                                 // 0x00F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
};