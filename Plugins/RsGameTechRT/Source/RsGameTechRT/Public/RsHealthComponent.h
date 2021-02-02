// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RsHealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RSGAMETECHRT_API URsHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URsHealthComponent();

	/*
	struct FScriptMulticastDelegate                    OnDiedEvent_Internal;                                     // 0x0170(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnDiedEvent;                                              // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPostDeathEvent;                                         // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRevivedEvent;                                           // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	*/
	//unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "URsHealthComponent")
	float                                              MaxHealth;                                                // 0x01B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	//unsigned char                                      UnknownData01[0xC];

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
