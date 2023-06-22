// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AdvancedCharacter.generated.h"

UCLASS()
class CPLUSPLUSFORBLUEPRIN_API AAdvancedCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAdvancedCharacter();

	void GetActorEyesViewPoint(FVector& location, FRotator& rotation) const override;
	void FellOutOfWorld(const class UDamageType& dmgType) override;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintImplementableEvent)
	void OnFellOutOfWorld();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EyeSocketName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Alert)
	class UTextRenderComponent* AlertTextComponent;

};
