#include "ActorToSpawn.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"

// 디폴트값 설정
AActorToSpawn::AActorToSpawn()
{
	// 이 액터가 프레임마다 Tick()을 호출하도록 설정합니다.  이 설정이 필요 없는 경우 비활성화하면 퍼포먼스가 향상됩니다.
	PrimaryActorTick.bCanEverTick = true;

	//자체 디폴트 컴포넌트 생성
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	ParticleComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleComp"));

	//컴포넌트 어태치 및 피직스 설정
	SphereComp->SetupAttachment(RootComponent);
	SphereComp->SetSimulatePhysics(true);

	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	StaticMeshComp->AttachToComponent(SphereComp, FAttachmentTransformRules::KeepRelativeTransform);
	ParticleComp->AttachToComponent(StaticMeshComp, FAttachmentTransformRules::KeepRelativeTransform);

	//스태틱 메시에 맞추어 스피어 반경을 더 작은 크기로 설정
	SphereComp->SetSphereRadius(16.0f);

	//스피어 반경에 맞추어 스태틱 메시 스케일 및 위치 설정
	StaticMeshComp->SetRelativeLocation(FVector(0.0, 0.0, -12.0f));
	StaticMeshComp->SetRelativeScale3D(FVector(0.25, 0.25, 0.25));
}

// 게임 시작 또는 스폰 시 호출
void AActorToSpawn::BeginPlay()
{
	Super::BeginPlay();

}

// 프레임마다 호출
void AActorToSpawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}