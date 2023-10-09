// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "components/StaticMeshComponent.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	offsetvariable = FVector(0.3f);        //对offset向量赋值
	initforce = FVector(0.0f);
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	placedlocation = GetActorLocation();   
	//获取actor根组件的位置然后赋值给placedlocation
	if (bGotomove)                      //对bGotomove进行判断
	{
		SetActorLocation(initlocation); //如果为真则设置Actorlocation的位置为initlocation
	}
	textm->AddForce(initforce);         //添加力
}

// Called every frame
void AMyActor::Tick(float DeltaTime)    
{
	Super::Tick(DeltaTime);
	AddActorLocalOffset(offsetvariable); //添加actor本地偏移量
}

