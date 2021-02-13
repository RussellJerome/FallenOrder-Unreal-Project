// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "StructsAndEnums_RsGameTechRT.h"
#include "SwLightsaberMovementComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SWGAME_API USwLightsaberMovementComponent : public UMovementComponent
{
	GENERATED_BODY()
public:
	//struct FScriptMulticastDelegate                    OnThrowReturned;                                          // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	//struct FScriptMulticastDelegate                    OnStartCatch;                                             // 0x01C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwLightsaberMovementComponent")
	FRotator                                    RotationRate;                                             // 0x01D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwLightsaberMovementComponent")
	FVector                                     PivotTranslation;                                         // 0x01DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwLightsaberMovementComponent")
	bool                                               bRotationInLocalSpace = true;                                // 0x01E8(0x0001) (Edit, BlueprintVisible)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwLightsaberMovementComponent")
	bool                                               bReturnToThrower = true;                                     // 0x01E8(0x0001) (Edit, BlueprintVisible)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwLightsaberMovementComponent")
	bool                                               bThrowFixedDistance = true;                                  // 0x01E8(0x0001) (Edit, BlueprintVisible)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwLightsaberMovementComponent")
	float                                              CatchDistance;                                            // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwLightsaberMovementComponent")
	float                                              DefaultThrowDistance;                                     // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwLightsaberMovementComponent")
	float                                              ArcAmount;                                                // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwLightsaberMovementComponent")
	float                                              HomingDuration;                                           // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwLightsaberMovementComponent")
	FRsHitEvent                                 HitEvent;                                                 // 0x0200(0x0040) (Edit, BlueprintVisible)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwLightsaberMovementComponent")
	float                                              HitDebounceTime;                                          // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	
	UFUNCTION(BlueprintCallable, Category = "SwLightsaberMovementComponent")
		void ThrowWithDuration(float InTimeToDestination) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwLightsaberMovementComponent")
		void ThrowAtSpeed(float Speed) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwLightsaberMovementComponent")
		void SetCollision(bool EnableCollision) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwLightsaberMovementComponent")
		void ReturnWithDuration(float Duration) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwLightsaberMovementComponent")
		void ReturnAtSpeed(float Speed) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwLightsaberMovementComponent")
		void InitSaberMovement(AActor* SaberOwner, UPrimitiveComponent* Collision, const FName& AttackType) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwLightsaberMovementComponent")
		void FlyToWithDuration(AActor* InHomingTarget, const FVector& InTargetLocation, float InTimeToDestination, bool ReturnToThrower) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwLightsaberMovementComponent")
		void FlyToAtSpeed(AActor* InHomingTarget, const FVector& InTargetLocation, float Speed, bool ReturnToThrower) {};
	
};
