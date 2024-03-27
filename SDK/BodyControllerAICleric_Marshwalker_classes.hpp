#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x690 - 0x690)
// BlueprintGeneratedClass BodyControllerAICleric_Marshwalker.BodyControllerAICleric_Marshwalker_C
class ABodyControllerAICleric_Marshwalker_C : public ABodyControllerAICleric_C
{
public:

	static class UClass* StaticClass();
	static class ABodyControllerAICleric_Marshwalker_C* GetDefaultObj();

	class AQtnBodyPawn* ChooseAllyToHelp(TArray<class AQtnBodyPawn*>& AllyBodies, const TArray<class AQtnBodyPawn*>& NonClericAllies, float Shortest_Distance, class AQtnBodyPawn* Ally_Nearest_To_Enemy, class AQtnPawn* Relevant_Enemy, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, int32 Temp_int_Loop_Counter_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_AddUnique_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class AQtnPawn* CallFunc_GetRelevantEnemy_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue_1);
};

}


