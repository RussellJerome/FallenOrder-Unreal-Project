// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "StructsAndEnums.h"
#include "Components/SpotLightComponent.h"
#include "SwPhotomodeCameraController.generated.h"

/**
 * 
 */
UCLASS()
class SWGAME_API ASwPhotomodeCameraController : public APlayerController
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	
	
	//UPROPERTY(VisibleAnywhere)
	//class USpotLightComponent*                         PhotoLightComponent;                                      // 0x06D0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	
	UPROPERTY(VisibleAnywhere)
	class USceneComponent*                             PhotoLightVisualGuide;                                    // 0x06D8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent*                        FocalPlaneComponent;                                      // 0x06E0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwPhotomodeCameraController")
	UClass*                                      SpectatorPawnClass;                                       // 0x06E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwPhotomodeCameraController")
	UClass*                                      HUDClass;                                                 // 0x06F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwPhotomodeCameraController")
	TArray<FPhotomodeFilter>                    PhotomodeFilters;                                         // 0x06F8(0x0010) (Edit, ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwPhotomodeCameraController")
	TArray<FName>                               BlacklistedCameraModes;                                   // 0x0708(0x0010) (Edit, ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwPhotomodeCameraController")
	FText                                       TextNone;                                                 // 0x0718(0x0028) (Edit)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwPhotomodeCameraController")
	FText                                       TextOff;                                                  // 0x0730(0x0028) (Edit)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwPhotomodeCameraController")
	FText                                       TextOn;                                                   // 0x0748(0x0028) (Edit)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwPhotomodeCameraController")
	UMaterialInstanceDynamic*                    CurrentFilter;                                            // 0x0760(0x0008) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwPhotomodeCameraController")
	UMaterialInstanceDynamic*                    FocalPlaneMaterial;                                       // 0x0768(0x0008) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwPhotomodeCameraController")
	TArray<class ARsCharacter*>                        HideableAIList;                                           // 0x0770(0x0010) (ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwPhotomodeCameraController")
	TArray<class UTexture*>                            PostProcessTextureReferences;                             // 0x1540(0x0010) (ZeroConstructor)

	ASwPhotomodeCameraController();

	UFUNCTION(BlueprintCallable, Category = "SwPhotomodeCameraController")
		void TogglePhotomode() {};
	
	UFUNCTION(BlueprintCallable, Category = "SwPhotomodeCameraController")
		void PhotomodeValueChanged(float Delta) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwPhotomodeCameraController")
		void PhotomodeToggleSpotlight(bool bEnabled) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwPhotomodeCameraController")
		void PhotomodeSelectionChanged() {};
	
	UFUNCTION(BlueprintCallable, Category = "SwPhotomodeCameraController")
		void PhotomodePhotoTaken() {};
	
	UFUNCTION(BlueprintCallable, Category = "SwPhotomodeCameraController")
		void PhotomodeHideHUD(bool bHUDHidden) {};
	
	UFUNCTION(BlueprintPure, Category = "SwPhotomodeCameraController")
		bool IsSpotlightVisible() { return false; };
	
	UFUNCTION(BlueprintPure, Category = "SwPhotomodeCameraController")
		bool IsSelected(EPhotoModeTweaks TweakID) { return false; };
	
	UFUNCTION(BlueprintPure, Category = "SwPhotomodeCameraController")
		bool IsMenuHidden() { return false; };

	UFUNCTION(BlueprintPure, Category = "SwPhotomodeCameraController")
		FText GetTextValue(EPhotoModeTweaks TweakID) { return FText::FText(); };
	
	UFUNCTION(BlueprintPure, Category = "SwPhotomodeCameraController")
		float GetSliderValue(EPhotoModeTweaks TweakID) { return 0.0; };
};
