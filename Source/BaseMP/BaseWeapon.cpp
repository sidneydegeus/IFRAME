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
	// i'm not sure... do I need to replicate this?
	//if (CanUseWeapon()) {
	//	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, HasAuthority() ? TEXT("Attack Server!") : TEXT("Attack Client!"));
	//	if (Role == ROLE_Authority) {
	//		// call server
	//		FireWeapon();
	//	}
	//}

	if (Role < ROLE_Authority) {
		UseWeaponServer();
	}
	UseWeaponEvent();
}

void ABaseWeapon::UseWeaponServer_Implementation() {
	UseWeapon();
}

bool ABaseWeapon::UseWeaponServer_Validate() {
	return CanUseWeapon();
}

void ABaseWeapon::UseWeaponEvent_Implementation() {
}

bool ABaseWeapon::CanUseWeapon() {
	return true;
}
