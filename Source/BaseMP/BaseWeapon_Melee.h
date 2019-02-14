// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h"
#include "BaseWeapon_Melee.generated.h"

/**
 * 
 */
UCLASS()
class BASEMP_API ABaseWeapon_Melee : public ABaseWeapon
{
	GENERATED_BODY()
	
public:
	ABaseWeapon_Melee();

protected:
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;
};
