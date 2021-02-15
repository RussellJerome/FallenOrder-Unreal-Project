// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StructsAndEnums.h"
#include "Blueprint/WidgetNavigation.h"
#include "SwMeditationTrainingGrid.generated.h"

UCLASS()
class SWGAME_API ASwMeditationTrainingGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASwMeditationTrainingGrid();


	//struct FScriptMulticastDelegate                    OnCellSelectedChanged;                                    // 0x0370(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingGrid")
	TArray<FSwMeditationTrainingGridSizePreset> GridSizePresets;                                          // 0x0380(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingGrid")
	FSwMeditationTrainingGridSetting            Setting;                                                  // 0x0390(0x0044) (Edit, BlueprintVisible, BlueprintReadOnly)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingGrid")
	UClass*                                      GridCellClass;                                            // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingGrid")
	bool                                               bUseLegacyGridNavigation;                                 // 0x03E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingGrid")
	class ASwMeditationTrainingCamera*                 MeditationCamera;                                         // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingGrid")
	class ASwMeditationTrainingCursor*                 MeditationCursor;                                         // 0x03F0(0x0008) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingGrid")
	TMap<FVector2D, class ASwMeditationTrainingGridCell*> Cells;                                                    // 0x0408(0x0050) (ZeroConstructor)


	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingGrid")
		void MoveSelection(EUINavigation Direction) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingGrid")
		FName GetLabelForGridSize(const FIntPoint& GridSize) { return FName::FName(); };
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingGrid")
		void Display(bool bEnable) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingGrid")
		void ClearCells() {};


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
