#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0xB4 - 0xA0)
// BlueprintGeneratedClass PlayerSubProgress_BS.PlayerSubProgress_BS_C
class UPlayerSubProgress_BS_C : public UQtnPlayerRunProgress
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                BSVerbArchetype;                                   // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InvokeCount;                                       // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayerSubProgress_BS_C* GetDefaultObj();

	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void OnRunProgressReset_ServerOnly();
	void OnRunProgressCheckpoint_ServerOnly(class AQtnBodyPawn* PlayerBody, bool FlushMissionProgress);
	void OnReadyForGameplay_ServerOnly(class AQtnPlayerPawn* PlayerPawn, class AQtnBodyPawn* PlayerBody, bool HasCheckpointHappened);
	void ExecuteUbergraph_PlayerSubProgress_BS(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnBodyPawn* K2Node_Event_PlayerBody_1, bool K2Node_Event_flushMissionProgress, class AQtnPlayerPawn* K2Node_Event_playerPawn, class AQtnBodyPawn* K2Node_Event_PlayerBody, bool K2Node_Event_hasCheckpointHappened, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, TArray<class UQtnVerb*>& CallFunc_GetVerbs_verbs, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_1, class UQtnVerb* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UQtn_CheatVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Cheat_Verb_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, class UQtn_CheatVerb_Archetype_C* CallFunc_AddVerb_ServerOnly_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
};

}


