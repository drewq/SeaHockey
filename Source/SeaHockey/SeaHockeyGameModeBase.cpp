// Copyright Epic Games, Inc. All Rights Reserved.


#include "SeaHockeyGameModeBase.h"

ASeaHockeyGameModeBase::ASeaHockeyGameModeBase()
{
}

void ASeaHockeyGameModeBase::GoalScored(AActor* GoalActor)
{
	if (GoalActor)
	{
		// Determine goal and add points
		OnGoalScored(GoalActor);
	}
}
