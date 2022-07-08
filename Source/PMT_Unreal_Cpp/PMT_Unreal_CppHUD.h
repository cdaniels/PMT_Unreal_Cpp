// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PMT_Unreal_CppHUD.generated.h"

UCLASS()
class APMT_Unreal_CppHUD : public AHUD
{
	GENERATED_BODY()

public:
	APMT_Unreal_CppHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

