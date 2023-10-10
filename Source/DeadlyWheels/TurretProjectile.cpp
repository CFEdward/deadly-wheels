// Copyright Deadly Wheels


#include "TurretProjectile.h"

#include "Physics/ImmediatePhysics/ImmediatePhysicsShared/ImmediatePhysicsCore.h"

// Sets default values
ATurretProjectile::ATurretProjectile() :
	ImpulseStrength(1000.f)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectile"));
	RootComponent = Mesh;
}

// Called when the game starts or when spawned
void ATurretProjectile::BeginPlay()
{
	Super::BeginPlay();

	Mesh->AddImpulse(GetActorForwardVector() * ImpulseStrength);
}

// Called every frame
void ATurretProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

