#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xAB8 - 0xAB8)
// BlueprintGeneratedClass AllyBotShootBowVerb.AllyBotShootBowVerb_C
class UAllyBotShootBowVerb_C : public URangedChaffShootBowVerb_C
{
public:

	static class UClass* StaticClass();
	static class UAllyBotShootBowVerb_C* GetDefaultObj();

	void SpawnVerbDangerCapsule_ServerOnly();
	bool WillVerbSucceed(class UObject* PotentialTarget, bool CallFunc_WillVerbSucceed_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class UQtnVerb* CallFunc_GetCurrentActiveVerb_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UEncroacherShieldBlock_C* K2Node_DynamicCast_AsEncroacher_Shield_Block, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasStatusEffect_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue_1, class UQtnVerb* CallFunc_GetBlockInfo_blockingVerb, bool CallFunc_GetBlockInfo_wouldBlockSucceed, bool CallFunc_BooleanOR_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}


