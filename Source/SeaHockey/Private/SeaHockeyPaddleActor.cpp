// Fill out your copyright notice in the Description page of Project Settings.


#include "SeaHockeyPaddleActor.h"

// Sets default values
ASeaHockeyPaddleActor::ASeaHockeyPaddleActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	StaticMeshComp->SetSimulatePhysics(true);
	StaticMeshComp->BodyInstance.bLockRotation = true;
}

// Called when the game starts or when spawned
void ASeaHockeyPaddleActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASeaHockeyPaddleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

