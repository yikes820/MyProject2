#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorToSpawn.generated.h"

UCLASS()
class MYPROJECT2_API AActorToSpawn : public AActor
{
	GENERATED_BODY()

public:
	// �� ���� ������Ƽ�� ����Ʈ�� ����
	AActorToSpawn();

protected:
	// ���� ���� �Ǵ� ���� �� ȣ��
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USphereComponent* SphereComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParticleSystemComponent* ParticleComp;

public:
	// �����Ӹ��� ȣ��
	virtual void Tick(float DeltaTime) override;
};