// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseWeapon_Melee.h"

ABaseWeapon_Melee::ABaseWeapon_Melee() : ABaseWeapon() {
}

void ABaseWeapon_Melee::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	ABaseWeapon::GetLifetimeReplicatedProps(OutLifetimeProps);
}