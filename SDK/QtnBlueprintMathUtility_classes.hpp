#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass QtnBlueprintMathUtility.QtnBlueprintMathUtility_C
class UQtnBlueprintMathUtility_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UQtnBlueprintMathUtility_C* GetDefaultObj();

	void Check_Has_Moved_in_Direction(class UObject* WorldRef, const struct FVector& SpawnDirection, const struct FVector& StartingPosition, class UObject* __WorldContext, bool* IsMovingForwardBackward, bool* IsMovingRightLeft, bool HasLeftStart, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess, const struct FQtnPawnIntentions& CallFunc_GetIntentions_ReturnValue, const struct FVector& CallFunc_GetBodyIntentionWorldMovement_ReturnValue, bool CallFunc_GetCardinalDirectionFromMovement_isValid, enum class EQtnCardinalDirection CallFunc_GetCardinalDirectionFromMovement_ReturnValue, bool CallFunc_NotEqualExactly_VectorVector_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1);
	void QtnLerpVector2D(const struct FVector2D& A, const struct FVector2D& B, float ALPHA, class UObject* __WorldContext, struct FVector2D* Out, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue_1, const struct FVector& CallFunc_VLerp_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
};

}


