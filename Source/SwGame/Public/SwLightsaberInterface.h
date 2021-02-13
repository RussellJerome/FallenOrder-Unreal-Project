// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RsCharacter.h"
#include "StructsAndEnums.h"
#include "SwLightsaberInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(Blueprintable, MinimalAPI)
class USwLightsaberInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SWGAME_API ISwLightsaberInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SwLightsaberInterface")
	void SetLightsaberMarksState(bool bEnabled);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SwLightsaberInterface")
	void OverchargeEffect(bool bStart, bool bActivate);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SwLightsaberInterface")
	bool IsBladeExtended();
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SwLightsaberInterface")
	FSwLightsaberBladeState GetBladeState();
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SwLightsaberInterface")
	void ExtendRetractBlade(bool bExtend, bool bInstant);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SwLightsaberInterface")
	void CatchLightsaber(ARsCharacter* CatchingCharacter);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SwLightsaberInterface")
	bool CanBeForcePulledByCharacter(ARsCharacter* PullingCharacter);
};
