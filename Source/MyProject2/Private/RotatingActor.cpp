#include "RotatingActor.h"

ARotatingActor::ARotatingActor()
{
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	StaticComp->SetupAttachment(SceneRoot);


	PrimaryActorTick.bCanEverTick = true;
	RotationSpeed = 100.0f;
}

void ARotatingActor::BeginPlay()
{
	Super::BeginPlay();
	SetActorScale3D(FVector(1.0f));
}

void ARotatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!FMath::IsNearlyZero(RotationSpeed))
	{
		AddActorLocalRotation(FRotator(0.0f, RotationSpeed * DeltaTime, 0.0f));
	}
}
