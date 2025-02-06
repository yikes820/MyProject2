#include "MovingActor.h"


AMovingActor::AMovingActor()
{

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	StaticComp->SetupAttachment(SceneRoot);

	//' / Game / StarterContent / Architecture / Floor_400x400.Floor_400x400'

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Architecture/Floor_400x400.Floor_400x400"));
	if (MeshAsset.Succeeded())
	{
		StaticComp->SetStaticMesh(MeshAsset.Object);
	}
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("/Game/StarterContent/Materials/M_Wood_Pine"));
	if (MaterialAsset.Succeeded())
	{
		StaticComp->SetMaterial(0, MaterialAsset.Object);
	}

	PrimaryActorTick.bCanEverTick = true;

	StartLocation = FVector::ZeroVector;
	MaxRange = 300.0f;
	MovingSpeed = 200.0f;
	MoveDirection = 1;
}


void AMovingActor::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();

	// 일정 시간마다 ToggleVisibility 실행
	GetWorld()->GetTimerManager().SetTimer(VisibilityTimerHandle, this, &AMovingActor::ToggleVisibility, 2.0f, true);

	// 일정 시간마다 ChangePosition 실행
	GetWorld()->GetTimerManager().SetTimer(PositionChangeTimerHandle, this, &AMovingActor::ChangePosition, 3.0f, true);
}

void AMovingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const float CurrentX = GetActorLocation().X;
	const float DeltaMovement = MovingSpeed * DeltaTime * MoveDirection;
	float NewX = CurrentX + DeltaMovement;

	const float DistanceFromStart = FMath::Abs(NewX - StartLocation.X);
	if (DistanceFromStart > MaxRange)
	{
		const float Overshoot = DistanceFromStart - MaxRange;
		NewX -= Overshoot * MoveDirection;
		MoveDirection *= -1;
	}

	FVector NewLocation = GetActorLocation();
	NewLocation.X = NewX;
	SetActorLocation(NewLocation);

}

void AMovingActor::ToggleVisibility()
{
	SetActorHiddenInGame(!IsHidden());
	SetActorEnableCollision(!IsHidden());
}

void AMovingActor::ChangePosition()
{
	FVector RandomOffset = FVector(FMath::RandRange(-100, 100), FMath::RandRange(-100, 100), 0);
	SetActorLocation(StartLocation + RandomOffset);
}



