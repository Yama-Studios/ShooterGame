// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class NEWGAME_API UMyObject : public UObject
{
	GENERATED_BODY()

public:
		UMyObject();


	UPROPERTY(BlueprintReadOnly, Category = Var)
		float myFloat;

	UPROPERTY(BlueprintReadOnly, Category = var)
		float checker;


	UFUNCTION(BlueprintCallable, Category = Fun)
		void Function();
};
