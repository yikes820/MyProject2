#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotatingActor.generated.h"

UCLASS()
class MYPROJECT2_API ARotatingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ARotatingActor();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category="RotatingActor|Components")
	USceneComponent* SceneRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RotatingActor|Components")
	UStaticMeshComponent* StaticComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "RotatingActor|Properties")
	float RotationSpeed;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
