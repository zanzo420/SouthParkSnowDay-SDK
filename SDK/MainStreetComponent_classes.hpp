#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x110 - 0xE0)
// BlueprintGeneratedClass MainStreetComponent.MainStreetComponent_C
class UMainStreetComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ATravelVolume_BP_C*                    FirstFOSGate;                                      // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATravelVolume_BP_C*                    SecondFOSGate;                                     // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DeadPlayerTeleportLoc_C*           CentralMainStreetEntrance;                         // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DeadPlayerTeleportLoc_C*           TheatreEntrance;                                   // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CentralMainStreetDmgVolume;                        // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMainStreetComponent_C* GetDefaultObj();

	void ReadyForGameplay(bool IsServer);
	void ExecuteUbergraph_MainStreetComponent(int32 EntryPoint, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class FName Temp_name_Variable, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, class UQtnGoalManager_Downtown_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Downtown, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, class UQtnGoal_DT_Arc3_FOSParent_C* K2Node_DynamicCast_AsQtn_Goal_DT_Arc_3_FOSParent, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue_1, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, int32 Temp_int_Array_Index_Variable, class ATravelVolume_BP_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class FName Temp_name_Variable_3, class ABP_DeadPlayerTeleportLoc_C* CallFunc_Array_Get_Item_1, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_3, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool K2Node_CustomEvent_isServer);
};

}


