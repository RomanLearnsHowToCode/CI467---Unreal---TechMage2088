// The whole project is for learning purposes only.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CloudMovement.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LEVELSCHANGING_API UCloudMovement : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCloudMovement();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// This will add editable category into the UE ide details option, so we can set values there
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	FRotator Spin;

	// Bob property will do the movement up and down
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	FVector Bob;	

	// Set the speed of transformation 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	float BobSpeedMultiplier;

private:
	// FVector are values X Y Z of the Actor's startLocation
	FVector startLocation;


};
