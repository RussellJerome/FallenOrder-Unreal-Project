// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RsUiWindow.h"
#include "RsUiRoot.generated.h"

/**
 * 
 */
UCLASS()
class RSGAMETECHRT_API URsUiRoot : public UUserWidget
{
	GENERATED_BODY()
public:
	//struct FScriptMulticastDelegate                    OnInputDeviceChanged;                                     // 0x0208(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiRoot")
	UClass*                                      SavingIndicatorWidget;                                    // 0x0218(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiRoot")
	int                                                SavingIndicatorZOrder;                                    // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiRoot")
	float                                              SavingIndicatorMinDuration;                               // 0x0224(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiRoot")
	TArray<URsUiWindow*>                         OpenWindows;                                              // 0x0228(0x0010) (ExportObject, ZeroConstructor)
	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsUiRoot")
	//TMap<UClass*, TWeakObjectPtr<URsUiWindow>> ExistingWindows;                                          // 0x0238(0x0050) (ExportObject, ZeroConstructor)
	
	
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiRoot")
		void SetSavingIndicatorVisible(bool bShowRequested, bool bShowText) {};
	
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiRoot")
		void Reset() {};
	
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiRoot")
		URsUiWindow* OpenUiWindow(UClass* UiWindowClass, bool bCloseOtherWindows, int ZOrder) { return nullptr; };
	//void OnSaveGameFailed();
	//void OnReset();
	//void OnLoadGameMissingContent();
	//void OnLoadGameFailed(bool bHasBackup);
	
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiRoot")
		bool IsUiWindowOpen(UClass* UiWindowClass) { return false; };
	
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiRoot")
		bool GetSavingIndicatorTextVisible() { return false; };
	
	UFUNCTION(Blueprintpure, BlueprintCosmetic, Category = "RsUiRoot")
		TArray<URsUiWindow*> GetOpenUiWindows() { return TArray<URsUiWindow*>(); };
	
	UFUNCTION(Blueprintpure, Category = "RsUiRoot", meta = (WorldContext = "WorldContextObject"))
		static URsUiRoot* GetHudRoot(UObject* WorldContextObject) { return nullptr; };
	//ERsUiInputDeviceType GetCurrentUiInputDevice();
	
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiRoot")
		URsUiWindow* FindOpenUiWindowOfClass(UClass* UiWindowClass) { return nullptr; };
	
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiRoot")
		bool CloseUiWindowOfClass(UClass* UiWindowClass) { return false; };
	
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "RsUiRoot")
		void CloseAllUiWindows() {};
		
};
