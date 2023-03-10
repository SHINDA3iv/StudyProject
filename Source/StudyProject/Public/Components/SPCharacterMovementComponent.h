 // Study Project, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "SPCharacterMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class STUDYPROJECT_API USPCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement", meta = (ClampMin = "1.5", ClampMax = "10.0"))
	float RunModifier = 1.5f;

	virtual float GetMaxSpeed() const override;
};
