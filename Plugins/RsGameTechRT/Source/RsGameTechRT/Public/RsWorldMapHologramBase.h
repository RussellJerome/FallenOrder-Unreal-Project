// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StructsAndEnums_RsGameTechRT.h"
#include "RsWorldMapHologramBase.generated.h"

UCLASS()
class RSGAMETECHRT_API ARsWorldMapHologramBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARsWorldMapHologramBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "RsWorldMapHologramBase")
		void UpdateMapLocation(const struct FVector& InLocation, const struct FRotator& InRotation) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsWorldMapHologramBase")
		void TranslateMapToMapSectionCenter(const struct FRsMapSectionTag& MapSection) {};

	UFUNCTION(BlueprintCallable, Category = "RsWorldMapHologramBase")
		struct FVector TransformWorldPositionToMapPosition(const struct FVector& InPositionWorldSpace) { return FVector::FVector(); };
	
	UFUNCTION(BlueprintCallable, Category = "RsWorldMapHologramBase")
		struct FVector TransformMapPositionToWorldPosition(const struct FVector& InPositionMapSpace) { return FVector::FVector(); };
	
	UFUNCTION(BlueprintCallable, Category = "RsWorldMapHologramBase")
		void ToggleVisibility(bool bVisibile) {};

	UFUNCTION(BlueprintCallable, Category = "RsWorldMapHologramBase")
		void SetLocationMarker(const struct FVector& WorldPosition) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsWorldMapHologramBase")
		void SetHolomapMode(ERsHolomapMode InHolomapMode) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsWorldMapHologramBase")
		void SetHolomapCenterLocation(const struct FVector& InHolomapCenter) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsWorldMapHologramBase")
		void RequestWorldMapOpen() {};
	
	UFUNCTION(BlueprintCallable, Category = "RsWorldMapHologramBase")
		void RequestWorldMapClose() {};

	UFUNCTION(BlueprintCallable, Category = "RsWorldMapHologramBase")
		void RemoveMapSectionFromActiveLayer(const struct FRsMapSectionTag& MapSection) {};
	
	UFUNCTION(Blueprintpure, Category = "RsWorldMapHologramBase")
		bool IsWorldMapOpen() { return false; };
	
	UFUNCTION(Blueprintpure, Category = "RsWorldMapHologramBase")
		struct FRsMapSectionTag GetTargetedMapSection() { return FRsMapSectionTag::FRsMapSectionTag(); };
	
	UFUNCTION(Blueprintpure, Category = "RsWorldMapHologramBase")
		struct FRsMapSectionTag GetSelectedMapSection() { return FRsMapSectionTag::FRsMapSectionTag(); };
	
	UFUNCTION(Blueprintpure, Category = "RsWorldMapHologramBase")
		class UDataAsset* GetRuntimeSettings() { return nullptr; };
	
	UFUNCTION(Blueprintpure, Category = "RsWorldMapHologramBase")
		float GetRelativePlanetScale() { return 0.0f; };
	
	UFUNCTION(Blueprintpure, Category = "RsWorldMapHologramBase")
		float GetHolomapYawRotation() { return 0.0f; };
	
	UFUNCTION(Blueprintpure, Category = "RsWorldMapHologramBase")
		struct FVector GetHolomapScale() { return FVector::FVector(); };
	
	UFUNCTION(Blueprintpure, Category = "RsWorldMapHologramBase")
		ERsHolomapMode GetHolomapMode() { return ERsHolomapMode::Cinematic_ERsHolomapMode; };
	
	UFUNCTION(Blueprintpure, Category = "RsWorldMapHologramBase")
		struct FVector GetHolomapCoordiantes() { return FVector::FVector(); };
	
	UFUNCTION(Blueprintpure, Category = "RsWorldMapHologramBase")
		struct FVector GetHolomapCenterLocation() { return FVector::FVector(); };
	
	//unsigned char GetActiveInteriorLevel();
	
	UFUNCTION(BlueprintCallable, Category = "RsWorldMapHologramBase")
		void EnableLockStepTranslationMode(bool bEnabled) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsWorldMapHologramBase")
		void ClearLocationMarker() {};
	
	UFUNCTION(BlueprintCallable, Category = "RsWorldMapHologramBase")
		void AddMapSectionToActiveLayer(const struct FRsMapSectionTag& MapSection) {};
};
