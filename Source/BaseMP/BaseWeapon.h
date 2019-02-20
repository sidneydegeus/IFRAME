// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "WeaponEnum.h"
#include "UnrealNetwork.h"
#include "Engine.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

UCLASS(Blueprintable)
class BASEMP_API ABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseWeapon();

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Base Weapon")
		FName Name;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Base Weapon")
		float DamageMultiplier = 1.0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Base Weapon")
		WeaponEnum WeaponType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Base Weapon")
		TArray<UAnimMontage*> IdleAnimations;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Base Weapon")
		TArray<UAnimMontage*> AttackAnimations;

	UPROPERTY(VisibleAnywhere, Category = "Base Weapon", meta = (AllowPrivateAccess = "true"))
		class USkeletalMeshComponent* SkeletalMeshComponent;

	UFUNCTION(BlueprintCallable, Category = "Base Weapon")
		void UseWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

	virtual bool CanUseWeapon();

	UFUNCTION(BlueprintNativeEvent, Category = "Base Weapon")
		void UseWeaponEvent();
		virtual void UseWeaponEvent_Implementation();

	UFUNCTION(Server, reliable, WithValidation)
		void UseWeaponServer();
		void UseWeaponServer_Implementation();
		bool UseWeaponServer_Validate();

};
