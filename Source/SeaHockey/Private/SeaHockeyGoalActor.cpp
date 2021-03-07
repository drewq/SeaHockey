// Fill out your copyright notice in the Description page of Project Settings.


#include "SeaHockeyGoalActor.h"
#include "SeaHockeyPuckActor.h"
#include "Components/BoxComponent.h"
#include "Components/DecalComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SeaHockey/SeaHockeyGameModeBase.h"

// Sets default values
ASeaHockeyGoalActor::ASeaHockeyGoalActor()
{
	OverlapComp = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapComp"));
	OverlapComp->SetHiddenInGame(true);
	RootComponent = OverlapComp;
	OverlapComp->OnComponentBeginOverlap.AddDynamic(this, &ASeaHockeyGoalActor::HandleOverlap);
	
}

// Called when the game starts or when spawned
void ASeaHockeyGoalActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASeaHockeyGoalActor::HandleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<ASeaHockeyPuckActor>(OtherActor))
	{
		//UE_LOG(LogTemp, Warning, TEXT("Goal"))
		ASeaHockeyGameModeBase* GM = Cast<ASeaHockeyGameModeBase>(GetWorld()->GetAuthGameMode());
		if (GM)
		{
			GM->GoalScored(this);
		}
	}
}

uint8 ASeaHockeyGoalActor::GetTeamNumber() const
{
	return TeamNumber;
}
