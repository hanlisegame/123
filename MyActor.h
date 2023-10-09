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
	//构造一个静态网格体组件

	UPROPERTY(EditDefaultsOnly, category = "Actor move test");
	FVector initlocation = FVector(0.0f);    //定义一个initlocation向量         

	UPROPERTY(VisibleinstanceOnly, category = "Actor move test");
	FVector placedlocation = FVector(0.0f);  //定义一个placedlocation向量并赋予0.0f

	UPROPERTY(EditinstanceOnly, category = "Actor move test");
	bool bGotomove = false;                  //定义一个布尔变量并且初值为false
	UPROPERTY(EditinstanceOnly, category = "Actor move test",meta=(ClampMin=0.0f,ClampMax=5.0f,UIMin=0.0f,UIMax=5.0f));
	FVector offsetvariable;                  //定义一个offset向量

	UPROPERTY(EditinstanceOnly,category="physics")
	FVector initforce;                       //定义一个initforce向量
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
