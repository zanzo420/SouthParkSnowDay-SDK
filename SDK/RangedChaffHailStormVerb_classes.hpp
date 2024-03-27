#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xAB8 - 0xAB8)
// BlueprintGeneratedClass RangedChaffHailStormVerb.RangedChaffHailStormVerb_C
class URangedChaffHailStormVerb_C : public URangedChaffShootBowVerb_C
{
public:

	static class UClass* StaticClass();
	static class URangedChaffHailStormVerb_C* GetDefaultObj();

	TSubclassOf<class UQtnDamageType> GetDamageType();
	void AdjustProjectileType();
	void Adjust_Accuracy(class UObject* IntendedTarget, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsHitReactingOrKnockedDown_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Vector_IsNearlyZero_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void InitRapidFire();
};

}


