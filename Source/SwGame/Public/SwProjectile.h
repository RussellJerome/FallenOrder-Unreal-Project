// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RsProjectile.h"
#include "StructsAndEnums.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "RsCharacter.h"
#include "SwProjectileSpreadingData.h"
#include "SwProjectile.generated.h"

/**
 * 
 */
UCLASS()
class SWGAME_API ASwProjectile : public ARsProjectile
{
	GENERATED_BODY()
public:

	// Sets default values for this actor's properties
	ASwProjectile();

	//Components

	UPROPERTY(VisibleAnywhere)
	class USceneComponent* AttachToMuzzleComponent;

	UPROPERTY(VisibleAnywhere)
	class UProjectileMovementComponent* ProjectileMovement;
	
	UPROPERTY(VisibleAnywhere)
	class UParticleSystemComponent* ProjectileVisual;
																											   

//Variables
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwProjectile")
	float                                              MaxTravelDistance;                                        // 0x0378(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwProjectile")
	FSwProjectileFX                             ProjectileFX;                                             // 0x0380(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwProjectile")
	AActor*                                      ShootTarget;                                              // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwProjectile")
	AActor*                                      ProjectileOwner;                                          // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwProjectile")
	USwProjectileSpreadingData*                  SpreadingData;                                            // 0x03B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwProjectile")
	TEnumAsByte<ESwProjectileType>                     ProjectileType;                                           // 0x03C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwProjectile")
	bool                                               bIsCheap;                                                 // 0x03C1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwProjectile")
	bool                                               bShouldUseCheapMovement;                                  // 0x03C2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwProjectile")
	bool                                               bShouldCheckDistanceToTarget;                             // 0x03C3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwProjectile")
	float                                              DistanceToTarget;                                         // 0x03C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwProjectile")
	bool                                               bShouldCheckDistanceDoDamageToTarget;                     // 0x03C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwProjectile")
	bool                                               bShouldUseRayCast;                                        // 0x03C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwProjectile")
	bool                                               bShouldPlayImpact;                                        // 0x03CA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwProjectile")
	bool                                               bShouldUseCheapFlyby;                                     // 0x03CB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)


	//Functions
	
	UFUNCTION(BlueprintCallable, Category = "SwProjectile")
		FVector TrackingShotVector(AActor* HitTarget, const FVector& Offset) { return FVector::FVector(); };

	UFUNCTION(BlueprintCallable, Category = "SwProjectile")
		void SetReflectionCollision(UPrimitiveComponent* InCollisionComponent) {};

	UFUNCTION(BlueprintCallable, Category = "SwProjectile")
		void SetProjectileCollision(UPrimitiveComponent* InCollisionComponent) {};

	UFUNCTION(BlueprintCallable, Category = "SwProjectile")
		void SetAttackTypeName(const FName& InTypeName) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwProjectile")
		void PostProjectileCollisionEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwProjectile")
		void OnReflectionCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int OtherBodyIndex) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwProjectile")
		void OnReflectionCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwProjectile")
		void OnProjectileHitActor(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwProjectile")
		bool HasBeenReflected() { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "SwProjectile")
		bool HasBeenDeflected() { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "SwProjectile")
		float GetInitialSpeed() { return 0.0; };
	
	UFUNCTION(BlueprintCallable, Category = "SwProjectile")
		FRsHitEvent GetHitEvent() { return FRsHitEvent(); };
	
	UFUNCTION(BlueprintCallable, Category = "SwProjectile")
		void ExecuteReflectBehavior(ARsCharacter* ReflectionInstigator) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwProjectile")
		void ExecuteDeflectBehavior(ARsCharacter* DeflectionInstigator) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwProjectile")
		bool CheckHitActorReflection(ARsCharacter* OtherActor) { return false; };
	
};
