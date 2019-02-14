// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseWeapon_Ranged.h"

ABaseWeapon_Ranged::ABaseWeapon_Ranged() : ABaseWeapon() {
}

// Replicated variable lifetimes
void ABaseWeapon_Ranged::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	ABaseWeapon::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ABaseWeapon_Ranged, AmmoCount);
}

void ABaseWeapon_Ranged::CalculateAmmoServer_Implementation(float amount) {
	AmmoCount += amount;
}

bool ABaseWeapon_Ranged::CalculateAmmoServer_Validate(float amount) {
	return true;
}

void ABaseWeapon_Ranged::IncreaseAmmo(float amount) {
	if (Role == ROLE_Authority) {
		float actualAmount = amount;
		CalculateAmmoServer(actualAmount);
	}
}

void ABaseWeapon_Ranged::DecreaseAmmo(float amount) {
	if (Role == ROLE_Authority) {
		float actualAmount = amount * -1;
		CalculateAmmoServer(actualAmount);
	}
}

bool ABaseWeapon_Ranged::CanUseWeapon() {
	bool result = false;
	if (HasAmmo()) {
		result = true;
	}
	return result;
}

bool ABaseWeapon_Ranged::HasAmmo() {
	bool result = false;
	if (AmmoCount > 0) {
		result = true;
	}
	return result;
}

void ABaseWeapon_Ranged::FireWeapon_Implementation() {
	DecreaseAmmo(AmmoPerShot);
	FireWeaponBP();
}
