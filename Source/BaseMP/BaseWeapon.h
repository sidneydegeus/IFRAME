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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Weapon")
		FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Weapon")
		float DamageMultiplier = 1.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Weapon")
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

	UFUNCTION(NetMulticast, reliable)
		void FireWeapon();
		virtual void FireWeapon_Implementation();

	// Fire weapon BP can potentially be removed at some point. When all code is transfered to C++
	UFUNCTION(BlueprintNativeEvent)
		void FireWeaponBP();
		virtual void FireWeaponBP_Implementation();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
