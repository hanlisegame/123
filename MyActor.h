// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"
UCLASS()
class CPPALL_API AMyActor : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AMyActor();
	UPROPERTY(EditDefaultsOnly,category ="other mesh")
	UStaticMeshComponent* textm = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MystaticMesh"));  
	//����һ����̬���������

	UPROPERTY(EditDefaultsOnly, category = "Actor move test");
	FVector initlocation = FVector(0.0f);    //����һ��initlocation����         

	UPROPERTY(VisibleinstanceOnly, category = "Actor move test");
	FVector placedlocation = FVector(0.0f);  //����һ��placedlocation����������0.0f

	UPROPERTY(EditinstanceOnly, category = "Actor move test");
	bool bGotomove = false;                  //����һ�������������ҳ�ֵΪfalse
	UPROPERTY(EditinstanceOnly, category = "Actor move test",meta=(ClampMin=0.0f,ClampMax=5.0f,UIMin=0.0f,UIMax=5.0f));
	FVector offsetvariable;                  //����һ��offset����

	UPROPERTY(EditinstanceOnly,category="physics")
	FVector initforce;                       //����һ��initforce����
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
