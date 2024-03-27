#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x50 - 0x38)
// BlueprintGeneratedClass EnemyBSSubProgress.EnemyBSSubProgress_C
class UEnemyBSSubProgress_C : public UQtnRunSubProgress
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UClass*>                        PendingEnemyBSList;                                // 0x40(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UEnemyBSSubProgress_C* GetDefaultObj();

	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue);
	void OnRunProgressCheckpoint_ServerOnly(bool FlushMissionProgress);
	void OnRunProgressReset_ServerOnly();
	void OnMapBeginPlay_ServerOnly();
	void ExecuteUbergraph_EnemyBSSubProgress(int32 EntryPoint, bool K2Node_Event_flushMissionProgress, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


