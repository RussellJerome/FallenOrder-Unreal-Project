// Fill out your copyright notice in the Description page of Project Settings.

#include "RsUiWindow.h"

bool URsUiWindow::TryUnfocusedScrollingNavigation(EUINavigation Direction) { return false; };

//bool TryNavigation(EUINavigation Direction, unsigned char FocusGroup, bool bAllowUnfocusedScrolling);

void URsUiWindow::SetShowMouseCursor(bool bNewShowMouseCursor) {};

//void SetFocusGroupToAccept(unsigned char FocusGroup);

//void SetFocusGroupDisabled(unsigned char FocusGroup, bool bDisabled);

void URsUiWindow::SetFocusedButton(URsUiButton* ButtonToFocus) {};

void URsUiWindow::SetDisableGameInput(bool bDisablesGameInput) {};

void URsUiWindow::SetConsumeInput(bool bNewConsumeInput) {};

//void ResetFocusForGroup(unsigned char FocusGroup);

void URsUiWindow::ResetFocus() {};

void URsUiWindow::RequestUnpauseGame() {};

void URsUiWindow::RequestPauseGame() {};

void URsUiWindow::PopulateActionNameList(UObject* ContextObject, TArray<FName> Options) {};

void URsUiWindow::OnWindowOpened_Implementation() {};

void URsUiWindow::OnWindowClosed_Implementation() {};

bool URsUiWindow::IsInputEnabled() { return false; };

bool URsUiWindow::IsInputActionPressed(const FName& ActionName) { return false; };

bool URsUiWindow::IsFocused(URsUiButton* Button) { return false; };

float URsUiWindow::GetInputActionPressElapsedTime(const FName& ActionName) { return 1.0; };

//class URsUiButton* GetFocusedButton(unsigned char FocusGroup, bool bClickedButtonIfSet);

float URsUiWindow::GetDynamicInputHoldProgressPercent(const FName& ActionName) { return 1.0; };

bool URsUiWindow::GetConsumeInput() { return false; };

TArray<URsUiButton*> URsUiWindow::GetChildButtons() { return TArray<URsUiButton*>(); };

float URsUiWindow::GetAcceptHoldTime() { return 1.0; };

float URsUiWindow::GetAcceptHoldProgressPercent() { return 1.0; };

void URsUiWindow::EnableInput() {};

void URsUiWindow::DisableInput() {};

void URsUiWindow::CloseWindow() {};