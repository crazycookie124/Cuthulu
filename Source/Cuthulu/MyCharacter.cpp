// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "PaperFlipbookComponent.h"
#include "Runtime/Engine/Public/EngineGlobals.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FoodFunction();
	
	
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyCharacter::FoodFunction()
{
	// Makes the food bar decrease over time and stops it at 0.
	food--;

	if (food <= 0) {
		food = 0;
	}
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Purple, FString::Printf(TEXT("food is == : %d"), food));
	
}

