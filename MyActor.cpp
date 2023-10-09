// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "components/StaticMeshComponent.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	offsetvariable = FVector(0.3f);        //��offset������ֵ
	initforce = FVector(0.0f);
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	placedlocation = GetActorLocation();   
	//��ȡactor�������λ��Ȼ��ֵ��placedlocation
	if (bGotomove)                      //��bGotomove�����ж�
	{
		SetActorLocation(initlocation); //���Ϊ��������Actorlocation��λ��Ϊinitlocation
	}
	textm->AddForce(initforce);         //�����
}

// Called every frame
void AMyActor::Tick(float DeltaTime)    
{
	Super::Tick(DeltaTime);
	AddActorLocalOffset(offsetvariable); //���actor����ƫ����
}

