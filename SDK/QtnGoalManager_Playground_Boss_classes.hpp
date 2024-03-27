#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x590 - 0x578)
// BlueprintGeneratedClass QtnGoalManager_Playground_Boss.QtnGoalManager_Playground_Boss_C
class UQtnGoalManager_Playground_Boss_C : public UQtnGoalManagerBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x578(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                StanBattle_Dragon;                                 // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              StanBossBattleGoal;                                // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQtnGoalManager_Playground_Boss_C* GetDefaultObj();

	void GetScriptedVOScene(struct FGameplayTag* ScriptedVOScene, int32 CallFunc_GetCurrentArc_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void DEBUGONLY_SkipToRandyPhase(TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue, TScriptInterface<class IInterface_StanBossBattle_C> K2Node_DynamicCast_AsInterface_Stan_Boss_Battle, bool K2Node_DynamicCast_bSuccess, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool CallFunc_Array_IsValidIndex_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsOnServer_ReturnValue);
	void DEBUGONLY_SkipToStanPhase(TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue, TScriptInterface<class IInterface_StanBossBattle_C> K2Node_DynamicCast_AsInterface_Stan_Boss_Battle, bool K2Node_DynamicCast_bSuccess, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool CallFunc_Array_IsValidIndex_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsOnServer_ReturnValue);
	void Roll_Day_Toggle_Setup(class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue);
	void SetupSeedGoals_ServerOnly();
	void ExecuteUbergraph_QtnGoalManager_Playground_Boss(int32 EntryPoint, class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue, int32 CallFunc_GetCurrentArc_ReturnValue, int32 CallFunc_GetCurrentArc_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue);
};

}


