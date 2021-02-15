// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RsPlayerController.h"
#include "SwMeditationTrainingCursor.generated.h"

UCLASS()
class SWGAME_API ASwMeditationTrainingCursor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASwMeditationTrainingCursor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCursor")
	FName                                       MovementXInputName;                                       // 0x0370(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCursor")
	FName                                       MovementYInputName;                                       // 0x0378(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCursor")
	float                                              MovementInputDeadZone;                                    // 0x0380(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCursor")
	float                                              MaxSpeed;                                                 // 0x0384(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCursor")
	float                                              Acceleration;                                             // 0x0388(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCursor")
	float                                              EnemyDetectionRadius;                                     // 0x038C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCursor")
	float                                              OuterGridMovementBuffer;                                  // 0x0390(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCursor")
	UStaticMeshComponent*                        MeshComponent;                                            // 0x0398(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCursor")
	AActor*                                      Camera;                                                   // 0x03A0(0x0008) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCursor")
	class ASwMeditationTrainingGrid*                   MeditationGrid;                                           // 0x03A8(0x0008) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCursor")
	ARsPlayerController*                         PlayerController;                                         // 0x03B0(0x0008) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCursor")
	bool                                               bEnableMagnet;                                            // 0x03B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCursor")
	float                                              MagnetForce;                                              // 0x03BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingCursor")
		void SetMagnetTarget(const FVector& Location) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingCursor")
		void SetForceMagnetEnabled(bool bInForceEnable) {};

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
