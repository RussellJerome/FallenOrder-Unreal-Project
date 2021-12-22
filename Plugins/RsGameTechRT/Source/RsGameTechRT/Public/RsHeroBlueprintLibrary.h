// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StructsAndEnums_RsGameTechRT.h"
#include "RsHeroBlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS()
class RSGAMETECHRT_API URsHeroBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "RsHeroBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void SetGamepadCameraYAxisInverted(class UObject* WorldContextObject, bool bInvert) {};

	UFUNCTION(BlueprintCallable, Category = "RsHeroBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FRsBitfield_NavState MakeFRsBitfield_NavState(TArray<TEnumAsByte<ERsNavState>> Flags) { return FRsBitfield_NavState(); };
	
	UFUNCTION(BlueprintCallable, Category = "RsHeroBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FRsBitfield_HeroUpgradeFlags MakeFRsBitfield_HeroUpgradeFlags(TArray<TEnumAsByte<ERsHeroUpgradeFlags>> Flags) { return FRsBitfield_HeroUpgradeFlags(); };

	UFUNCTION(BlueprintCallable, Category = "RsHeroBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FRsBitfield_HeroLoadoutFlags MakeFRsBitfield_HeroLoadoutFlags(TArray<TEnumAsByte<ERsHeroLoadoutFlags>> Flags) { return FRsBitfield_HeroLoadoutFlags(); };

	UFUNCTION(BlueprintCallable, Category = "RsHeroBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static FRsBitfield_HeroInputFlags MakeFRsBitfield_HeroInputFlags(TArray<TEnumAsByte<ERsHeroInputFlags>> Flags) { return FRsBitfield_HeroInputFlags(); };

	//static bool IsHeroStateModifierValid(class URsHeroStateModifierDefinition* Modifier, ERsNavState navState);

	UFUNCTION(BlueprintCallable, Category = "RsHeroBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static bool IsGripInputHeld(class ARsHero* RsHero) { return false; };

	UFUNCTION(BlueprintCallable, Category = "RsHeroBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool IsGamepadCameraYAxisInverted(class UObject* WorldContextObject) { return false; };

	UFUNCTION(BlueprintCallable, Category = "RsHeroBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static bool IgnoreGripInputRequirement() { return false; };

	UFUNCTION(BlueprintCallable, Category = "RsHeroBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BreakFRsBitfield_HeroUpgradeFlags(const FRsBitfield_HeroUpgradeFlags UpgradeFlags, TArray<TEnumAsByte<ERsHeroUpgradeFlags>>& Flags) {};

	UFUNCTION(BlueprintCallable, Category = "RsHeroBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
	static void BreakFRsBitfield_HeroLoadoutFlags(const FRsBitfield_HeroLoadoutFlags LoadoutFlags, TArray<TEnumAsByte<ERsHeroLoadoutFlags>>& Flags) {};
	
};
