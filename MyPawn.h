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
	UStaticMeshComponent* ControlMesh;                //赋值一个静态网格组件

	UPROPERTY(Visibleanywhere, category = "Control Mesh")
	class UCameraComponent* Mycamera;                 //赋值一个相机组件

	UPROPERTY(Visibleanywhere, category = "Control Mesh")
	class USpringArmComponent* Myspringarm;           //赋值一个弹簧臂组件
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
