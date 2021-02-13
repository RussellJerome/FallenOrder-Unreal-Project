// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RsUiButton.h"
//#include "RsUiRoot.h"
#include "RsUiWindow.generated.h"

/**
 * 
 */
UCLASS()
class RSGAMETECHRT_API URsUiWindow : public UUserWidget
{
	GENERATED_BODY()
public:
	//FScriptMulticastDelegate                    OnAcceptedEvent;                                          // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	//FScriptMulticastDelegate                    OnFocusChangedEvent;                                      // 0x0228(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	//FScriptMulticastDelegate                    OnFocusGroupStateChanged;                                 // 0x0238(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	bool                                               bPauseGameWhileOpen = true;                                      // 0x0248(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	bool                                               bDisableGameInput = true;                                        // 0x0249(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	bool                                               bDisableInputToOtherWindows;                              // 0x024A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	bool                                               bConsumeInput = true;                                            // 0x024B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	bool                                               bCloseOnCancel = true;                                           // 0x024C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	bool                                               bDestroyOnClose = true;                                          // 0x024D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	bool                                               bGarbageCollectOnClose;                                   // 0x024E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	bool                                               bRegisterForAccept;                                       // 0x024F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	bool                                               bShowMouseCursor;                                         // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	//unsigned char                                      FocusGroupToAccept;                                       // 0x0251(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	//unsigned char                                      UnknownData01[0x2];                                       // 0x0252(0x0002) MISSED OFFSET
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	float                                              HeldInputRetriggerDelay;                                  // 0x0254(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	float                                              HeldInputRepeatTime;                                      // 0x0258(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	float                                              MinTimeBetweenNavigation;                                 // 0x025C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	//TArray<FRsFocusGroupNavigation>             NavigationInputs;                                         // 0x0260(0x0010) (Edit, ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	bool                                               bAllowRightStickUnfocusedScrolling;                       // 0x0270(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	bool                                               bUseNonGridNavigation;                                    // 0x0271(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	bool                                               bR4DlcDisableInputImmediately;                            // 0x0272(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	float                                              NonGridNavMaxAngleDegrees;                                // 0x0274(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	//TArray<unsigned char>                              StartingDisabledFocusGroups;                              // 0x0278(0x0010) (Edit, ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	bool                                               bPersistThroughLevelReload;                               // 0x0288(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	float                                              ScrollingSpeed;                                           // 0x028C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	TMap<FName, EUINavigation>                  ActionDirections;                                         // 0x02E0(0x0050) (ZeroConstructor)
	//TMap<struct FName, ERsUINavigationInput>           ActionNavigationInputType;                                // 0x0330(0x0050) (ZeroConstructor)
	//unsigned char                                      UnknownData05[0xA0];                                      // 0x0380(0x00A0) MISSED OFFSET
	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
//	TMap<FName, FScriptDelegate>         DynamicInputActionCallbacks;                              // 0x0420(0x0050) (ZeroConstructor)
	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	//TMap<FName, FScriptDelegate>         DynamicInputConditionalActionDelegates;                   // 0x0470(0x0050) (ZeroConstructor)
	//unsigned char                                      UnknownData06[0x50];                                      // 0x04C0(0x0050) MISSED OFFSET
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	TMap<FName, float>                          HeldInputActions;                                         // 0x0510(0x0050) (ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	TArray<URsUiButton*>                         FocusedButtons;                                           // 0x05B8(0x0010) (ExportObject, ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	TArray<URsUiButton*>                         ChildButtons;                                             // 0x05C8(0x0010) (ExportObject, ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiWindow")
	class URsUiRoot*                                   OwningRoot;                                               // 0x05D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	//Funcs

	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiWindow")
		bool TryUnfocusedScrollingNavigation(EUINavigation Direction);
	
	//UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiWindow")
		//bool TryNavigation(EUINavigation Direction, unsigned char FocusGroup, bool bAllowUnfocusedScrolling);
	
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiWindow")
		void SetShowMouseCursor(bool bNewShowMouseCursor);
	
	//UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiWindow")
		//void SetFocusGroupToAccept(unsigned char FocusGroup);
	
	//UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiWindow")
		//void SetFocusGroupDisabled(unsigned char FocusGroup, bool bDisabled);
	
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiWindow")
		void SetFocusedButton(URsUiButton* ButtonToFocus);
	
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiWindow")
		void SetDisableGameInput(bool bDisablesGameInput);
	
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiWindow")
		void SetConsumeInput(bool bNewConsumeInput);
	
	//UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiWindow")
		//void ResetFocusForGroup(unsigned char FocusGroup);
	
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiWindow")
		void ResetFocus();

	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiWindow")
		void RequestUnpauseGame();
	
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiWindow")
		void RequestPauseGame();

	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiWindow")
		void PopulateActionNameList(UObject* ContextObject, TArray<FName> Options);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "RsUiWindow")
	void OnWindowOpened();
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "RsUiWindow")
	void OnWindowClosed();

	//void OnFocusChanged(class URsUiButton* NewFocusedButton);
	//void OnActionReleased(const struct FName& ActionName, ERsUiInputActionType ActionType);
	//void OnActionPressed(const struct FName& ActionName, ERsUiInputActionType ActionType);
	//void OnAccepted(class URsUiButton* AcceptedButton);
	
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiWindow")
		bool IsInputEnabled();
	
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiWindow")
		bool IsInputActionPressed(const FName& ActionName);
	
	//UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiWindow")
		//bool IsFocusGroupDisabled(unsigned char FocusGroup);
	
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiWindow")
		bool IsFocused(URsUiButton* Button);
	
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiWindow")
		float GetInputActionPressElapsedTime(const FName& ActionName);

	//unsigned char GetFocusGroupToAccept();
	//class URsUiButton* GetFocusedButton(unsigned char FocusGroup, bool bClickedButtonIfSet);

	UFUNCTION(BlueprintPure, BlueprintCosmetic, Category = "RsUiWindow")
		float GetDynamicInputHoldProgressPercent(const FName& ActionName);
	
	UFUNCTION(BlueprintPure, BlueprintCosmetic, Category = "RsUiWindow")
		bool GetConsumeInput();

	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiWindow")
		TArray<URsUiButton*> GetChildButtons();

	UFUNCTION(BlueprintPure, BlueprintCosmetic, Category = "RsUiWindow")
		float GetAcceptHoldTime();

	UFUNCTION(BlueprintPure, BlueprintCosmetic, Category = "RsUiWindow")
		float GetAcceptHoldProgressPercent();

	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiWindow")
		void EnableInput();
	
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiWindow")
		void DisableInput();
	
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiWindow")
		void CloseWindow();


	//void AddDynamicInputConditionalAction(const FName& ActionName, const FScriptDelegate& OnPressCallback, bool bRepeatWhenHeld);
	//void AddDynamicInputAction(const struct FName& ActionName, const FScriptDelegate& OnPressCallback, bool bRepeatWhenHeld);
	//void AddDynamicHeldInputAction(const FName& ActionName, const FScriptDelegate& OnPressCallback, float RequiredHoldDuration, float HoldTimeMinVisualPercent);
};
