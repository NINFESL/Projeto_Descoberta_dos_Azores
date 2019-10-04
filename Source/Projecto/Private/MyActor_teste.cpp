// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor_teste.h"

// Sets default values
AMyActor_teste::AMyActor_teste()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor_teste::BeginPlay()
{
	int a;
	a = 0;
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor_teste::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

