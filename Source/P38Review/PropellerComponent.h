// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "PropellerComponent.generated.h"

/**
 * 
 */
UCLASS()
class P38REVIEW_API UPropellerComponent : public UStaticMeshComponent
{
	GENERATED_BODY()
public:
	UPropellerComponent();

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType,
			FActorComponentTickFunction* ThisTickFunction) override;
};
