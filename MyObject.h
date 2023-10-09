// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyObject.generated.h"

/**
 * 
 */
UCLASS(blueprintable)      //�����๫��Ϊ������ͼ�Ŀɽ��ܻ���
class CPPALL_API UMyObject : public UObject
{
	GENERATED_BODY()
public:                 
	UMyObject();        
	UPROPERTY(blueprintreadwrite, category = "my variables|others var",meta=(Tooltip = "value1"))
	//��������ͼ����ԶԲƲ����ж�д�����ҷ���Ϊ"my variables"�ӷ���Ϊothers var
	float myFloat = 0.2f; 
	UPROPERTY(blueprintreadonly)//ͬ����ͼֻ����
	double hello =0.4;
	UFUNCTION(Blueprintcallable,category="this function", meta = (Tooltip = "This is a function description."))
	//���Դ�ִ�б��ش������ͼ�е��õı��غ���,����Ϊthis function
	//���������������ͼ������ʾ��ϢΪthis is a function description
	void myfunction(); 
};
