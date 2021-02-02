// Fill out your copyright notice in the Description page of Project Settings.

#include "RsCharacter.h"
#include "Components/SkeletalMeshComponent.h"
// Sets default values

ARsCharacter::ARsCharacter()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	FacialRig = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FacialRig"));
	HealthComponent = CreateDefaultSubobject<URsHealthComponent>(TEXT("HealthComponent"));
}