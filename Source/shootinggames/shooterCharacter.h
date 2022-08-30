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
	/*�����BOOM�ڽ�ɫ����*/
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Cetegory = Camera, meta = (AllowPrivateAccess = "true"))//��һ��������¶����ͼ����ͨ��bP����

	class USpeingArmComponent*CameraBoom;


public:
	/*�����������*/
	FORCEINLINE USpeingArmComponent* GetCameraBoom() const { return CameraBoom; };

};
