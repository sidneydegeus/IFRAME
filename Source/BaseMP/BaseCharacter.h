// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// You need this include to get the Replication working. Good place for it would be your Projects Header!
#include "UnrealNetwork.h"
#include "BaseWeapon.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"


UCLASS(Blueprintable)
class BASEMP_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

#pragma region Weapon
public:
	UPROPERTY(BlueprintReadWrite, Replicated, Category = "Base Character")
		ABaseWeapon* EquipedWeapon;

	UPROPERTY(BlueprintReadOnly, Replicated, Category = "Base Character")
		TSubclassOf<ABaseWeapon> EquipedWeaponClass;

	//UFUNCTION(BlueprintCallable, Category = "Base Character")
	//	void SetEquipedWeapon(TSubclassOf<ABaseWeapon> WeaponClass);

	UFUNCTION(BlueprintCallable, Category = "Base Character")
		void ChangeWeapon(TSubclassOf<ABaseWeapon> WeaponClass, ACharacter* playerCharacter);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void ChangeWeaponEvent(ACharacter* playerCharacter);
		virtual void ChangeWeaponEvent_Implementation(ACharacter* playerCharacter);

private:
	UFUNCTION(Server, reliable, WithValidation)
		void ChangeWeaponServer(TSubclassOf<ABaseWeapon> WeaponClass, ACharacter* playerCharacter);
		void ChangeWeaponServer_Implementation(TSubclassOf<ABaseWeapon> WeaponClass, ACharacter* playerCharacter);
		bool ChangeWeaponServer_Validate(TSubclassOf<ABaseWeapon> WeaponClass, ACharacter* playerCharacter);

#pragma endregion Weapon

#pragma region Health
public:
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = UpdateCharacterStatus, Category = "Base Character")
		float Health;

	UFUNCTION(BlueprintCallable, Category = "Base Character")
		void IncreaseHealth(float amount);

	UFUNCTION(BlueprintCallable, Category = "Base Character")
		void DecreaseHealth(float amount);

	UFUNCTION(BlueprintCallable, Category = "Base Character")
		void InitializeHealth();

	UFUNCTION(BlueprintNativeEvent)
		void UpdateCharacterStatus();
		virtual void UpdateCharacterStatus_Implementation();

private:
	UFUNCTION(Server, reliable, WithValidation)
		void InitializeHealthServer();
		void InitializeHealthServer_Implementation();
		bool InitializeHealthServer_Validate();

	UFUNCTION(Server, reliable, WithValidation)
		void CalculateHealthServer(float delta);
		void CalculateHealthServer_Implementation(float delta);
		bool CalculateHealthServer_Validate(float delta);

#pragma endregion Health

protected:
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Base Character")
		void OnTakeDamage(float Damage);



};
