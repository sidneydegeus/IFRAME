// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseCharacter.h"
#include "Engine.h"

void ABaseCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ABaseCharacter, Health);
}

// Sets default values
ABaseCharacter::ABaseCharacter() {
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay() {
	Super::BeginPlay();

}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABaseCharacter::UpdateCharacterStatus_Implementation() {
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));
}

#pragma region Initialize Health
void ABaseCharacter::InitializeHealth() {
	if (Role == ROLE_Authority)
		InitializeHealthServer();
}

void ABaseCharacter::InitializeHealthServer_Implementation() {
	Health = 100;
}

bool ABaseCharacter::InitializeHealthServer_Validate(void) {
	return true;
}

#pragma endregion Initialize Health

#pragma region Calculate Health
void ABaseCharacter::CalculateHealth(float delta) {
	if (Role == ROLE_Authority) {
		CalculateHealthServer(delta);
		UpdateCharacterStatus();
	}
}

void ABaseCharacter::CalculateHealthServer_Implementation(float delta) {
	Health += delta;
}

bool ABaseCharacter::CalculateHealthServer_Validate(float delta) {
	return true;
}
#pragma endregion Calculate Health

void ABaseCharacter::OnTakeDamage(float Damage) {
	if (Role == ROLE_Authority) {
		float actualDamage = Damage * -1;
		CalculateHealth(actualDamage);
	}
}

//float ABaseCharacter::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
//	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("taking damage omg!"));
//	const float ActualDamage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);
//
//	return ActualDamage;
//}

//float ABaseCharacter::TakeDamage(float Damage, FDamageEvent const & DamageEvent, AController * EventInstigator, AActor * DamageCauser) {
//	float actualDamage = Damage * -1;
//	CalculateHealth(actualDamage);
//	return actualDamage;
//}
//
//void ABaseCharacter::OnTakeAnyDamage() {
//
//}

//float ABaseCharacter::ReceiveAnyDamage(float Damage, const UDamageType *DamageType, AController *InstigatedBy, AActor *DamageCauser) {
//
//}
//
//void ABaseCharacter::OnTakeDamage_Implementation(float Damage, FDamageEvent const & DamageEvent, AController * EventInstigator, AActor * DamageCauser) {
//	TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);
//}
//
//bool ABaseCharacter::OnTakeDamage_Validate(float Damage, FDamageEvent const & DamageEvent, AController * EventInstigator, AActor * DamageCauser) {
//	return true;
//}
