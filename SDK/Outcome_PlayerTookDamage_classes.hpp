#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x58 - 0x58)
// BlueprintGeneratedClass Outcome_PlayerTookDamage.Outcome_PlayerTookDamage_C
class UOutcome_PlayerTookDamage_C : public UQtnOutcomeCalculatorArchetype_C
{
public:

	static class UClass* StaticClass();
	static class UOutcome_PlayerTookDamage_C* GetDefaultObj();

	struct FQtnPlayerOutcomeResult K2_CalculateOutcome(struct FQtnEventMessage& EventMessage, const struct FQtnPlayerOutcomeResult& K2Node_MakeStruct_QtnPlayerOutcomeResult, float CallFunc_StaticGetEventContextFloat_ReturnValue, class UObject* CallFunc_StaticGetEventWriter_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOccupiedByPlayer_ReturnValue, class AQtnPlayerState* CallFunc_GetOccupyingPlayerState_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_QtnGetUniqueId_ReturnValue, const struct FQtnPlayerOutcomeResult& K2Node_MakeStruct_QtnPlayerOutcomeResult_1);
};

}


