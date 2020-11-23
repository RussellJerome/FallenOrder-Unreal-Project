// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "Particles/ParticleSystem.h"
#include "RsCharacterDefinition.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class RSGAMETECHRT_API URsCharacterDefinition : public UDataAsset
{
	GENERATED_BODY()
public:
	//TEnumAsByte<ERsCharacterType>                      CharacterType;                                            // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              DamageReceiveMultiplier[0x4];                             // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageValues[0x7];                                        // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlockDepleteValues[0x5];                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	//URsCharacterDeathDefinition*                 DeathDefinition;                                          // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	//URsCharacterDeathDefinition*                 AirDeathDefinition;                                       // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	//URsCharacterReactionDefinition*              ReactionDefinition;                                       // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	//URsCharacterReactionDefinition*              AirReactionDefinition;                                    // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	//URsHitCountTrackingDefinition*               HitCountTrackingDefinition;                               // 0x0098(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	//URsDefenseDefinition*                        DefenseDefinition;                                        // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ParriedBlockCountIncrement;                               // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	//FRsDefenseConditions                        BlockConditions;                                          // 0x00AC(0x0024) (Edit)
	//FRsParryConditions                          ParryConditions;                                          // 0x00D0(0x000C) (Edit)
	bool                                               BlockMeterResetOnDepletedDamage;                          // 0x00DC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               BlockDuringReaction;                                      // 0x00DD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ParryDuringReaction;                                      // 0x00DE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               EvadeDuringReaction;                                      // 0x00DF(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanBlock;                                                 // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanParry;                                                 // 0x00E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanEvade;                                                 // 0x00E2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	//ERsBlockLevel                                      BlockResponse[0x3];                                       // 0x00E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	//ERsCharacterDefense                                DefenseMap[0x11];                                         // 0x00E6(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	//ERsCharacterDefense                                DefenseContactMap[0x11];                                  // 0x00F7(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GlancingBlowDistance;                                     // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	//URsAISoundEvents*                            AISoundEvents;                                            // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	//URsRagdollSoundEvents*                       RagdollSoundEvents;                                       // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<FName,FName>                   SurfaceTypeOverrides;                                     // 0x0120(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	//URsPhysicsAssetCustomization*                PhysicsAssetCustomization;                                // 0x0170(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UDataTable*                                  FootstepDataTable;                                        // 0x0178(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UDataTable*                                  SlideDataTable;                                           // 0x0180(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FLinearColor                                HitFXColor;                                               // 0x0188(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                       TrailSocketStart;                                         // 0x0198(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                       TrailSocketEnd;                                           // 0x01A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UParticleSystem*                             TrailParticle;                                            // 0x01A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	//UAkAudioEvent*                               FootstepEvent;                                            // 0x01B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	//UAkAudioEvent*                               FoliageFootstepEvent;                                     // 0x01B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OcclusionEnabled;                                         // 0x01C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Follow;                                                   // 0x01C1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x01C2(0x0002) MISSED OFFSET
	float                                              JogSpeed;                                                 // 0x01C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunSpeed;                                                 // 0x01C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FoliageTypeUpdateRate;                                    // 0x01CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FoliageTypeSearchRadius;                                  // 0x01D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x01D4(0x0004) MISSED OFFSET
	FName                                       WeaponIkWeaponEndSocket;                                  // 0x01D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                       WeaponIkWeaponOtherEndSocket;                             // 0x01E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceToCancelActiveFightBehaviorIfTargetIsInSync;      // 0x01E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseCapsulePercentage;                                    // 0x01EC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x01ED(0x0003) MISSED OFFSET
	float                                              CapsulePercentageForTargetAim;                            // 0x01F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetAimLowerThreshold;                                  // 0x01F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetAimUpperThreshold;                                  // 0x01F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetAimPitchYawTimeout;                                 // 0x01FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};
