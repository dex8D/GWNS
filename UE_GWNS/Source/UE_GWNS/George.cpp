// Fill out your copyright notice in the Description page of Project Settings.

#include "UE_GWNS.h"
#include "George.h"


// Sets default values
*AGeorge::AGeorge()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGeorge::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGeorge::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AGeorge::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

