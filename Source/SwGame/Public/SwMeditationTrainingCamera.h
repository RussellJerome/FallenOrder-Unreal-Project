// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "Camera/PlayerCameraManager.h"
#include "SwMeditationTrainingCamera.generated.h"

/**
 * 
 */
UCLASS()
class SWGAME_API ASwMeditationTrainingCamera : public ACameraActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCamera")
	FRotator                                    StartingCameraRotation;                                   // 0x08A0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCamera")
	FVector                                     StartingCameraPosition;                                   // 0x08AC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCamera")
	float                                              CameraFOV;                                                // 0x08B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCamera")
	float                                              CameraZoom;                                               // 0x08BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCamera")
	float                                              CameraSmooth;                                             // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCamera")
	float                                              CameraRotationSmooth;                                     // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCamera")
	FViewTargetTransitionParams                 CameraTransitionParamsForEntry;                           // 0x08C8(0x0010) (Edit)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCamera")
	FViewTargetTransitionParams                 CameraTransitionParamsForExit;                            // 0x08D8(0x0010) (Edit)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCamera")
	class ASwMeditationTrainingCursor*                 TrackedCursor;                                            // 0x08E8(0x0008) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCamera")
	class ASwMeditationTrainingGrid*                   TrackedGrid;                                              // 0x08F0(0x0008) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCamera")
	AActor*                                      OriginalViewTarget;                                       // 0x08F8(0x0008) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCamera")
	APlayerController*                           PlayerController;                                         // 0x0900(0x0008) (ZeroConstructor, IsPlainOldData)

	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingCursor")
		void SetCameraTransformGoal(const FTransform& NewGoal) {};
};
