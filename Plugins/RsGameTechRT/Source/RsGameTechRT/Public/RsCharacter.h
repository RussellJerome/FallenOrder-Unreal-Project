// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RsTechRT/Public/RsActor.h"
#include "StructsAndEnums_RsGameTechRT.h"
#include "RsCharacterDefinition.h"
#include "Components/MeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "RsHealthComponent.h"
#include "RsCharacter.generated.h"

/**
 * 
 */
UCLASS()
class RSGAMETECHRT_API ARsCharacter : public ARsActor
{
	GENERATED_BODY()
public:
	ARsCharacter();

	UPROPERTY(VisibleAnywhere)
	class USkeletalMeshComponent* FacialRig;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class URsHealthComponent* HealthComponent;

	//URsBitStack* ControlStack;
	/*
	struct FScriptMulticastDelegate                    OnCharacterInterrupted;                                   // 0x1878(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCharacterResetPhysics;                                  // 0x1888(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTakeNoDamage;                                           // 0x1898(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHealthChanged;                                          // 0x18A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHitCountThresholdReached;                               // 0x18B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHitCountReset;                                          // 0x18C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReactionEvent;                                          // 0x18D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPostReactionEvent;                                      // 0x18E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCombatStateChangedEvent;                                // 0x18F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnIsInWaterStateChanged;                                  // 0x1908(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	FName HeadBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	float LookAtYawSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	float LookAtPitchSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	float LookAtYawThreshold;
	//struct FScriptMulticastDelegate                    OnInstigatedAnyDamage;                                    // 0x2150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	//struct FScriptMulticastDelegate                    OnInstigatedZeroDamage;                                   // 0x2160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	//struct FScriptMulticastDelegate                    OnAnyNavStateChange;                                      // 0x2170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	//struct FScriptMulticastDelegate                    OnRsHitCollided;                                          // 0x2190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	//struct FScriptMulticastDelegate                    OnRsDidProjectileDamage;                                  // 0x21A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	//FRsDamageInfo LastDamageInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	int CharSyncID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	float CinematicBlendInterp;
	//TEnumAsByte<ECollisionEnabled>                     PreCinematicSkeletalMeshCollisionEnabled;                 // 0x2338(0x0001) (ZeroConstructor, IsPlainOldData)
	
	//class URsCombatStateMachine*                       CombatStateMachine;                                       // 0x2340(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	//class URsPhysicalAnimationComponent*               RsPhysicalAnimationComponent;                             // 0x2348(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	bool bCanReceiveDamageFromPhysicsCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	bool bAttackHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	bool bSkipDeathAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	bool bCanBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	bool bCanParry;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	bool bCanEvade;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	bool bCanDoGlancingBlow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	bool bIgnoresKillPlane;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	bool bAlwaysDeflectProjectiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	bool bForceSlowed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	bool bPreventCombatSuction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	bool bEnableCharacterPhysicsOnCineEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	bool bSkipCinematicBlendInterpReset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	bool bInexpensiveCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	bool bAllowCheapIk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	float AttackDamageMultiplier;

	//TWeakObjectPtr<UAnimMontage> CombatMontage;
	//FGameplayTagContainer InitialAttributeTags;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	URsCharacterDefinition* CharacterDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCharacter")
	URsCharacterDefinition* CharacterDefinition_TempHack;
	
	//FRsFrameDamageTracker FrameDamageTracker;


	//Functions
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		bool WasNavState(ERsNavState State) { return false; };

	//UFUNCTION(BlueprintCallable, Category = "RsCharacter")
	//void UnregisterOnNavStateExited(const struct FScriptDelegate& Delegate, ERsNavState State);
	//void UnregisterOnNavStateEntered(const struct FScriptDelegate& Delegate, ERsNavState State);

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void StartParryEnemyAttack(ARsCharacter* Attacker, ERsCharacterDefense OriginalDefenseType) {};

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void StartGenericDefendEnemyAttack(ARsCharacter* Attacker, ERsCharacterDefense MappedDefenseType) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void StartEvadeEnemyForceAbility(ARsCharacter* Attacker, ERsCharacterDefense OriginalDefenseType) {};
	
	//UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		//void StartEvadeEnemyAttack(ARsCharacter* Attacker, ERsCharacterDefense OriginalDefenseType) {};
	
	//UFUNCTION(BlueprintNativeEvent, Category = "RsCharacter")
		//void StartBlockEnemyAttack(ARsCharacter* Attacker, bool IsStaffAttack, ERsCharacterDefense OriginalDefenseType);
	//void StartBlockEnemyAttack_Implementation(ARsCharacter* Attacker, bool IsStaffAttack, ERsCharacterDefense OriginalDefenseType) {};
	

	//void OnKilledCharacter(class ARsCharacter* Victim);
	//void OnKilledCharacter_Implementation(class ARsCharacter* Victim) {};
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		bool ShouldPlayDeathAnimation() { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void SetWeapon(UMeshComponent* InWeapon, int Index) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void SetVisibility(bool bEnable) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void SetupDamageMaterials(TArray<int> ElementIndices, TArray<UMaterialInterface*> Materials) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void SetSkipReaction(bool enable, TArray<UClass*> ExcludedDamageTypes, bool AllowReactionInForceSlow, bool AllowReactionFromBlockBreak, bool AllowReactionFromUnblockable, bool SkipOnParryReactions) {};
	
	//UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		//void SetOverrideReactionDefinition(URsCharacterReactionDefinition* ReactionDefinition) {};
	
	//UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		//void SetOverrideDefenseDefinition(URsDefenseDefinition* DefenseDefinition) {};
	
	//UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		//void SetOverrideDeathDefinition(URsCharacterDeathDefinition* DeathDefinition) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void SetNavState(ERsNavState NewState) {};

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void SetLookAtTargetComponent(USceneComponent* InLookAtTarget, bool bResetOnReachThreshold) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void SetLookAtTarget(AActor* InLookAtTarget, bool bResetOnReachThreshold) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void SetLastDamageEffectType(ERsDamageEffectType DamageEffectType) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void SetLastDamageCauser(class AActor* DamageCauser) {};

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void SetHitPause(float Duration, float AnimRate, ARsCharacter* OtherActor) {};

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void SetFacialRig(USkeletalMeshComponent* NewFacialRig) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void SetContextualEvaded() {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void SetCombatState(TEnumAsByte<ERsCombatState> NewCombatState) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void SetCinematicBlendInterp(float InterpValue) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void SetBlockMarkerOverrides(float Min, float Max) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void SetBlockCountMarker(int Count) {};

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void SetAttackSwingDirection(ERsAttackSwingDirection Direction) {};

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		bool RsShouldTakeDamage(float Damage, UDamageType* DamageType, AController* EventInstigator, AActor* DamageCauser) { return false; };


	//FRsCharacterDamageModifiers RsGetDamageModifiers(float Damage, const struct FRsDamageParams& DamageParams, class UDamageType* DamageType, class AController* EventInstigator, class AActor* DamageCauser);
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void RotateToDamageCauserDirectional(ERsAttackerDirection InDirection) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void RotateToDamageCauser() {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void RotateToAlignXY(const FVector& AlignToVector, float RotationOffset) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void RotateToAlignDirectionalXY(const FVector& AlignToVector, ERsAttackerDirection InDirection) {};

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void RotateToActorDirectional(AActor* TargetActor, ERsAttackerDirection InDirection) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void RotateToActor(AActor* TargetActor) {};

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void ResetToBestNavState() {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void ResetParry() {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void ResetLookAtTarget() {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void ResetHitCount() {};

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void ResetDamageInfo() {};

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void ResetContextualEvade() {};

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void ResetBlock() {};

	//void RegisterOnNavStateExited(const struct FScriptDelegate& Delegate, ERsNavState State){};
	//void RegisterOnNavStateEntered(const struct FScriptDelegate& Delegate, ERsNavState State);
	//void ReceiveInstigatedZeroDamage(const struct FRsDamageParams& DamageInfo, class AActor* OtherActor, class AActor* WouldBeDamageCauser);
	//void ReceiveInstigatedAnyDamage(float Damage, const struct FRsDamageParams& DamageInfo, class AActor* DamagedActor, class AActor* DamageCauser);
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		bool PlayReactionAnimation(ERsCharacterReaction ReactionType, ERsAttackSwingDirection AttackSwingDirection) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		UAnimMontage* PlayCharacterAnimation(UAnimationAsset* Asset, float BlendInTime, float BlendOutTime, const FName& AnimationSlot, bool PlayRandomAnimation, float StartPosition, float Playrate, float BlendOutTriggerTime, const FVector2D& BlendSpaceInput) { return nullptr; };
	//void OnRevived();
	//void OnReturnToNeutral();

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "RsUiWindow")
		void OnKilledCharacter(class ARsCharacter* Victim);
	void OnKilledCharacter_Implementation(class ARsCharacter* Victim) {};

	//void OnDied(class AActor* DeathActor);
	//void OnCombatContactEvent(class ARsCharacter* Attacker);
	//void OnBlockBreakOtherActor(const struct FRsHitEvent& DefendedAttack, class ARsCharacter* OtherActor);
	//void OnAttackParriedByOtherActor(const struct FRsHitEvent& DefendedAttack, const struct FHitResult& HitSweep, class ARsCharacter* OtherActor);
	//void OnAttackEvadedByOtherActor(const struct FRsHitEvent& DefendedAttack, const struct FHitResult& HitSweep, class ARsCharacter* OtherActor);
	//void OnAttackCounteredByOtherActor(const struct FRsHitEvent& DefendedAttack, const struct FHitResult& HitSweep, class ARsCharacter* OtherActor);
	//void OnAttackBlockedByOtherActor(const struct FRsHitEvent& DefendedAttack, const struct FHitResult& HitSweep, class ARsCharacter* OtherActor);
	//void K2_TriggerReaction(class AActor* Attacker, const struct FRsReactionParameters& ReactionParameters, const struct FRotator& RotateToward, bool AlignToAttacker);
	//void K2_ParriedEnemyAttack(class ARsCharacter* Attacker, class AActor* DamageCauser, const struct FRsDamageParams& DamageParams);
	//void K2_EnableHitCollider(const struct FName& ColliderTag, const struct FRsHitEvent& InHitEvent);
	//void K2_DisableHitCollider(const struct FName& ColliderTag);
	//void K2_CounteredEnemyAttack(class ARsCharacter* Attacker, class AActor* DamageCauser, const struct FRsDamageParams& DamageParams);
	//void K2_BlockedEnemyAttack(class ARsCharacter* Attacker, class AActor* DamageCauser, const struct FRsDamageParams& DamageParams);
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		bool IsOverCurrentBlockCountMarker() { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		bool IsNavState(ERsNavState State) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		bool IsInWater() { return false; };

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		bool IsInCombatState(TEnumAsByte<ERsCombatState> CombatState) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		bool IsHostileTo(AActor* OtherActor) { return false; };

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		bool IsHeadTrackingPaused() { return false; };

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		bool IsFullyAwareOf(AActor* OtherActor) { return false; };

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		bool IsFriendlyTo(AActor* OtherActor) { return false; };

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		bool IsEqualOrOverCurrentBlockCountMarker() { return false; };

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		bool IsAlive() { return false; };

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		bool InNonProcessTopologyNavState() { return false; };

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void IncrementBlockCount(int Increment) {};

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void ImpulsePush(AActor* DamageCauser, float Duration, float Distance) {};

	//UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		//UMeshComponent* GetWeapon(int Index) { UMeshComponent::UMeshComponent(); };
	
	UFUNCTION(BlueprintPure, Category = "RsCharacter")
		float GetTimeInCurrentNavState() { return 1.0; };
	
	UFUNCTION(BlueprintPure, Category = "RsCharacter")
		bool GetSkipReaction() { return false; };

	UFUNCTION(BlueprintPure, Category = "RsCharacter")
		ERsCharacterReaction GetReactionFromDamageType(UClass* DmgClass) { return ERsCharacterReaction(); };
	
	UFUNCTION(BlueprintPure, Category = "RsCharacter")
		ERsNavState GetPreviousNavState() { return ERsNavState(); };

	UFUNCTION(BlueprintPure, Category = "RsCharacter")
		TEnumAsByte<ERsCombatState> GetPrevCombatState() { return TEnumAsByte<ERsCombatState>(); };
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void GetParryCountStats(int MaxParryCount, int CurrentParryCount) {};

	//UFUNCTION(BlueprintCallable, Category = "RsCharacter")
	//URsOffenseComponent* GetOffenseComponent();

	UFUNCTION(BlueprintPure, Category = "RsCharacter")
		ERsAttackSwingDirection GetLastDamageSwingDirection() { return ERsAttackSwingDirection(); };

	UFUNCTION(BlueprintPure, Category = "RsCharacter")
		AController* GetLastDamageInstigator() { return nullptr; };
	//struct FRsHitEvent GetLastDamageHitEvent();

	UFUNCTION(BlueprintPure, Category = "RsCharacter")
		AActor* GetLastDamageCauser() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "RsCharacter")
		ARsCharacter* GetInfoForAttackToDefend(ERsAttackSwingDirection AttackerSwingDirection) { return nullptr; };
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void GetHitCountStats(int MaxHitCount, int CurrentCount, int InverseHitCount) {};

	//URsHealthComponent* GetHealthComponent();
	UFUNCTION(BlueprintPure, Category = "RsCharacter")
		USkeletalMeshComponent* GetFacialRig() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "RsCharacter")
		ERsAttackSwingDirection GetDefendSwingDirection() { return ERsAttackSwingDirection(); };

	UFUNCTION(BlueprintPure, Category = "RsCharacter")
		ARsCharacter* GetDefendAttacker() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "RsCharacter")
		ERsNavState GetCurrentNavState() { return ERsNavState(); };
	
	UFUNCTION(BlueprintPure, Category = "RsCharacter")
		int GetCurrentHitCount() { return 1; };
	
	UFUNCTION(BlueprintPure, Category = "RsCharacter")
		TEnumAsByte<ERsCombatState> GetCombatState() { return TEnumAsByte<ERsCombatState>(); };

	UFUNCTION(BlueprintPure, Category = "RsCharacter")
		URsCharacterDefinition* GetCharacterDefinition() { return nullptr; };
	
	UFUNCTION(BlueprintPure, Category = "RsCharacter")
		float GetBlockMeter() { return 1.0; };

	UFUNCTION(BlueprintPure, Category = "RsCharacter")
		float GetBlockMarker() { return 1.0; };

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void GetBlockCountStats(int MaxBlockCount, int CurrentBlockCount, int InverseBlockCount) {};

	UFUNCTION(BlueprintPure, Category = "RsCharacter")
		ERsCharacterDefense GetAttackVictimDefendType() {return ERsCharacterDefense();};

	UFUNCTION(BlueprintPure, Category = "RsCharacter")
		ERsAttackSwingDirection GetAttackSwingDirection() { return ERsAttackSwingDirection(); };

	UFUNCTION(BlueprintPure, Category = "RsCharacter")
		AActor* GetAttackingTarget() { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void EnableAllDamageMaterials(float Opacity, float EmissiveIntensity) {};

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void DropWeapon() {};

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void Dismember(TArray<FDismembermentConfiguration> configs, bool MasterPoseComponentMode) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		ERsCharacterDefense DetermineDefenseType(ARsCharacter* Attacker, ERsCharacterDefense DefendType) { return ERsCharacterDefense(); };
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void DeathMontageEnded(UAnimMontage* Montage, bool interrupted) {};

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		bool CanTakeDamageFromKillPlane() { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		bool CanDoContextualEvade() { return false; };

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void CancelFullBodyMontages(float BlendOutTime) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void CancelAllMontages(float BlendOutTime) {};

	UFUNCTION(BlueprintCallable, Category = "RsCharacter")
		void AddPhysicalAnimationTickDependency(USkeletalMeshComponent* NewDependent, bool ForceAlwaysDependOnPhysicalAnimation) {};
};
