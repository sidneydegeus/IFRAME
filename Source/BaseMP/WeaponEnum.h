// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "WeaponEnum.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class WeaponEnum : uint8 {
	Fist			UMETA(DisplayName = "Fist"),
	Rifle			UMETA(DisplayName = "Rifle")
};
