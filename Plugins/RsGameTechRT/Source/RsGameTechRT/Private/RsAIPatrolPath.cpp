// Fill out your copyright notice in the Description page of Project Settings.

#include "RsAIPatrolPath.h"

// Sets default values
ARsAIPatrolPath::ARsAIPatrolPath()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARsAIPatrolPath::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARsAIPatrolPath::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

