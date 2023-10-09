// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPawn.h"
#include "components/StaticMeshComponent.h"
#include "Camera/CameraComponent.h"
#include <GameFramework/SpringArmComponent.h>

// Sets default values
AMyPawn::AMyPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("rootcomponent"));
	ControlMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Control Mesh"));
	ControlMesh->SetupAttachment(GetRootComponent());
	ControlMesh->SetCollisionProfileName(TEXT("Pawn"));

	Myspringarm = CreateDefaultSubobject<USpringArmComponent>(TEXT("My Springarm"));
	Myspringarm->SetupAttachment(ControlMesh);
	Myspringarm->SetRelativeRotation (FRotator(-45.0f, 0.0f, 0.0f));
	Myspringarm->bEnableCameraLag = true; //是否开启摄像机延迟
	Myspringarm->TargetArmLength = 400.0f;//弹簧臂长度
	Myspringarm->CameraLagSpeed = 3.0f;   //弹簧臂延迟速度


	Mycamera = CreateDefaultSubobject<UCameraComponent>(TEXT("My camera"));
	//创建一个摄像机组件
	Mycamera->SetupAttachment(Myspringarm);//将摄像机组件附加弹簧臂子项
    
	AutoPossessPlayer = EAutoReceiveInput::Player0; //获取player 0 控制权
}
// Called when the game starts or when spawneds
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

