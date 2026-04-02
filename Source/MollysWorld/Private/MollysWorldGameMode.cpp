// Implementation for MollysWorldGameMode

#include "MollysWorldGameMode.h"

AMollysWorldGameMode::AMollysWorldGameMode()
{
    // Set default pawn class to our character
    DefaultPawnClass = AMollysWorldCharacter::StaticClass();
}

void AMollysWorldGameMode::BeginPlay()
{
    Super::BeginPlay();
    // Additional game start logic
}