#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorToSpawn.generated.h"

UCLASS()
class MYPROJECT2_API AActorToSpawn : public AActor
{
	GENERATED_BODY()

public:
	// 이 액터 프로퍼티의 디폴트값 설정
	AActorToSpawn();

protected:
	// 게임 시작 또는 스폰 시 호출
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USphereComponent* SphereComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParticleSystemComponent* ParticleComp;

public:
	// 프레임마다 호출
	virtual void Tick(float DeltaTime) override;
};