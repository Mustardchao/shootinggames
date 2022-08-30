// Fill out your copyright notice in the Description page of Project Settings.


#include "shooterCharacter.h"
#include <Runtime/Engine/Private/GameFramework/SpringArmComponent.cpp>

// Sets default values
AshooterCharacter::AshooterCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom-> SetupAttechment(RootComponent);
	CameraBoom->TargetArmLength = 300.f;
	CameraBoom->bUsePawnControlRotation = true;
}

// Called when the game starts or when spawned
void AshooterCharacter::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void AshooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AshooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

