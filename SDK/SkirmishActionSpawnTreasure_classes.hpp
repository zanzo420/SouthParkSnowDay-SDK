#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x41 - 0x28)
// BlueprintGeneratedClass SkirmishActionSpawnTreasure.SkirmishActionSpawnTreasure_C
class USkirmishActionSpawnTreasure_C : public UQtnSkirmishAction
{
public:
	class UClass*                                TreasureClassToSpawn;                              // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AQtnSpawner*>                   Spawners;                                          // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, ContainsInstancedReference)
	bool                                         StartLocked_;                                      // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USkirmishActionSpawnTreasure_C* GetDefaultObj();

	void ExecuteSkirmishAction(class AQtnSkirmish* OwningSkirmish, class UQtnSkirmishTrigger* OwningTrigger, bool LOCAL_UnusedSpoke, int32 Temp_int_Array_Index_Variable, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AQtnSpawner* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class ALoot_Container_Parent_C* CallFunc_SpawnSpecificActor_Server_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ALoot_Container_TreasureChest_C* K2Node_DynamicCast_AsLoot_Container_Treasure_Chest, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_AddUnique_ReturnValue);
};

}


