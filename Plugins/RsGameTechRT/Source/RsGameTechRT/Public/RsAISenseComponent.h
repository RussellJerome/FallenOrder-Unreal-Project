// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StructsAndEnums_RsGameTechRT.h"
#include "RsAISenseComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RSGAMETECHRT_API URsAISenseComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URsAISenseComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsAISenseComponent")
	TArray<class URsAISensorDefinition*>               DefaultSensorDefinitions;                                 // 0x0178(0x0010) (Edit, ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsAISenseComponent")
	TArray<class URsAISensorDefinition*>               SensorDefinitions;                                        // 0x0188(0x0010) (ZeroConstructor, Transient)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsAISenseComponent")
	TArray<class UClass*>                              StimuliClasses;                                           // 0x0198(0x0010) (Edit, ZeroConstructor)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsAISenseComponent")
	struct FRsAIScoreDecayCurve                        FullyAwareToPartiallyAwareCurve;                          // 0x01A8(0x0010) (Edit)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsAISenseComponent")
	struct FRsAIScoreDecayCurve                        PartiallyAwareToUnawareCurve;                             // 0x01B8(0x0010) (Edit)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsAISenseComponent")
	struct FRsAIAwarenessStateSettings_Alert           AlertAwarenessState;                                      // 0x01C8(0x0018) (Edit)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsAISenseComponent")
	struct FRsAIAwarenessStateSettings_Aggro           AggroAwarenessState;                                      // 0x01E0(0x0010) (Edit)
	/*
	void OwnerDiedHandler(class AActor* DeadActor);
	void OnFactionChanged(class URsTargetableComponent* TargetableComponent);
	void OnActorAwareOfTookAnyOrNoDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnActorAwareOfDestroyed(class AActor* DestroyedActor);
	*/
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
