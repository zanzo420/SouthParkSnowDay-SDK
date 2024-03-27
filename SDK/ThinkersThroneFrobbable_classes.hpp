#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x350 - 0x320)
// BlueprintGeneratedClass ThinkersThroneFrobbable.ThinkersThroneFrobbable_C
class UThinkersThroneFrobbable_C : public UQtnFrobbableComponent
{
public:
	class FText                                  FrobPrompt_Listen;                                 // 0x320(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  FrobPrompt_NeedDM;                                 // 0x338(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UThinkersThroneFrobbable_C* GetDefaultObj();

	bool CanBeInteractedWith(enum class EQtnTargetInteractionEnum TargetInteraction, class AQtnPawn* InteractingPawn, class FText* AffordancePrompt, class UMissionDataBag_C* CallFunc_GetLocalProgressDataBag_ReturnValue, int32 CallFunc_GetCurrentArc_CurrentArc, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_FetchPlayerCurrencyAmountByTag_OutCurrencyAmount, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool CallFunc_GetTutorialBoolValue_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsTradeshowDemo_ReturnValue);
};

}


