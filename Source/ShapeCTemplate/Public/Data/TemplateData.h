#pragma once

#include "CoreMinimal.h"
#include "TemplateData.generated.h"

class AShapeCTemplateCharacter;

// Player States
UENUM(BlueprintType)
enum EPlayerStates
{
	Player UMETA(DisplayName = "Player"),
	Hidden UMETA(DisplayName = "Hidden"),
	Frightening UMETA(DisplayName = "Frightening")
};

// Player Stats
USTRUCT(BlueprintType)
struct FPlayerStats
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = PlayerStats)
	TEnumAsByte<EPlayerStates> PlayerState = Player;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = PlayerStats)
	float Health = 100.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = PlayerStats)
	float MaxHealth = 100.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = PlayerStats)
	float Attack = 10.f;

};

// Player Forms Struct
USTRUCT(BlueprintType)
struct FPlayerForms
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = PlayerForms)
	FString FormID;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = PlayerForms)
	TSubclassOf<AShapeCTemplateCharacter> Form;
};