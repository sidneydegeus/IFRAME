// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseWeapon.h"

// Sets default values
ABaseWeapon::ABaseWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	RootComponent = SkeletalMeshComponent;
}



// Called when the game starts or when spawned
void ABaseWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

// Called every frame
void ABaseWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseWeapon::UseWeapon() {
	if (Role < ROLE_Authority) {
		UseWeaponServer();
	}
	if (Role == ROLE_Authority) {
		UseWeaponEvent();
		//WeaponAnimationMulticast();
		//multicast  event
	}

	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, HasAuthority() ? TEXT("Attack Server!") : TEXT("Attack Client!"));
}

void ABaseWeapon::UseWeaponServer_Implementation() {
	UseWeapon();
}

bool ABaseWeapon::UseWeaponServer_Validate() {
	return CanUseWeapon();
}

void ABaseWeapon::WeaponAnimationMulticast_Implementation() {
	WeaponAnimationEvent();
}

void ABaseWeapon::WeaponAnimationEvent_Implementation() {
	//empty for blueprint to implement
}

void ABaseWeapon::UseWeaponEvent_Implementation() {
	//empty for blueprint to implement
}

bool ABaseWeapon::CanUseWeapon() {
	return true;
}
