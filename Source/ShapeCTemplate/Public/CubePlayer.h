#pragma once

#include "CoreMinimal.h"
#include "ShapeCTemplateCharacter.h"
#include "CubePlayer.generated.h"

UCLASS()
class SHAPECTEMPLATE_API ACubePlayer : public AShapeCTemplateCharacter
{
	GENERATED_BODY()

public:

	ACubePlayer();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* PlayerStaticMesh;

protected:

	virtual void BeginPlay() override;
	virtual void Move(const FInputActionValue& Value) override;
};