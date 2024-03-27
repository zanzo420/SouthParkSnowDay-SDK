#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13 (0x690 - 0x67D)
// BlueprintGeneratedClass BodyControllerAICleric.BodyControllerAICleric_C
class ABodyControllerAICleric_C : public ABodyControllerAI_C
{
public:
	uint8                                        Pad_4E05[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x680(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                HelpVerbArchetype;                                 // 0x688(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABodyControllerAICleric_C* GetDefaultObj();

	void CheckForHelpVerb(class UQtnVerb* HelpVerb, class AQtnBodyPawn* HealTarget, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, class UQtnVerb* CallFunc_GetExistingVerb_ReturnValue, bool CallFunc_AreVerbConditionsSatisfied_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue_1, const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest, bool CallFunc_IsValid_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetAllyInNeedOfHelp_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsVerbActive_ReturnValue);
	class AQtnBodyPawn* ChooseAllyToHelp(TArray<class AQtnBodyPawn*>& AllyBodies, class AQtnBodyPawn* PlayerMostInNeed, class AQtnBodyPawn* NpcMostInNeed, float LargestHealAmount, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class AQtnBodyPawn* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void OnThink(float TimeSinceLastThought);
	void ExecuteUbergraph_BodyControllerAICleric(int32 EntryPoint, float K2Node_Event_timeSinceLastThought);
};

}


