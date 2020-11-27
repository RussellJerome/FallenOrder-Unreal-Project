// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RsAICharacterDefinition.h"
#include "StructsAndEnums_RsGameTechRT.h"
#include "RsAIPatrolPath.h"
#include "RsAIController.h"
#include "RsAICharacter.h"
#include "rsActor.h"
#include "RsAIBlueprintLibrary.generated.h"

/**
 * 
 */

UCLASS()
class RSGAMETECHRT_API URsAIBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	DECLARE_DYNAMIC_DELEGATE_OneParam(FSpawnTest, UObject*, SpawnedAI);
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static void SpawnAIFromDefinition(UObject* WorldContextObject, URsAICharacterDefinition* AICharacterDefinition, const FSpawnTest& OnAISpawnedDelegate, const FVector& Location, const FRotator& Rotation, AActor* SpawnParent, bool bNoCollisionFail, bool bProjectToNavmesh) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static void SetPatrolPath(ARsAIController* AIController, ARsAIPatrolPath* PatrolPath, const FName& MotionParm, TEnumAsByte<ERsAIPatrolPathUsage> PathUsage, TEnumAsByte<ERsAIScriptingMode> ScriptingMode, TEnumAsByte<ERsAIScriptingMode> ScriptingModeWhenDone, bool bSetEndToHomeLocation, bool bEnableCrowdAvoidance) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static void SetAIScriptingMode(ARsAIController* AIController, TEnumAsByte<ERsAIScriptingMode> ScriptingMode);

	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static bool ScriptedMoveToLocation(ARsAICharacter* AICharacter, const FVector& MoveTargetLocation, const FName& MotionParmName, TEnumAsByte<ERsAIScriptingMode> ScriptingMode, TEnumAsByte<ERsAIScriptingMode> ScriptingModeWhenDone);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static bool ScriptedMoveToActor(ARsAICharacter* AICharacter, AActor* MoveTargetActor, const FName& MotionParmName, TEnumAsByte<ERsAIScriptingMode> ScriptingMode, TEnumAsByte<ERsAIScriptingMode> ScriptingModeWhenDone);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static bool PlayAlertedVO(ARsAICharacter* AICharacter);

	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static void MakeAISound(AActor* SourceActor, AActor* InstigatorActor, TEnumAsByte<ERsAISoundType> SoundType, bool bIsHostile);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static bool IsLastEnemy (UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static bool IsInAIGameState(UObject* WorldContextObject, TEnumAsByte<ERsAIGameState> GameState);

	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static bool IsHostileTo(AActor* FirstActor, AActor* SecondActor);

	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static bool IsFriendlyTo(AActor* FirstActor, AActor* SecondActor);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static bool IsAlone(ARsAICharacter* AICharacter);

	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static float GetTeamStrength(ARsAICharacter* AICharacter);

	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static TArray<ARsAICharacter*> GetSubteamMembers(ARsAICharacter* AICharacter, bool bInclusive);

	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static ARsAIController* GetRsAIController(AActor* ControlledActor);

	/*
	TArray<class ARsAIPOI*> STATIC_GetRegisteredPOIsForCharacter(class UObject* WorldContext, class ARsAICharacter* AICharacter);
	TArray<class ARsAIPOI*> STATIC_GetRegisteredPOIs(class UObject* WorldContext);
	TArray<class ARsAICharacterSpawner*> STATIC_GetPersistentCharacterSpawnersForLevelSequence(class ALevelSequenceActor* LevelSequenceActor);
	class URsAISystem* STATIC_GetAISystem(class UObject* WorldContext);
	*/
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static TEnumAsByte<ERsAIScriptingMode> GetAIScriptingMode(ARsAIController* AIController);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static bool GetAIMoveTargetLocation(ARsAIController* AIController, FVector& Location);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static bool GetAIMoveTargetActor(ARsAIController* AIController, AActor*& Actor);
	//URsAIGameStateManager* GetAIGameStateManager(class UObject* WorldContext);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static TEnumAsByte<ERsAIGameState> GetAIGameState(UObject* WorldContextObject);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static bool GetAIFocusTargetLocation(ARsAIController* AIController, FVector& FocusLocation);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static TEnumAsByte<ERsAIClass> GetAIClass(ARsAIController* AIController);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static TEnumAsByte<ERsAIAwarenessState> GetAIAwarenessState(ARsAIController* AIController);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static bool GetAIAttackTargetLocation(ARsAIController* AIController, FVector& Location);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static bool GetAIAttackTargetActor(ARsAIController* AIController, AActor*& Actor);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static bool GetAIAttackTarget(AActor* ControlledActor, AActor*& TargetActor, FVector& TargetLocation);
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static TArray<ARsCharacter*> FindAwarenessGroup(ARsAIController* AIController, TEnumAsByte<ERsCharacterType> CharacterType, float Radius);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static FText DebugGenerateSpawnShortcutText();
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static void DebugEnableAI(class UObject* WorldContextObject, bool bEnable);

	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static void ClearPatrolPath(ARsAIController* AIController);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static bool CheckCharacterOnScreenByCapsule(UObject* WorldContext, ARsActor* Character, bool bDebugDraw, float DebugDrawDuration);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static bool CanPlayAnimSequenceOnNavMesh(ARsAIController* AIController, UAnimSequence* Animation);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static bool CanPlayAnimMontageOnNavMesh(ARsAIController* AIController, UAnimMontage* Montage);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static float CalculateRootMotionDisplacement(UAnimSequence* Sequence);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static FVector2D CalculateAIBlendSpaceInput(ARsAIController* AIController, TEnumAsByte<ERsAIBlendspaceInputSource> BlendSpaceType);
	
	UFUNCTION(BlueprintCallable, Category = "RsAIBlueprintLibrary", meta = (WorldContext = "WorldContextObject"))
		static void BecomeAwareOf(ARsAIController* AIController, AActor* ActorToBeAwareOf);
};
