// Fill out your copyright notice in the Description page of Project Settings.


#include "SeaHockeyTableActor.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ASeaHockeyTableActor::ASeaHockeyTableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	RootComponent = StaticMeshComp;
	
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->SetRelativeRotation(FRotator(-90.f, 0.f, 90.f));
	SpringArmComp->TargetArmLength = 150.f;

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	CameraComp->SetupAttachment(SpringArmComp);
}

// Called when the game starts or when spawned
void ASeaHockeyTableActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASeaHockeyTableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

