// Fill out your copyright notice in the Description page of Project Settings.

#include "RsWorldMapHologramBase.h"

// Sets default values
ARsWorldMapHologramBase::ARsWorldMapHologramBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARsWorldMapHologramBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARsWorldMapHologramBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

