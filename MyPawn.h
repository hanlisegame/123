// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

UCLASS()
class CPPALL_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();
    UPROPERTY(Visibleanywhere,category="Control Mesh")
	UStaticMeshComponent* ControlMesh;                //��ֵһ����̬�������

	UPROPERTY(Visibleanywhere, category = "Control Mesh")
	class UCameraComponent* Mycamera;                 //��ֵһ��������

	UPROPERTY(Visibleanywhere, category = "Control Mesh")
	class USpringArmComponent* Myspringarm;           //��ֵһ�����ɱ����
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
