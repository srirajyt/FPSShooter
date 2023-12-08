// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SimpleShooter_devtvGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_DEVTV_API ASimpleShooter_devtvGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	virtual void PawnKilled(APawn* PawnKilled);
	
};
