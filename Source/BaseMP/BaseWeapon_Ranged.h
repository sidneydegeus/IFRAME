// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//#include "UnrealNetwork.h"
#include "BaseWeapon.h"
#include "BaseWeapon_Ranged.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class BASEMP_API ABaseWeapon_Ranged : public ABaseWeapon
{
	GENERATED_BODY()
	
public:

	ABaseWeapon_Ranged();

	UPROPERTY(BlueprintReadOnly, Replicated, Category = "Base Ranged Weapon")
		float AmmoCount = 30;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Base Ranged Weapon")
		float MaxAmmoCount = 30;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Base Ranged Weapon")
		float AmmoPerShot = 1;

	UFUNCTION(Server, reliable, WithValidation)
		void CalculateAmmoServer(float amount);
		void CalculateAmmoServer_Implementation(float amount);
		bool CalculateAmmoServer_Validate(float amount);

	UFUNCTION(BlueprintCallable, Category = "Base Ranged Weapon")
		void IncreaseAmmo(float amount);

	UFUNCTION(BlueprintCallable, Category = "Base Ranged Weapon")
		void DecreaseAmmo(float amount);

protected:
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

	bool CanUseWeapon() override;
	virtual bool HasAmmo();
};
