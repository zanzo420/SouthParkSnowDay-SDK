#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6B (0x2BB - 0x250)
// BlueprintGeneratedClass FactionFlag_BP.FactionFlag_BP_C
class AFactionFlag_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       Arrow;                                             // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Banner_SM;                                         // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EUIFactionEnum, class UMaterialInstance*> FactionToMaterial;                                 // 0x268(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EUIFactionEnum                    CurrentFaction;                                    // 0x2B8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         LOCAL_init;                                        // 0x2B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ArcisSet;                                          // 0x2BA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AFactionFlag_BP_C* GetDefaultObj();

	void InitTodaysFlag(const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCurrentArc_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void OnRep_CurrentFaction();
	void LOCAL_UpdateFlagVis(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class UMaterialInstance* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void ReceiveBeginPlay();
	void OnArcChangeEvent(int32 NewArc);
	void ExecuteUbergraph_FactionFlag_BP(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, int32 K2Node_CustomEvent_NewArc, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess);
};

}


