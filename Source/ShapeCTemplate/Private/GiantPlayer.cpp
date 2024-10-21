#include "GiantPlayer.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

AGiantPlayer::AGiantPlayer()
{
	PlayerStats = FPlayerStats{ Frightening, 400.f, 400.f, 50.f };

	GetCapsuleComponent()->InitCapsuleSize(133.f, 381.f);
	GetMesh()->SetRelativeScale3D(FVector(4, 4, 4));
	GetMesh()->SetRelativeLocation(FVector(0, 0, -359));
	GetCameraBoom()->TargetArmLength = 600.f;
	GetCameraBoom()->SetRelativeLocation(FVector(0, 0, 198));
}

void AGiantPlayer::BeginPlay()
{
	Super::BeginPlay();
}
