// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RsPlayerController.h"
#include "R4PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SWGAME_API AR4PlayerController : public ARsPlayerController
{
	GENERATED_BODY()
public:
	//struct FScriptMulticastDelegate                    OnPlayerLoginChanged;                                     // 0x3610(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	//struct FScriptMulticastDelegate                    OnAnyPlayerLoginChanged;                                  // 0x3620(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	//TScriptInterface<USwCustomDeathHandlerInterface> CustomDeathHandler;                                       // 0x3630(0x0010) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCursor")
	FTransform                                  SpawnTransform;                                           // 0x3670(0x0030) (SaveGame, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCursor")
	UClass*                                     PostDeathWidgetClass;                                     // 0x36A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	//struct FScriptMulticastDelegate                    OnWidgetAddedEvent;                                       // 0x36A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	//struct FScriptMulticastDelegate                    OnPlayerResapwnedEvent;                                   // 0x36B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCursor")
	UClass*                                      PhotoModeControllerClass;                                 // 0x36C8(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingCursor")
	TSoftClassPtr<UClass>                       SoftCheatClass;                                           // 0x36D0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};
