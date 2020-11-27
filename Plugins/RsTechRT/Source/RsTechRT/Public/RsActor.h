// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RsActor.generated.h"

UCLASS()
class RSTECHRT_API ARsActor : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARsActor();

	//struct FScriptMulticastDelegate                    OnSyncInitDelegate;                                       // 0x0788(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	//URsActorMotion* MotionModel;
	//FRsTopology Topology;
	//FRsTopology TopologyBumper;

	UFUNCTION(BlueprintCallable, Category = "RsActor")
		void TeleportDirect(const FVector& DestLocation, const FRotator& DestRotation, bool bStandingDestination, bool bMaintainVelocity, bool bMaintainAnimation) {};

	UFUNCTION(BlueprintCallable, Category = "RsActor")
		void SetInputDirectionMagnitude(float magnitude) {};

	UFUNCTION(BlueprintCallable, Category = "RsActor")
		void SetInputDirectionLocal(const FVector2D& localDir) {};

	UFUNCTION(BlueprintCallable, Category = "RsActor")
		void SetInputDirection(const FVector& worldDir) {};

	//UFUNCTION(BlueprintCallable, Category = "RsActor")
	//void SetDefaultSkeletalAnimTickOption(EVisibilityBasedAnimTickOption TickOption);
	
	//void SetBase(ERsActorBase base);

	UFUNCTION(BlueprintCallable, Category = "RsActor")
		void SetAimDirection(const FVector& worldDir, float intent) {};
	// Is Delagate! void RsSyncInitDelegate__DelegateSignature();
	
	UFUNCTION(BlueprintCallable, Category = "RsActor")
		void LerpTo(const FVector& Destination, float TimeToTarget) {};

	UFUNCTION(BlueprintCallable, Category = "RsActor")
		bool IsTopologyModeSet() { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "RsActor")
		bool IsOnGround() { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "RsActor")
		bool IsInSyncedAnimation() { return false; };

	UFUNCTION(BlueprintPure, Category = "RsActor")
		int GetSyncGroup() { return 1.0; };

	UFUNCTION(BlueprintPure, Category = "RsActor")
		float GetInputDirectionMagnitude() { return 1.0; };

	UFUNCTION(BlueprintPure, Category = "RsActor")
		FVector GetInputDirection() { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "RsActor")
		bool GetClampToGeometry() { return false; };

	UFUNCTION(BlueprintPure, Category = "RsActor")
		FVector GetAimDirection() { return FVector::FVector(); };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
