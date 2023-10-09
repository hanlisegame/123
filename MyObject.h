// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyObject.generated.h"

/**
 * 
 */
UCLASS(blueprintable)      //将此类公开为创建蓝图的可接受基类
class CPPALL_API UMyObject : public UObject
{
	GENERATED_BODY()
public:                 
	UMyObject();        
	UPROPERTY(blueprintreadwrite, category = "my variables|others var",meta=(Tooltip = "value1"))
	//派生的蓝图类可以对财产进行读写，并且分类为"my variables"子分类为others var
	float myFloat = 0.2f; 
	UPROPERTY(blueprintreadonly)//同上蓝图只供读
	double hello =0.4;
	UFUNCTION(Blueprintcallable,category="this function", meta = (Tooltip = "This is a function description."))
	//可以从执行本地代码的蓝图中调用的本地函数,分组为this function
	//并且鼠标悬浮在蓝图块上提示信息为this is a function description
	void myfunction(); 
};
