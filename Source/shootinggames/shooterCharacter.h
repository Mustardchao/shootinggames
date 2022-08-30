// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "shooterCharacter.generated.h"

UCLASS()
class SHOOTINGGAMES_API AshooterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AshooterCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	/*相机的BOOM在角色后面*/
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Cetegory = Camera, meta = (AllowPrivateAccess = "true"))//有一个变量暴露给蓝图，可通过bP访问

	class USpeingArmComponent*CameraBoom;


public:
	/*返回相机主题*/
	FORCEINLINE USpeingArmComponent* GetCameraBoom() const { return CameraBoom; };

};
