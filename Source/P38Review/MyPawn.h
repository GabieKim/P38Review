// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

class UPropellerComponent;
class UArrowComponent;
class USpringArmComponent;
class UBoxComponent;
class UFloatingPawnMovement;
class UStaticMeshComponent;

UCLASS()
class P38REVIEW_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UBoxComponent* Box;

	class UStaticMeshComponent* Body;
	class UPropellerComponent* Left;
	class UPropellerComponent* Right;

	class UArrowComponent* Arrow;
	class USpringArmComponent* SpringArm;
	class UCameraComponent* Camera;

	class UFloatingPawnMovement* Movement;
};
