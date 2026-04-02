#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MollysWorldGameMode.generated.h"

/**
 *  
 */
UCLASS()
class MOLLYSWORLD_API AMollysWorldGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    // Default constructor
    AMollysWorldGameMode();

    // Override BeginPlay
    virtual void BeginPlay() override;
};