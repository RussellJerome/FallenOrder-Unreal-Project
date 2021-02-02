// Fill out your copyright notice in the Description page of Project Settings.

#include "SwProjectile.h"

// Sets default values
ASwProjectile::ASwProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	AttachToMuzzleComponent = CreateDefaultSubobject<USceneComponent>(TEXT("AttachToMuzzleComponent"));

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));

	ProjectileVisual = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ProjectileVisual"));
}