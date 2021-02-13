// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RsPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class RSGAMETECHRT_API ARsPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	/*
	class UObject*                                     m_controllerMappingOwner;                                 // 0x3540(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ARsAICharacter>               BuddyDroidActor;                                          // 0x3548(0x0008) (ZeroConstructor, IsPlainOldData)
	class URsPlayerCharacterDefinition*                PlayerCharacterDefinition;                                // 0x3550(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraLockMinimumPadIntensity;                            // 0x3558(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              CameraLockBlendOutTime;                                   // 0x355C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUseMovementInputForCamera;                               // 0x3560(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       TargetControllerSpace;                                    // 0x3570(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	ERsControllerSpaceMode                             ControllerSpaceMode;                                      // 0x3580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 ControllerSpaceAxisMapX;                                  // 0x3581(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 ControllerSpaceAxisMapY;                                  // 0x3582(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ControllerSpaceAxisFactorX;                               // 0x3584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ControllerSpaceAxisFactorY;                               // 0x3588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ControllerDirection;                                      // 0x3590(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector4                                    ControllerDirectionLocal;                                 // 0x35A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector4                                    UndampedControllerDirection;                              // 0x35B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector4                                    UndampedControllerDirectionLocal;                         // 0x35C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector4                                    SnappedControllerDirection;                               // 0x35D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector4                                    SnappedControllerDirectionLocal;                          // 0x35E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ControllerAnalogDeadzone;                                 // 0x35F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ConsumeLeftAnalog;                                        // 0x35F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)


	void UnlockCameraForInput();
	void SetUserControlSpaceMapping(class UObject* mappingOwner, const struct FQuat& newControllerSpace, TEnumAsByte<EAxis> axisMapX, TEnumAsByte<EAxis> axisMapY, float axisFactorX, float axisFactorY, int snappingDivisions);
	void SetControlSpaceMode(ERsControllerSpaceMode newControllerSpaceMode);
	void ResetControlSpaceMapping(class UObject* mappingOwner);
	void OnPauseChanged(bool bIsPaused);
	void LockCameraForInput(float MinimumPadIntensityForMaintainingCameraLock, float BlendOutTime);
	class AActor* GetPlayerStart();
	*/

	UFUNCTION(Blueprintpure, Category = "RsPlayerController")
		class URsUiRoot* GetHudRoot() { return nullptr; };
};
