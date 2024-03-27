#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x920 - 0x914)
// BlueprintGeneratedClass EnemySuperSizeActivationVerb.EnemySuperSizeActivationVerb_C
class UEnemySuperSizeActivationVerb_C : public UEnemyCheatActivationVerbBase_C
{
public:
	uint8                                        Pad_57A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x918(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UEnemySuperSizeActivationVerb_C* GetDefaultObj();

	void RespondToBullshit_ServerOnly(class AQtnGameState* ActiveGameState);
	void ExecuteUbergraph_EnemySuperSizeActivationVerb(int32 EntryPoint, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, const struct FQtnActionIntention& K2Node_MakeStruct_QtnActionIntention, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnGameState* K2Node_Event_ActiveGameState, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue);
};

}


