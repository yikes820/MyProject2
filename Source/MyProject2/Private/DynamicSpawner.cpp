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

    // 일정 시간마다 스폰 실행
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

        // 스폰된 액터를 배열에 추가
        if (SpawnedPlatform)
        {
            SpawnedPlatforms.Add(SpawnedPlatform);
            // 일정 시간 후에 삭제
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
