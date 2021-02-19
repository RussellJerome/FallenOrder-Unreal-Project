// Fill out your copyright notice in the Description page of Project Settings.

#include "SwPhotomodeCameraController.h"

// Sets default values
ASwPhotomodeCameraController::ASwPhotomodeCameraController()
{
	//PhotoLightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("PhotoLightComponent"));
	PhotoLightVisualGuide = CreateDefaultSubobject<USceneComponent>(TEXT("PhotoLightVisualGuide"));
	FocalPlaneComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FocalPlaneComponent"));
}