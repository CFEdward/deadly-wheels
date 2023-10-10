// Copyright Deadly Wheels


#include "Shooter.h"

#include "DeadlyWheelsSportsCar.h"
#include "TurretProjectile.h"

// Sets default values for this component's properties
UShooter::UShooter()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UShooter::BeginPlay()
{
	Super::BeginPlay();
	
	
}


// Called every frame
void UShooter::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// ...
}

void UShooter::Shoot()
{
	/*
	AActor* Owner = GetOwner();
	//how to avoid hardcoding the offest but instead referencing a position of a child actor of the turret?
	FVector offset = FVector(45, 0, 25);
	FVector SpawnLocation = Owner->GetActorLocation() + offset;
    FRotator SpawnRotation = Owner->GetActorRotation();
	FActorSpawnParameters SpawnParams;
	AActor* spawnedProjectile = GetWorld()->SpawnActor<AActor>(ProjectileToSpawn, SpawnLocation, SpawnRotation, SpawnParams);
	//any better and easier way to add explosive force forward? GetActorForwardVector() didn't work. UE did not recognise it
	UPrimitiveComponent* RootComp = Cast<UStaticMeshComponent>(spawnedProjectile->GetRootComponent());
	RootComp->AddForce(UKismetMathLibrary::Vector_Forward() * 1000000.0f * RootComp->GetMass());
	*/
	
	UWorld* World = GetWorld();

	const ADeadlyWheelsSportsCar* PickupTruck = Cast<ADeadlyWheelsSportsCar>(GetOwner());
	if (const USceneComponent* FirePoint = PickupTruck->GetFirePoint())
	{
		if (ProjectileToSpawn)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = GetOwner();

			if (World)
			{
				World->SpawnActor<ATurretProjectile>(ProjectileToSpawn, FirePoint->GetComponentLocation(), FirePoint->GetComponentRotation(), SpawnParams);
			}
		}
	}
}

