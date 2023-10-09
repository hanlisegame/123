// Fill out your copyright notice in the Description page of Project Settings.
#include "MyObject.h"
UMyObject::UMyObject()
{
	
}
void UMyObject::myfunction()
{
	UE_LOG(LogTemp,Warning, TEXT("hello"));
	UE_LOG(LogTemp, Error, TEXT("hello"));           
	//UE_LOG函数,运行此函数在输出框中会提示信息
}
 