// Fill out your copyright notice in the Description page of Project Settings.

#include "RsAIBlueprintLibrary.h"

//void URsAIBlueprintLibrary::SpawnAIFromDefinition(UObject* WorldContext, URsAICharacterDefinition* AICharacterDefinition, const FSpawnTest& OnAISpawnedDelegate, const FVector& Location, const FRotator& Rotation, AActor* SpawnParent, bool bNoCollisionFail, bool bProjectToNavmesh){};

//void URsAIBlueprintLibrary::SetPatrolPath(ARsAIController* AIController, ARsAIPatrolPath* PatrolPath, const FName& MotionParm, TEnumAsByte<ERsAIPatrolPathUsage> PathUsage, TEnumAsByte<ERsAIScriptingMode> ScriptingMode, TEnumAsByte<ERsAIScriptingMode> ScriptingModeWhenDone, bool bSetEndToHomeLocation, bool bEnableCrowdAvoidance) {};

void URsAIBlueprintLibrary::SetAIScriptingMode(ARsAIController* AIController, TEnumAsByte<ERsAIScriptingMode> ScriptingMode) {};

bool URsAIBlueprintLibrary::ScriptedMoveToLocation(ARsAICharacter* AICharacter, const FVector& MoveTargetLocation, const FName& MotionParmName, TEnumAsByte<ERsAIScriptingMode> ScriptingMode, TEnumAsByte<ERsAIScriptingMode> ScriptingModeWhenDone) { return false; };

bool URsAIBlueprintLibrary::ScriptedMoveToActor(ARsAICharacter* AICharacter, AActor* MoveTargetActor, const FName& MotionParmName, TEnumAsByte<ERsAIScriptingMode> ScriptingMode, TEnumAsByte<ERsAIScriptingMode> ScriptingModeWhenDone) { return false; };

bool URsAIBlueprintLibrary::PlayAlertedVO(ARsAICharacter* AICharacter) { return false; };

void URsAIBlueprintLibrary::MakeAISound(AActor* SourceActor, AActor* InstigatorActor, TEnumAsByte<ERsAISoundType> SoundType, bool bIsHostile) {};

bool URsAIBlueprintLibrary::IsLastEnemy(UObject* WorldContextObject) { return false; };

bool URsAIBlueprintLibrary::IsInAIGameState(UObject* WorldContextObject, TEnumAsByte<ERsAIGameState> GameState) { return false; };

bool URsAIBlueprintLibrary::IsHostileTo(AActor* FirstActor, AActor* SecondActor) { return false; };

bool URsAIBlueprintLibrary::IsFriendlyTo(AActor* FirstActor, AActor* SecondActor) { return false; };

bool URsAIBlueprintLibrary::IsAlone(ARsAICharacter* AICharacter) { return false; };

float URsAIBlueprintLibrary::GetTeamStrength(ARsAICharacter* AICharacter) { return 1.0; };

TArray<ARsAICharacter*> URsAIBlueprintLibrary::GetSubteamMembers(ARsAICharacter* AICharacter, bool bInclusive) { return TArray<ARsAICharacter*>(); };

ARsAIController* URsAIBlueprintLibrary::GetRsAIController(AActor* ControlledActor) { return nullptr; };

TEnumAsByte<ERsAIScriptingMode> URsAIBlueprintLibrary::GetAIScriptingMode(ARsAIController* AIController) { return TEnumAsByte<ERsAIScriptingMode>(); };

bool URsAIBlueprintLibrary::GetAIMoveTargetLocation(ARsAIController* AIController, FVector& Location) { return false; };

bool URsAIBlueprintLibrary::GetAIMoveTargetActor(ARsAIController* AIController, AActor*& Actor) { return false; };

TEnumAsByte<ERsAIGameState> URsAIBlueprintLibrary::GetAIGameState(UObject* WorldContextObject) { return TEnumAsByte<ERsAIGameState>(); };

bool URsAIBlueprintLibrary::GetAIFocusTargetLocation(ARsAIController* AIController, FVector& FocusLocation) { return false; };

TEnumAsByte<ERsAIClass> URsAIBlueprintLibrary::GetAIClass(ARsAIController* AIController) { return TEnumAsByte<ERsAIClass>(); };

TEnumAsByte<ERsAIAwarenessState> URsAIBlueprintLibrary::GetAIAwarenessState(ARsAIController* AIController) { return TEnumAsByte<ERsAIAwarenessState>(); };

bool URsAIBlueprintLibrary::GetAIAttackTargetLocation(ARsAIController* AIController, FVector& Location) { return false; };

bool URsAIBlueprintLibrary::GetAIAttackTargetActor(ARsAIController* AIController, AActor*& Actor) { return false; };

bool URsAIBlueprintLibrary::GetAIAttackTarget(AActor* ControlledActor, AActor*& TargetActor, FVector& TargetLocation) { return false; };

TArray<ARsCharacter*> URsAIBlueprintLibrary::FindAwarenessGroup(ARsAIController* AIController, TEnumAsByte<ERsCharacterType> CharacterType, float Radius) { return TArray<ARsCharacter*>(); };

FText URsAIBlueprintLibrary::DebugGenerateSpawnShortcutText() { return FText::FText(); };

void URsAIBlueprintLibrary::DebugEnableAI(class UObject* WorldContextObject, bool bEnable) {};

void URsAIBlueprintLibrary::ClearPatrolPath(ARsAIController* AIController) {};

bool URsAIBlueprintLibrary::CheckCharacterOnScreenByCapsule(UObject* WorldContext, ARsActor* Character, bool bDebugDraw, float DebugDrawDuration) { return false; };

bool URsAIBlueprintLibrary::CanPlayAnimSequenceOnNavMesh(ARsAIController* AIController, UAnimSequence* Animation) { return false; };

bool URsAIBlueprintLibrary::CanPlayAnimMontageOnNavMesh(ARsAIController* AIController, UAnimMontage* Montage) { return false; };

float URsAIBlueprintLibrary::CalculateRootMotionDisplacement(UAnimSequence* Sequence) { return 1.0; };

FVector2D URsAIBlueprintLibrary::CalculateAIBlendSpaceInput(ARsAIController* AIController, TEnumAsByte<ERsAIBlendspaceInputSource> BlendSpaceType) { return FVector2D::FVector2D(); };

void URsAIBlueprintLibrary::BecomeAwareOf(ARsAIController* AIController, AActor* ActorToBeAwareOf) {};