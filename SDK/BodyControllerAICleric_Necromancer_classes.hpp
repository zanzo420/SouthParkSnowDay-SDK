#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x690 - 0x690)
// BlueprintGeneratedClass BodyControllerAICleric_Necromancer.BodyControllerAICleric_Necromancer_C
class ABodyControllerAICleric_Necromancer_C : public ABodyControllerAICleric_C
{
public:

	static class UClass* StaticClass();
	static class ABodyControllerAICleric_Necromancer_C* GetDefaultObj();

	void CheckForHelpVerb(class UQtnVerb* HelpVerb, class AQtnBodyPawn* RezTarget, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, class UQtnVerb* CallFunc_GetExistingVerb_ReturnValue, bool CallFunc_AreVerbConditionsSatisfied_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue_1, const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest, bool CallFunc_IsValid_ReturnValue, class AQtnBodyPawn* CallFunc_GetAllyInNeedOfHelp_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsVerbActive_ReturnValue);
	class AQtnBodyPawn* ChooseAllyToHelp(TArray<class AQtnBodyPawn*>& AllyBodies, bool IsInCombat, class AQtnBodyPawn* DeadPlayer, class AQtnBodyPawn* DeadNPC, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, class AQtnBodyPawn* CallFunc_Array_Get_Item, bool CallFunc_IsPlayerControlled_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsDead_canBeRevived, bool CallFunc_IsDead_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AQtnPawn* CallFunc_GetRelevantEnemy_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


