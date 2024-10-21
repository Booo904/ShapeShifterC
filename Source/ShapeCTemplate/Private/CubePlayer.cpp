#include "CubePlayer.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

ACubePlayer::ACubePlayer()
{
	GetCapsuleComponent()->InitCapsuleSize(52.f, 52.f);
	PlayerStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerStaticMesh"));
	PlayerStaticMesh->SetupAttachment(RootComponent);
	PlayerStaticMesh->SetCollisionProfileName("Pawn");
	GetCharacterMovement()->SetJumpAllowed(false);
	PlayerStats = FPlayerStats{ Hidden, 50.f, 50.f, 0.f };
}

void ACubePlayer::BeginPlay()
{
	Super::BeginPlay();
}

void ACubePlayer::Move(const FInputActionValue& Value)
{
	// Do Nothing
}
