// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SeaHockeyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SEAHOCKEY_API ASeaHockeyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	ASeaHockeyGameModeBase();

	void GoalScored(AActor* GoalActor);

	UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
	void OnGoalScored(AActor* GoalActor);
	
};
