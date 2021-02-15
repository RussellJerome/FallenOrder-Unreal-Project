// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StructsAndEnums.h"
#include "SwMeditationTrainingLayoutSystem.generated.h"

UCLASS()
class SWGAME_API ASwMeditationTrainingLayoutSystem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASwMeditationTrainingLayoutSystem();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingLayoutSystem")
	int                                                MaxLayoutSlots;                                           // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingLayoutSystem")
	TArray<FSwMeditationTrainingLayout>         SavedLayouts;                                             // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingLayoutSystem")
	int                                                LastUsedLayoutSlot;                                       // 0x0378(0x0004) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingLayoutSystem")
	bool                                               bHasUnsavedChanges;                                       // 0x037C(0x0001) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingLayoutSystem")
	FSwMeditationTrainingLayout                 CurrentLayout;

	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingLayoutSystem")
		void SaveLayoutToSlot(int LayoutSlot, const FSwMeditationTrainingLayout& LayoutToSave) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingLayoutSystem")
		void SaveLayoutSystemToDisk() {};
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingLayoutSystem")
		void RequireSavePrompt() {};
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingLayoutSystem")
		void LoadLayoutSystemFromDisk() {};
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingLayoutSystem")
		void LoadLayoutFromSlot(int LayoutSlot, FSwMeditationTrainingLayout& OutLayout) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingLayoutSystem")
		void GetLayoutDebugString(const FSwMeditationTrainingLayout& Layout) {};

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
