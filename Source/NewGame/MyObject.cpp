// Fill out your copyright notice in the Description page of Project Settings.


#include "MyObject.h"

UMyObject::UMyObject()
{
	myFloat = 5;
	checker = 5.5f;
}

void UMyObject::Function()
{
	UE_LOG(LogTemp, Warning, TEXT("Hello"));
}
