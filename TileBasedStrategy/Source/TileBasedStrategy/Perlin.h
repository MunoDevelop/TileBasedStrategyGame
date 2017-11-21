// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "CoreMinimal.h"
//May cause problem
#include <CoreMinimal.h>

#include "Components/SceneComponent.h"

#include "Perlin.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TILEBASEDSTRATEGY_API UPerlin : public USceneComponent
{
	GENERATED_BODY()
	public:
		 int perm[256];  

		 float Grad(int hash, float x, float y);
		
		 float Lerp(float t, float a, float b);

		 float Fade(float t);

		 float Noise(int a, int b);
		   
			
/*
		
*/


public:	
	// Sets default values for this component's properties
	UPerlin();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		

	
};
