#pragma once

#include "CoreMinimal.h"
#include "ShapeCTemplateCharacter.h"
#include "GiantPlayer.generated.h"

UCLASS()
class SHAPECTEMPLATE_API AGiantPlayer : public AShapeCTemplateCharacter
{
	GENERATED_BODY()

public:

	AGiantPlayer();

protected:

	virtual void BeginPlay() override;
};