#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x5B0 - 0x578)
// BlueprintGeneratedClass QtnGoalManager_HellsPass.QtnGoalManager_HellsPass_C
class UQtnGoalManager_HellsPass_C : public UQtnGoalManagerBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x578(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnGoal*                              DEBUGONLY_ReachCartmanGoal;                        // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              DEBUGONLY_ExitGoal;                                // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              ReturnToMaxiGoal;                                  // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              DEBUGONLY_CartmanBattleGoal;                       // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              DEBUGONLY_StartChurchDay3Goal;                     // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              DEBUGONLY_AmbushDay3Goal;                          // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQtnGoalManager_HellsPass_C* GetDefaultObj();

	void ShouldPlayCutscenes(bool* Play_cutscenes, class FName LOCAL_TrialTag, int32 CallFunc_GetCurrentArc_ReturnValue, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsPlayingInEditor_ReturnValue, TSubclassOf<class AActor> CallFunc_SyncLoadActorClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, TArray<struct FGameplayTag>& K2Node_MakeArray_Array_1, TArray<class AActor*>& CallFunc_FindMarkedActors_ServerOnly_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, TScriptInterface<class IInterface_Tribunal_Manager_Actor_C> K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoGetRunInEditor_runInEditor, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess);
	void GetScriptedVOScene(struct FGameplayTag* ScriptedVOScene);
	void Roll_Day_Toggle_Setup(class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue);
	void DEBUGONLY_ForceSpokes(TArray<class FName>& New_Spokes);
	void DEBUGONLY_ForceCharacterEncounter(const class FString& Selection);
	void DEBUGONLY_ForceAmbush(const class FString& Selection, bool Teleport);
	void SetupSeedGoals_ServerOnly();
	void ExecuteUbergraph_QtnGoalManager_HellsPass(int32 EntryPoint, int32 CallFunc_GetCurrentArc_ReturnValue, bool CallFunc_ShouldPlayCutscenes_play_cutscenes, bool K2Node_SwitchInteger_CmpSuccess, class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5, class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue_1, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6, int32 CallFunc_GetCurrentArc_ReturnValue_1, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_7, const class FString& CallFunc_Conv_IntToString_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_9);
};

}


