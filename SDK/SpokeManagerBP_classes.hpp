#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x108 - 0xF0)
// BlueprintGeneratedClass SpokeManagerBP.SpokeManagerBP_C
class USpokeManagerBP_C : public UQtnSpokeManager
{
public:
	int32                                        CurrentScheduleIndex_ServerOnly;                   // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C58[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        BsSchedule_ServerOnly;                             // 0xF8(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class USpokeManagerBP_C* GetDefaultObj();

	void ScheduleSpokeBS_ServerOnly(class USpokeBP_C*& Spoke, int32 CallFunc_SetupChosenBS_ServerOnly_nextIndex);
	void HandleSpokeVisit(bool IsServer, class USpokeBP_C*& Spoke);
	void Setup_BSSchedule_ServerOnly(TArray<class UClass*>& bsSchedule, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UQtnSpokeComponent*>& CallFunc_GetRegisteredSpokes_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQtnSpokeComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class USpokeBP_C* K2Node_DynamicCast_AsSpoke_BP, bool K2Node_DynamicCast_bSuccess);
};

}


