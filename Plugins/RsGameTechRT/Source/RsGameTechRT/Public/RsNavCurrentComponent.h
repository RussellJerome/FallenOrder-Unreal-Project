// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RsNavCurrentComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RSGAMETECHRT_API URsNavCurrentComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URsNavCurrentComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsNavCurrentComponent")
	struct FVector                                     Direction;                                                // 0x0170(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RsNavCurrentComponent")
	float                                              Intensity;                                                // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
