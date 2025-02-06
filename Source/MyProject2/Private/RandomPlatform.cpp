// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomPlatform.h"

// Sets default values
ARandomPlatform::ARandomPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void ARandomPlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARandomPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

