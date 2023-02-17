// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor_1.generated.h"


class UStaticMeshComponent;

UCLASS()
class NEWGAME_API ATestActor_1 : public AActor
{
	GENERATED_BODY()
	
private:	
	// Sets default values for this actor's properties
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	ATestActor_1();

	//Var


	//Fun


	//Components
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* superMesh;


	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
