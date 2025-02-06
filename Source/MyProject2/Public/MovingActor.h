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

	// �̵� �ӵ� (����/��)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MovingSpeed;

	// �պ� �̵� ���� (�������������� �ִ� �̵� �Ÿ�)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MaxRange;

	// ���Ͱ� ���� ���� ������ ��ġ�ߴ� ���� ��ġ
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	FVector StartLocation;

	// �̵� ���� (1 �Ǵ� -1)
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
