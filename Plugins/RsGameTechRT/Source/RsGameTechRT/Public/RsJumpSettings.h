// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsJumpSettings.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FRsJumpData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "JumpData")
	float                                              VerticalImpulse;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "JumpData")
	float                                              HorizontalImpulse;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

UCLASS(Blueprintable, BlueprintType)
class RSGAMETECHRT_API URsJumpSettings : public UDataAsset
{
	GENERATED_BODY()
public:
	FName                                       JumpInputActionName;                                      // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsJumpSettings")
	FRsJumpData                                 JumpData;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsJumpSettings")																								  //URsHeroStateModifierDefinition*              DisableClimbAutoGrabModifier;                             // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpOverMaxSpeedSlowDownMultiplier;                       // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsJumpSettings")
	float                                              JumpDuringGraceWindowImpulseDelay;                        // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsJumpSettings")
	float                                              PostJumpDisableClimbAutoGrabDuration;                     // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsJumpSettings")
	FRsJumpData                                 SlideJumpData;                                            // 0x0054(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	//URsHeroStateModifierDefinition*              SlideJumpModifier;                                        // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsJumpSettings")
	FRsJumpData                                 WallJumpData;                                             // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsJumpSettings")
	float                                              WallJumpAngleDegrees;                                     // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	//URsHeroStateModifierDefinition*              WallJumpAirModifier;                                      // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	//URsHeroStateModifierDefinition*              WallJumpRotationModifier;                                 // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	//URsHeroStateModifierDefinition*              WallJumpFallModifier;                                     // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsJumpSettings")
	FRsJumpData                                 DoubleJumpData;                                           // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsJumpSettings")
	FRsJumpData                                 DoubleJumpZTargetData;                                    // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsJumpSettings")
	float                                              VerticalSpeedAdditiveThreshold;                           // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsJumpSettings")
	FRsJumpData                                 DoubleJumpAdditiveData;                                   // 0x00A4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	unsigned char                                      UnknownData02[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	//URsHeroStateModifierDefinition*              DoubleJumpModifier;                                       // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	//URsHeroStateModifierDefinition*              DoubleJumpZTargetModifier;                                // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	//TArray<FRsConstrainedJumpPadMapping>        ConstrainedJumpPadMappings;                               // 0x00C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	//FRsConstrainedJumpDataMapping               ConstrainedJumpDataMapping;                               // 0x00D0(0x01B0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	//URsHeroStateModifierDefinition*              ConstrainedJumpTagModifier;                               // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	//URsHeroStateModifierDefinition*              ConstrainedJumpMovementModifier;                          // 0x0288(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsJumpSettings")
	float                                              ConstrainedJumpMovementModifierBlendOutTime;              // 0x0290(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsJumpSettings")
	float                                              ConstrainedJumpMovementModifierDuration;                  // 0x0294(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	//URsHeroStateModifierDefinition*              ConstrainedJumpNoGripDisableGrabModifier;                 // 0x0298(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	//URsPhysicalAnimationProfile*                 PhysicalAnimationProfileConstrainedJump;                  // 0x02A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

};
