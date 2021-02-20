// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SwAIFightComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SWGAME_API USwAIFightComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USwAIFightComponent();
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCosmetic, Category = "SwAIFightComponent")
	void OnOwnerRevived(class AActor* RevivedActor);
	void OnOwnerRevived_Implementation(class AActor* RevivedActor) {};

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
