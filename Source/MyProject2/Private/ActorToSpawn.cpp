#include "ActorToSpawn.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"

// ����Ʈ�� ����
AActorToSpawn::AActorToSpawn()
{
	// �� ���Ͱ� �����Ӹ��� Tick()�� ȣ���ϵ��� �����մϴ�.  �� ������ �ʿ� ���� ��� ��Ȱ��ȭ�ϸ� �����ս��� ���˴ϴ�.
	PrimaryActorTick.bCanEverTick = true;

	//��ü ����Ʈ ������Ʈ ����
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	ParticleComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleComp"));

	//������Ʈ ����ġ �� ������ ����
	SphereComp->SetupAttachment(RootComponent);
	SphereComp->SetSimulatePhysics(true);

	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	StaticMeshComp->AttachToComponent(SphereComp, FAttachmentTransformRules::KeepRelativeTransform);
	ParticleComp->AttachToComponent(StaticMeshComp, FAttachmentTransformRules::KeepRelativeTransform);

	//����ƽ �޽ÿ� ���߾� ���Ǿ� �ݰ��� �� ���� ũ��� ����
	SphereComp->SetSphereRadius(16.0f);

	//���Ǿ� �ݰ濡 ���߾� ����ƽ �޽� ������ �� ��ġ ����
	StaticMeshComp->SetRelativeLocation(FVector(0.0, 0.0, -12.0f));
	StaticMeshComp->SetRelativeScale3D(FVector(0.25, 0.25, 0.25));
}

// ���� ���� �Ǵ� ���� �� ȣ��
void AActorToSpawn::BeginPlay()
{
	Super::BeginPlay();

}

// �����Ӹ��� ȣ��
void AActorToSpawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}