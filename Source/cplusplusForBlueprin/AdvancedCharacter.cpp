// Fill out your copyright notice in the Description page of Project Settings.


#include "AdvancedCharacter.h"
#include <Components/TextRenderComponent.h>
#include <DrawDebugHelpers.h>
// Sets default values
AAdvancedCharacter::AAdvancedCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AlertTextComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Alert"));
	if (AlertTextComponent) {
		AlertTextComponent->SetupAttachment(GetMesh(), "head");
	}
}

void AAdvancedCharacter::GetActorEyesViewPoint(FVector& location, FRotator& rotation) const {
	location = GetMesh()->GetSocketLocation(EyeSocketName);
	rotation = GetMesh()->GetSocketRotation(EyeSocketName);
}

void AAdvancedCharacter::FellOutOfWorld(const class UDamageType& dmgType)
{
	OnFellOutOfWorld();
}


// Called when the game starts or when spawned
void AAdvancedCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}




// Called every frame
void AAdvancedCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Log, TEXT("Hello world?"));

	AActor* OtherActor = NULL;
	FVector ActorLocation;

	if (OtherActor != NULL) {
	 OtherActor->GetActorLocation();
	}
	 
	DrawDebugSphere(GetWorld(), ActorLocation, 100.0f,12,FColor::Red);

}

// Called to bind functionality to input
void AAdvancedCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}



