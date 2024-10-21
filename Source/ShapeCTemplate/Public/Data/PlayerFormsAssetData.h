#pragma once

#include "CoreMinimal.h"
#include "TemplateData.h"
#include "Engine/DataAsset.h"
#include "PlayerFormsAssetData.generated.h"

UCLASS()
class SHAPECTEMPLATE_API UPlayerFormsAssetData : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Forms")
	TArray<FPlayerForms> PlayerForms;
};