#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x590 - 0x560)
// BlueprintGeneratedClass StandaloneJoker_UpgradeStation_BP.StandaloneJoker_UpgradeStation_BP_C
class AStandaloneJoker_UpgradeStation_BP_C : public AUpgradeStation_Henrietta_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x560(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FName>                          Regions;                                           // 0x568(0x10)(Edit, BlueprintVisible)
	bool                                         ForceJokerHere;                                    // 0x578(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Exists;                                            // 0x579(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_46D2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                Valid_Days;                                        // 0x580(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class AStandaloneJoker_UpgradeStation_BP_C* GetDefaultObj();

	void UpdateExistence(bool CallFunc_Not_PreBool_ReturnValue);
	void OnRep_Exists();
	void Toggle_Joker_Upgrade_Station(bool WantOn, class AShrine_Parent_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsServer_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_StandaloneJoker_UpgradeStation_BP(int32 EntryPoint, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
};

}


