// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RsSoftStateObject.h"
#include "StructsAndEnums_RsGameTechRT.h"
#include "GameFramework/DamageType.h"
#include "RsCharacter.h"

#include "RsCombatState.generated.h"

/**
 * 
 */
UCLASS()
class RSGAMETECHRT_API URsCombatState : public URsSoftStateObject
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCombatState")
	FRsCharacterAnimationData                   InstancedAnimData;                                        // 0x0098(0x0048) (BlueprintVisible, BlueprintReadOnly)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCombatState")
	class URsSyncDefinition*                           ActiveSyncDefinition;                                     // 0x00E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsCombatState")
	bool                                               bHasTakeDamageImplementation;                             // 0x0110(0x0001) (ZeroConstructor, IsPlainOldData)

	UFUNCTION(BlueprintCallable, Category = "RsCombatState")
		void SetStopAnimOnAbort(bool StopAnimOnAbort) {};
	
	UFUNCTION(BlueprintNativeEvent, Category = "RsCombatState")
		bool RsShouldTakeDamage(class ARsCharacter* DamageTaker, float Damage, class UObject* DamageType, class AController* EventInstigator, class AActor* DamageCauser);
	bool RsShouldTakeDamage_Implementation(class ARsCharacter* DamageTaker, float Damage, class UObject* DamageType, class AController* EventInstigator, class AActor* DamageCauser) { return false; };
	
	UFUNCTION(BlueprintCallable, Category = "RsCombatState", meta = (WorldContext = "ContextObject"))
		static void PopulateActionNameList(class UObject* ContextObject, TArray<FName> Options) {};

	//UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "RsCombatState")
	//void OverrideSyncData(class ARsCharacter* TheAttacker, class URsSyncDefinition* CurrentSyncDefinition, class AActor* CurrentMaster, TArray<class AActor*> CurrentSlaves, class URsSyncDefinition** NewSyncDefinition, class AActor** NewMaster, TArray<class AActor*>* NewSlaves);
	//void OverrideSyncData_Implementation(class ARsCharacter* TheAttacker, class URsSyncDefinition* CurrentSyncDefinition, class AActor* CurrentMaster, TArray<class AActor*> CurrentSlaves, class URsSyncDefinition** NewSyncDefinition, class AActor** NewMaster, TArray<class AActor*>* NewSlaves) {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "RsCombatState")
	void OverrideAnimationData(class ARsCharacter* TheAttacker, const FRsCharacterAnimationData& CurrentAnimationData, FRsCharacterAnimationData NewAnimationData);
	void OverrideAnimationData_Implementation(class ARsCharacter* TheAttacker, const FRsCharacterAnimationData& CurrentAnimationData, FRsCharacterAnimationData NewAnimationData) {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "RsCombatState")
	void OnTakeDamage(class ARsCharacter* TheDefender, float Damage, const FRsDamageParams& DamageInfo, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnTakeDamage_Implementation(class ARsCharacter* TheDefender, float Damage, const FRsDamageParams& DamageInfo, class AController* InstigatedBy, class AActor* DamageCauser) {};
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "RsCombatState")
	void OnActionAnimationEnded(class ARsCharacter* ActionOwner);
	void OnActionAnimationEnded_Implementation(class ARsCharacter* ActionOwner) {};

	UFUNCTION(BlueprintCallable, Category = "RsCombatState")
		void CompleteThisActionButContinueAnimation() {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCombatState")
		void CompleteThisAction() {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCombatState")
		void ChainToSyncAnimation(class URsSyncDefinition* SyncDefinition, TArray<class AActor*> Slaves, class UAnimationAsset* OverrideAnimation, const struct FVector2D& MasterBlendSpaceInput, TArray<struct FVector2D> SlaveBlendSpaceinputs, int NewSyncGroupdID, class URsSyncInstance* MasterInstance, TArray<class URsSlaveSyncInstance*> SlaveInstanceArray) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCombatState")
		class UAnimMontage* ChainAnimation(const struct FRsCharacterAnimationData& InAnimData) { return nullptr; };
	
	UFUNCTION(BlueprintCallable, Category = "RsCombatState")
		void CancelThisActionButContinueAnimation() {};
	
	UFUNCTION(BlueprintCallable, Category = "RsCombatState")
		void CancelThisAction() {};
};
