// This header contains all added structs and enums inside of it
#pragma once

#include "CoreMinimal.h"
#include "TemplateData.generated.h"

class AShapeCTemplateCharacter;

// Player States (States are an unused enum that could be or could not be used for something).
UENUM(BlueprintType)
enum EPlayerStates
{
	Player UMETA(DisplayName = "Player"),
	Hidden UMETA(DisplayName = "Hidden"),
	Frightening UMETA(DisplayName = "Frightening")
};

// Player Stats (The general struct containing basic player stats).
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

// Player Forms Struct (Used by the data asset to control the shape shifting mechanic.
USTRUCT(BlueprintType)
struct FPlayerForms
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = PlayerForms)
	FString FormID;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = PlayerForms)
	TSubclassOf<AShapeCTemplateCharacter> Form;
};