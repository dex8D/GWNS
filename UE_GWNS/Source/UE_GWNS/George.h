// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PaperCharacter.h"
#include "George.generated.h"

UCLASS()
class UE_GWNS_API AGeorge : public APaperCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGeorge();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	UPROPERTY(EditAnywhere)
		int32 asdf;

	
};
