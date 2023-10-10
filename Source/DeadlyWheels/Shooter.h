// Copyright Deadly Wheels

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Shooter.generated.h"


class ATurretProjectile;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DEADLYWHEELS_API UShooter : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UShooter();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
	void Shoot();

private:

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ProjectileToSpawn;

	//UPROPERTY(EditAnywhere)
	//TSubclassOf<AActor> spawnPositionActor;
	
};
