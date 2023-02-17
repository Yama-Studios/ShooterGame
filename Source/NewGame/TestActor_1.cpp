// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor_1.h"
#include "UObject/ConstructorHelpers.h"


// Sets default values
ATestActor_1::ATestActor_1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	superMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	superMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder"));

	if (CylinderAsset.Succeeded())
	{
		superMesh->SetStaticMesh(CylinderAsset.Object);
		superMesh->SetRelativeLocation(FVector(0, 0, 0));
		superMesh->SetWorldScale3D(FVector(1));
	}
}

// Called when the game starts or when spawned
void ATestActor_1::BeginPlay()
{
	Super::BeginPlay();

	
	
}

// Called every frame
void ATestActor_1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

