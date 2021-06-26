// The whole project is for learning purposes only.


#include "CloudMovement.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UCloudMovement::UCloudMovement()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	
}


// Called when the game starts
void UCloudMovement::BeginPlay()
{
	Super::BeginPlay();

	// Get the actor for this component and its location
	startLocation = GetOwner()->GetActorLocation();

	
	
}


// Called every frame
void UCloudMovement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	// TickComponent is using DeltaTime 
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Spin values times DeltaTime
	GetOwner()->AddActorWorldRotation(Spin * DeltaTime);

	//time is the real time seconds value
	float time = GetOwner()->GetWorld()->GetRealTimeSeconds();

	// sine is sinusoid of bob multiplier
	float sine = FMath::Sin(time* BobSpeedMultiplier);
	GetOwner()->SetActorLocation(startLocation + (Bob* sine));
	
}

