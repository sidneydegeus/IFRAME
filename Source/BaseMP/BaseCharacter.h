// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// You need this include to get the Replication working. Good place for it would be your Projects Header!
#include "UnrealNetwork.h"

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

	UPROPERTY(
		BlueprintReadOnly, 
		ReplicatedUsing = UpdateCharacterStatus,
		Category = "Base Character")
		float Health;

	UFUNCTION(BlueprintCallable, Category = "Base Character")
		void CalculateHealth(float delta);

	UFUNCTION(BlueprintCallable, Category = "Base Character")
		void InitializeHealth();

	UFUNCTION(BlueprintNativeEvent)
		void UpdateCharacterStatus();
		virtual void UpdateCharacterStatus_Implementation();

	UFUNCTION(Server, reliable, WithValidation)
		void InitializeHealthServer();
		void InitializeHealthServer_Implementation();
		bool InitializeHealthServer_Validate();



	UFUNCTION(Server, reliable, WithValidation)
		void CalculateHealthServer(float delta);
		void CalculateHealthServer_Implementation(float delta);
		bool CalculateHealthServer_Validate(float delta);


protected:
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
