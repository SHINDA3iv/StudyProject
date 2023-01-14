// Study Project, All Rights Reserved.


#include "Components/SPCharacterMovementComponent.h"
#include "Player/SPBaseCharacter.h"

float USPCharacterMovementComponent::GetMaxSpeed() const
{
	const float MaxSpeed = Super::GetMaxSpeed();
	const ASPBaseCharacter* Player = Cast<ASPBaseCharacter>(GetPawnOwner());
	return Player && Player->IsRunning() ? MaxSpeed * RunModifier : MaxSpeed;
}