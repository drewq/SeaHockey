
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SeaHockeyPuckActor.generated.h"

class UStaticMeshComponent;

UCLASS()
class SEAHOCKEY_API ASeaHockeyPuckActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASeaHockeyPuckActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* StaticMeshComp;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
