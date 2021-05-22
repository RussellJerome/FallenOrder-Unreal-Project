// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "StructsAndEnums.h"
#include "Components/SlateWrapperTypes.h"
#include "SwMeditationTrainingManager.generated.h"

UCLASS()
class SWGAME_API ASwMeditationTrainingManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASwMeditationTrainingManager();

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemySpawn, UObject*, SpawnedAI);

	UPROPERTY(BlueprintAssignable, Category = "AISpawn")
		FEnemySpawn OnEnemySpawnedEvent;

	//struct FScriptMulticastDelegate                    OnAllAiSpawned;                                           // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	int                                                MaxCostPointsAvailable;                                   // 0x0398(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	int                                                CurrentCostPointsAvailable;                               // 0x039C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	bool                                               bOverwritePrePopulatedEnemySet;                           // 0x03A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	bool                                               bIsSpectating;                                            // 0x03A1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	bool                                               bIsLeavingMeditationTraining;                             // 0x03A2(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FName                                       CurrentArenaName;                                         // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	
	//struct FScriptMulticastDelegate                    OnExitMenuEvent;                                          // 0x03B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	//struct FScriptMulticastDelegate                    OnRemoveModifiersEvent;                                   // 0x03C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	UClass*                                      SpawnCameraClass;                                         // 0x03D0(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	UClass*                                      SpawnCursorClass;                                         // 0x03D8(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	UClass*                                      SpawnGridClass;                                           // 0x03E0(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	UClass*                                      SpawnArenaClass;                                          // 0x03E8(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	UClass*                                      LayoutSystemClass;                                        // 0x03F0(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	UClass*                                      SpectatorClass;                                           // 0x03F8(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	TArray<FSwMeditationTrainingEnemyData>      SpawnableEnemyTypes;                                      // 0x0400(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	UDataTable*                                  EnemySetData;                                             // 0x0410(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	TArray<FGameplayTag>                        TestingTemp_MeditationTrainingUnlockTags;                 // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FVector                                     SpawnGridStartingOffset;                                  // 0x0428(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	bool                                               bUseLegacyInput;                                          // 0x0434(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FName                                       AddAiActionInputName;                                     // 0x0438(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FName                                       SecondaryConfirmActionInputName;                          // 0x0440(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FName                                       TertiaryConfirmActionInputName;                           // 0x0448(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FName                                       CancelActionInputName;                                    // 0x0450(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FName                                       RemoveAiActionInputName;                                  // 0x0458(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FName                                       PlayActionInputName;                                      // 0x0460(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FName                                       PauseActionInputName;                                     // 0x0468(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FName                                       NextAiActionInputName;                                    // 0x0470(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FName                                       PreviousAiActionInputName;                                // 0x0478(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FName                                       DownActionInputName_DPad;                                 // 0x0480(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FName                                       DownActionInputName_LeftStick;                            // 0x0488(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FName                                       UpActionInputName_DPad;                                   // 0x0490(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FName                                       UpActionInputName_LeftStick;                              // 0x0498(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FName                                       LeftActionInputName_DPad;                                 // 0x04A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FName                                       LeftActionInputName_LeftStick;                            // 0x04A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FName                                       RightActionInputName_DPad;                                // 0x04B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FName                                       RightActionInputName_LeftStick;                           // 0x04B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FName                                       UpActionInputName_RightStick;                             // 0x04C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FName                                       DownActionInputName_RightStick;                           // 0x04C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	class ASwHero*                                     PlayerCharacter;                                          // 0x04D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	float                                              TimeBeforeEndCombat;                                      // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FName                                       CurrentGridSizePresetLabel;                               // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FIntPoint                                   DefaultGridSize;                                          // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	TMap<TEnumAsByte<ESwMeditationTrainingHeroModifier>, FSwMeditationTrainingModifier> HeroModifiers;                                            // 0x04F0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	TMap<TEnumAsByte<ESwMeditationTrainingHeroModifier>, UTexture2D*> HeroModifiersIcon;                                        // 0x0540(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	TArray<TEnumAsByte<ERsHeroLoadoutFlags>>                        MeditationTrainingForceUnlockTags;                        // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	class ASwMeditationTrainingCamera*                 SpawnCamera;                                              // 0x05A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	class ASwMeditationTrainingCursor*                 SpawnCursor;                                              // 0x05A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	class ASwMeditationTrainingGrid*                   SpawnGrid;                                                // 0x05B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	//class UAkComponent*                                AudioComponent;                                           // 0x05B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	//class UAkAudioEvent*                               Audio_Sound_NoCostPoints;                                 // 0x05C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	AActor*                                      VoidTearExit;                                             // 0x05C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	class ASwMeditationTrainingLayoutSystem*           LayoutSystem;                                             // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	class ASwMeditationTrainingSpectator*              Spectator;                                                // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	float                                              HoldTimeClearAll;                                         // 0x05E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	bool                                               bIsPreparingBattle;                                       // 0x05E4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	bool                                               bIsRestarting;                                            // 0x05E5(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	bool                                               bIsLoading;                                               // 0x05E6(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FTransform                                  Spawnpoint;                                               // 0x05F0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FTimerHandle                                PlayerDeathTimer;                                         // 0x0620(0x0008) (BlueprintVisible)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FTimerHandle                                AllAiDeathTimer;                                          // 0x0628(0x0008) (BlueprintVisible)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	bool                                               bIsButtonPressed;                                         // 0x0630(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	FTimerHandle                                HoldButtonTimerHandle;                                    // 0x0638(0x0008) (BlueprintVisible)
	/*
	struct FScriptMulticastDelegate                    OnUpdateCurrentCostPointsEvent;                           // 0x0640(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLayoutChangedEvent;                                     // 0x0650(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMeditationTrainingStateChanged;                         // 0x0660(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMeditationTrainingHeroModifierChanged;                  // 0x0670(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCancelPressedEvent;                                     // 0x0680(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNextAiPressedEvent;                                     // 0x0690(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPreviousEventPressedEvent;                              // 0x06A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAddAiEventPressedEvent;                                 // 0x06B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemoveAiEventPressedEvent;                              // 0x06C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEnemySpawnedEvent;                                      // 0x06D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEnemyCountChangedEvent;                                 // 0x06E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData07[0x210];                                     // 0x06F0(0x0210) MISSED OFFSET
	*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	class ARsPlayerController*                         PlayerController;                                         // 0x0900(0x0008) (ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	TEnumAsByte<ESwMeditationTrainingState>                       previousMode;                                             // 0x0908(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	TEnumAsByte <ESwMeditationTrainingState >                        CurrentMode;                                              // 0x0909(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SwMeditationTrainingManager")
	TMap<FVector2D, FSwMeditationTrainingSpawnedEnemyInfo> SpawnedEnemiesMap;                                        // 0x0918(0x0050) (ZeroConstructor)

	//UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
	//void UnbindInputactionBeginTraining();

	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		FEventReply TryProcessMouseClick(const FPointerEvent& MouseEvent) { return FEventReply::FEventReply(); };
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void ToggleSpectatorController(bool bEnableSpectator) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void SwitchMode(ESwMeditationTrainingState newMode) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void StopTimerFillCircle() {};
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void StartTimerFillCircle() {};

	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void StartEditingMode() {};

	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void StartChallengeMode() {};

	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void SpectatorShowAllHiddenComponents() {};

	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void SpectatorSetHeroSpectatorMode(bool bEnabled) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void SpectatorHideComponents(AActor* Actor) {};

	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void SetVisibilitySpawnedEnemies(bool bHide) {};

	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void SetupEnemySetData() {};

	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void SetSpectatorModeEnabled(bool bEnabled) {};

	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void SetSpawnGridSize(const FIntPoint& NewGridSize) {};

	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void SetEnemiesIgnorePlayer(bool bShouldIgnore) {};

	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void ReviveHero(bool bDespawnAi) {};

	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void RevertActiveHeroModifiers() {};

	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void ResetLayout() {};

	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void ResetGrid(bool bResetGridSize) {};

	//UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
	//	void PlaySoundEffect(UAkAudioEvent* InSoundEffect) {};

	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void PlayCombat() {};
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwMeditationTrainingManager")
	void OnStartPressed();
	void OnStartPressed_Implementation() {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwMeditationTrainingManager")
	void OnStartCombat();
	void OnStartCombat_Implementation() {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwMeditationTrainingManager")
	void OnScrollEnemiesUpPressed();
	void OnScrollEnemiesUpPressed_Implementation() {};
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwMeditationTrainingManager")
	void OnScrollEnemiesDownPressed();
	void OnScrollEnemiesDownPressed_Implementation() {};


	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwMeditationTrainingManager")
	void OnReturnToBattleSelect();
	void OnReturnToBattleSelect_Implementation() {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwMeditationTrainingManager")
	void OnPreviousArenaSizePressed();
	void OnPreviousArenaSizePressed_Implementation() {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwMeditationTrainingManager")
	void OnNextArenaSizePressed();
	void OnNextArenaSizePressed_Implementation() {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwMeditationTrainingManager")
	void OnNavigateUpPressed();
	void OnNavigateUpPressed_Implementation() {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwMeditationTrainingManager")
	void OnMeditationTrainingModifierReverted(ASwHero* InHero, ESwMeditationTrainingHeroModifier InModifierKey);
	void OnMeditationTrainingModifierReverted_Implementation(ASwHero* InHero, ESwMeditationTrainingHeroModifier InModifierKey) {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwMeditationTrainingManager")
	void OnMeditationTrainingModifierApplied(ASwHero* InHero, ESwMeditationTrainingHeroModifier InModifierKey);
	void OnMeditationTrainingModifierApplied_Implementation(ASwHero* InHero, ESwMeditationTrainingHeroModifier InModifierKey) {};
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwMeditationTrainingManager")
	void OnInitialized(ARsPlayerController* PlayerControllerUsed);
	void OnInitialized_Implementation(ARsPlayerController* PlayerControllerUsed) {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwMeditationTrainingManager")
	void OnEnemyDeath(AActor* DeadActor);
	void OnEnemyDeath_Implementation(AActor* DeadActor) {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwMeditationTrainingManager")
	void OnCursorMovement(const struct FVector& NewLocation);
	void OnCursorMovement_Implementation(const FVector& NewLocation) {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwMeditationTrainingManager")
	void OnCombatFinished();
	void OnCombatFinished_Implementation() {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwMeditationTrainingManager")
	void OnAsyncLoadEnemySetDataComplete();
	void OnAsyncLoadEnemySetDataComplete_Implementation() {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwMeditationTrainingManager")
	void OnAsyncLoadEnemyComplete(int EnemyIndex);
	void OnAsyncLoadEnemyComplete_Implementation(int EnemyIndex) {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwMeditationTrainingManager")
	void OnAllAiDead();
	void OnAllAiDead_Implementation() {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwMeditationTrainingManager")
	void OnAiSpawnedByATST(ARsAICharacter* AICharacter);
	void OnAiSpawnedByATST_Implementation(ARsAICharacter* AICharacter) {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwMeditationTrainingManager")
	void OnAcceptArenaSizePressed();
	void OnAcceptArenaSizePressed_Implementation() {};

	UFUNCTION(Blueprintpure, Category = "SwMeditationTrainingManager")
		bool IsSpectatingModifierEnabled() { return false; };

	UFUNCTION(Blueprintpure, Category = "SwMeditationTrainingManager")
		bool IsSpawnQueueEmpty() { return false; };

	UFUNCTION(Blueprintpure, Category = "SwMeditationTrainingManager")
		bool IsMouseInputActive() { return false; };
	
	UFUNCTION(Blueprintpure, Category = "SwMeditationTrainingManager")
		bool IsButtonPressed() { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void Initialize(AActor* InVoidTearExit, ASwHero* InPlayerCharacter, ARsPlayerController* InPlayerController) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void IncrementHeroModifier(ESwMeditationTrainingHeroModifier InModifierKey) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		AActor* GetSpawnedActorOwner() { return nullptr; };
	
	UFUNCTION(Blueprintpure, Category = "SwMeditationTrainingManager")
		int GetSelectedEnemyCost(const FSwMeditationTrainingEnemyData& InEnemy) { return 0; };
	
	UFUNCTION(Blueprintpure, Category = "SwMeditationTrainingManager")
		float GetPercentageButtonHeld() { return 0.0; };

	UFUNCTION(Blueprintpure, Category = "SwMeditationTrainingManager")
		int GetEnemyCount() { return 0; };

	UFUNCTION(Blueprintpure, Category = "SwMeditationTrainingManager")
		int GetDeathCount() { return 0; };

	UFUNCTION(Blueprintpure, Category = "SwMeditationTrainingManager")
		float GetCharacterMinHealth(ASwHero* InHero) { return 0.0; };
	
	UFUNCTION(Blueprintpure, Category = "SwMeditationTrainingManager")
		float GetCharacterMinFocus(ASwHero* InHero) { return 0.0; };
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void DisableAllHeroModifiers() {};
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void Deactivate() {};
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void CaptureCurrentModifiers(FSwMeditationTrainingLayout& Layout) {};

	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void CaptureCurrentLayout(FSwMeditationTrainingLayout& Layout) {};

	//UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
	//void BindInputactionBeginTraining(){};

	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void ApplySelectedHeroModifiers() {};
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void ApplyLayout(const FSwMeditationTrainingLayout& Layout) {};

	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void AddOrRemoveAiFromCurrentCursorPosition() {};

	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void AddEnemy(const FSwMeditationTrainingEnemyData& AiToSpawn) {};
	
	UFUNCTION(BlueprintCallable, Category = "SwMeditationTrainingManager")
		void ActivateAllEnemies(bool bActivate) {};
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
