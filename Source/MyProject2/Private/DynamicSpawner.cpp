#include "DynamicSpawner.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "RandomPlatform.h"

ADynamicSpawner::ADynamicSpawner()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ADynamicSpawner::BeginPlay()
{
    Super::BeginPlay();

    // ���� �ð����� ���� ����
    GetWorld()->GetTimerManager().SetTimer(SpawnTimerHandle, this, &ADynamicSpawner::SpawnActors, SpawnInterval, true);
}

void ADynamicSpawner::SpawnActors()
{
    for (int i = 0; i < NumActorsToSpawn; i++)
    {
        FVector SpawnLocation = FVector(
            FMath::RandRange(SpawnLocationMin.X, SpawnLocationMax.X),
            FMath::RandRange(SpawnLocationMin.Y, SpawnLocationMax.Y),
            FMath::RandRange(SpawnLocationMin.Z, SpawnLocationMax.Z)
        );

        FRotator SpawnRotation = FRotator(0, FMath::RandRange(0, 360), 0);

        ARandomPlatform* SpawnedPlatform = GetWorld()->SpawnActor<ARandomPlatform>(RandomPlatformClass, SpawnLocation, SpawnRotation);

        // ������ ���͸� �迭�� �߰�
        if (SpawnedPlatform)
        {
            SpawnedPlatforms.Add(SpawnedPlatform);
            // ���� �ð� �Ŀ� ����
            FTimerHandle DeletionTimerHandle;
            GetWorld()->GetTimerManager().SetTimer(DeletionTimerHandle, [this, SpawnedPlatform]()
                {
                    if (SpawnedPlatform)
                    {
                        SpawnedPlatform->Destroy();
                        SpawnedPlatforms.Remove(SpawnedPlatform);
                    }
                }, SpawnLifetime, false);
        }
    }
}
