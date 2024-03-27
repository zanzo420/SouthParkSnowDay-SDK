#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x69 - 0x48)
// BlueprintGeneratedClass SkirmishTriggerPopThreshold.SkirmishTriggerPopThreshold_C
class USkirmishTriggerPopThreshold_C : public UQtnSkirmishTrigger
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        RemainingPop;                                      // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Spawn_Group_Name;                                  // 0x54(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Class_to_Check;                                    // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __;                                                // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USkirmishTriggerPopThreshold_C* GetDefaultObj();

	void OnAIDeath(class AQtnSkirmish* Skirmish, class AQtnPawn* SkirmishPawn);
	void OnSkirmishInit(class AQtnSkirmish* OwningSkirmish);
	void SkirmishSpawnCancelEvent_ServerOnly_Event_0(class AQtnSkirmish* Skirmish, class FName SpawnGroupName);
	void ExecuteUbergraph_SkirmishTriggerPopThreshold(int32 EntryPoint, class AQtnSkirmish* K2Node_CustomEvent_Skirmish, class FName K2Node_CustomEvent_spawnGroupName, class AQtnSkirmish* K2Node_CustomEvent_Skirmish_1, class AQtnPawn* K2Node_CustomEvent_skirmishPawn, bool CallFunc_EqualEqual_NameName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnSkirmish* K2Node_Event_owningSkirmish, bool CallFunc_IsValidClass_ReturnValue, class AQtnSkirmish* CallFunc_GetOwningSkirmish_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_GetTotalPopulationInfo_ServerOnly_numPending, int32 CallFunc_GetTotalPopulationInfo_ServerOnly_numTelegraphing, int32 CallFunc_GetTotalPopulationInfo_ServerOnly_numLiving, int32 CallFunc_GetTotalPopulationInfo_ServerOnly_numDead, int32 CallFunc_GetTotalPopulationInfo_ServerOnly_numDestroyed, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnSkirmish* CallFunc_GetOwningSkirmish_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TMap<TSubclassOf<class AQtnPawn>, struct FQtnTrackedSkirmishPawns> CallFunc_GetTrackedPawns_ServerOnly_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FQtnTrackedSkirmishPawns& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TMap<class FName, struct FQtnTrackedSkirmishPawns> CallFunc_GetTrackedSpawnGroups_ServerOnly_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FQtnTrackedSkirmishPawns& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_GetSpawnGroupInfo_ServerOnly_numPending, int32 CallFunc_GetSpawnGroupInfo_ServerOnly_numTelegraphing, int32 CallFunc_GetSpawnGroupInfo_ServerOnly_numLiving, int32 CallFunc_GetSpawnGroupInfo_ServerOnly_numDead, int32 CallFunc_GetSpawnGroupInfo_ServerOnly_numDestroyed, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_LessEqual_IntInt_ReturnValue_2);
};

}


