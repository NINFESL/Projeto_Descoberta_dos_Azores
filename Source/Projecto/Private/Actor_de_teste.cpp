// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor_de_teste.h"

// Sets default values
AActor_de_teste::AActor_de_teste()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActor_de_teste::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActor_de_teste::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

