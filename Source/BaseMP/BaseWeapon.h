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

	UPROPERTY(VisibleAnywhere, Category = "Base Weapon", meta = (AllowPrivateAccess = "true"))
		class USkeletalMeshComponent* SkeletalMeshComponent;

	UFUNCTION(BlueprintCallable, Category = "Base Weapon")
		void UseWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

	virtual bool CanUseWeapon();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void UseWeaponEvent();
		virtual void UseWeaponEvent_Implementation();

	UFUNCTION(Server, reliable, WithValidation)
		void UseWeaponServer();
		void UseWeaponServer_Implementation();
		bool UseWeaponServer_Validate();

	UFUNCTION(NetMulticast, reliable)
		void WeaponAnimationMulticast();
		void WeaponAnimationMulticast_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void WeaponAnimationEvent();
		virtual void WeaponAnimationEvent_Implementation();
};
