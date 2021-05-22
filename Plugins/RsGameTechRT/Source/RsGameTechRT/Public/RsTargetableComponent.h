// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GameplayTagAssetInterface.h"
#include "RsTargetableComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RSGAMETECHRT_API URsTargetableComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URsTargetableComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsTargetableComponent")
	FGameplayTag DefaultFactionTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsTargetableComponent")
	bool bCanBetargeted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsTargetableComponent")
	bool bCanBePlayerZTargeted;

	UFUNCTION(BlueprintCallable, Category = "RsTargetableComponent")
	void SetFactionTag(const FGameplayTag& NewFactionTag) {};

	UFUNCTION(BlueprintCallable, Category = "RsTargetableComponent")
	void ResetFactionTagToDefault() {};

	UFUNCTION(Blueprintpure, Category = "RsTargetableComponent")
	FGameplayTag GetFactionTag() { return FGameplayTag::FGameplayTag(); };

	UFUNCTION(Blueprintpure, Category = "RsTargetableComponent")
	FGameplayTag GetDefaultFactionTag() { return FGameplayTag::FGameplayTag(); };

	UFUNCTION(BlueprintCallable, Category = "RsTargetableComponent", meta = (WorldContext = "WorldContextObject"))
	static void GetAllTargetableActors(class UObject* WorldContextObject, TArray<class AActor*> OutActors) {};
	
	UFUNCTION(BlueprintCallable, Category = "RsTargetableComponent", meta = (WorldContext = "WorldContextObject"))
		static void GetAllHostileTargetableActors(class UObject* WorldContextObject, const FGameplayTag& FactionTag, TArray<class AActor*> OutActors) {};

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
