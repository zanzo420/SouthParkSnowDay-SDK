#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x58 - 0x58)
// BlueprintGeneratedClass Outcome_FitcoinRulebookAward.Outcome_FitcoinRulebookAward_C
class UOutcome_FitcoinRulebookAward_C : public UQtnOutcomeCalculatorArchetype_C
{
public:

	static class UClass* StaticClass();
	static class UOutcome_FitcoinRulebookAward_C* GetDefaultObj();

	struct FQtnPlayerOutcomeResult K2_CalculateOutcome(struct FQtnEventMessage& EventMessage, class UObject* CallFunc_StaticGetEventWriter_ReturnValue, float CallFunc_StaticGetEventContextFloat_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerState* CallFunc_GetOccupyingPlayerState_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_QtnGetUniqueId_ReturnValue, const struct FQtnPlayerOutcomeResult& K2Node_MakeStruct_QtnPlayerOutcomeResult);
};

}


