// Fill out your copyright notice in the Description page of Project Settings.

#include "RsActor.h"

// Sets default values
ARsActor::ARsActor()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARsActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARsActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARsActor::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

