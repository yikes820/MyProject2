#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingActor.generated.h"

UCLASS()
class MYPROJECT2_API AMovingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AMovingActor();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* MeshComponent;

	// 이동 속도 (유닛/초)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MovingSpeed;

	// 왕복 이동 범위 (시작점에서부터 최대 이동 거리)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MaxRange;

	// 액터가 게임 시작 시점에 위치했던 시작 위치
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	FVector StartLocation;

	// 이동 방향 (1 또는 -1)
	UPROPERTY(VisibleAnywhere, Category = "Movement")
	int32 MoveDirection;
	
protected:
	USceneComponent* SceneRoot;
	UStaticMeshComponent* StaticComp;

	

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void ToggleVisibility();
	void ChangePosition();


private:
	FTimerHandle VisibilityTimerHandle;
	FTimerHandle PositionChangeTimerHandle;

};
