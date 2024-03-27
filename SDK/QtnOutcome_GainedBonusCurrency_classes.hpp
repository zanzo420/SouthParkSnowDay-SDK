#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x60 - 0x58)
// BlueprintGeneratedClass QtnOutcome_GainedBonusCurrency.QtnOutcome_GainedBonusCurrency_C
class UQtnOutcome_GainedBonusCurrency_C : public UQtnOutcomeCalculatorArchetype_C
{
public:
	struct FGameplayTag                          CurrencyTagToWatch;                                // 0x58(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQtnOutcome_GainedBonusCurrency_C* GetDefaultObj();

	struct FQtnPlayerOutcomeResult K2_CalculateOutcome(struct FQtnEventMessage& EventMessage, class UObject* CallFunc_StaticGetEventWriter_ReturnValue, int32 CallFunc_StaticGetEventContextInt_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, class AQtnPlayerState* CallFunc_GetOccupyingPlayerState_ReturnValue, bool CallFunc_IsOccupiedByPlayer_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_QtnGetUniqueId_ReturnValue, const struct FQtnPlayerOutcomeResult& K2Node_MakeStruct_QtnPlayerOutcomeResult, const struct FQtnPlayerOutcomeResult& K2Node_MakeStruct_QtnPlayerOutcomeResult_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayTag& CallFunc_StaticGetEventContextGameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
};

}


