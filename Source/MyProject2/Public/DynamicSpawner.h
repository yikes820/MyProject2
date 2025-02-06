#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DynamicSpawner.generated.h"

UCLASS()
class MYPROJECT2_API ADynamicSpawner : public AActor
{
    GENERATED_BODY()

public:
    ADynamicSpawner();

protected:
    virtual void BeginPlay() override;
    void SpawnActors();

private:
    UPROPERTY(EditAnywhere, Category = "Spawning")
    TSubclassOf<class ARandomPlatform> RandomPlatformClass;

    UPROPERTY(EditAnywhere, Category = "Spawning")
    int32 NumActorsToSpawn = 5;

    UPROPERTY(EditAnywhere, Category = "Spawning")
    float SpawnInterval = 5.0f;

    UPROPERTY(EditAnywhere, Category = "Spawning")
    FVector SpawnLocationMin = FVector(-1000.0f, -1000.0f, 300.0f);

    // ���� ��ġ �ִ밪
    UPROPERTY(EditAnywhere, Category = "Spawning")
    FVector SpawnLocationMax = FVector(1000.0f, 1000.0f, 300.0f);

    UPROPERTY(EditAnywhere, Category = "Spawning")
    float SpawnLifetime; // ������ ������ ���� �ð�

    FTimerHandle SpawnTimerHandle;

	TArray<ARandomPlatform*> SpawnedPlatforms;
};
