#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x91 (0x609 - 0x578)
// BlueprintGeneratedClass QtnGoalManager_FTUX.QtnGoalManager_FTUX_C
class UQtnGoalManager_FTUX_C : public UQtnGoalManagerBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x578(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnGoal*                              FTUXFirstGoal;                                     // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              MantleGoal;                                        // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              FartEscapeGoal;                                    // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              MeetCartmanGoal;                                   // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              SwarmerFightGoal;                                  // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              Kill_Ranged_Goal;                                  // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              Chase_goal;                                        // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              KillSnowMenGoal;                                   // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              HealingTotemGoal;                                  // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnGoal*                              TrailCombatGoal;                                   // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnStruct_VOLine                     VO_OnAcceptInvite;                                 // 0x5D0(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A6F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         DEBUGONLY_SkipScenes;                              // 0x5F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A70[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnGoal*                              BullshitBossGoal;                                  // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasSeenDeepSnowPopup;                              // 0x608(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UQtnGoalManager_FTUX_C* GetDefaultObj();

	void CheckForDeepSnowPopup(class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UFTUX_DeepSnow_Screen_C* CallFunc_GetScreen_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void DEBUGONLY_Skip_To_Bullshit_Boss(TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGoal_Base, bool K2Node_ClassDynamicCast_bSuccess);
	void FlushTutorials(class UQtnGoal_FTUX_MeetButters_C* K2Node_DynamicCast_AsQtn_Goal_FTUX_Meet_Butters, bool K2Node_DynamicCast_bSuccess);
	void DEBUGONLY_Skip_To_Trail_Combat(TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGoal_Base, bool K2Node_ClassDynamicCast_bSuccess);
	void DEBUGONLY_Skip_To_Healing_Totem(TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGoal_Base, bool K2Node_ClassDynamicCast_bSuccess);
	void DEBUGONLY_Skip_To_Chase(TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGoal_Base, bool K2Node_ClassDynamicCast_bSuccess);
	void DEBUGONLY_SkipToRangedFight(TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGoal_Base, bool K2Node_ClassDynamicCast_bSuccess);
	void DEBUGONLY_SkipToSwarmerFight(TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGoal_Base, bool K2Node_ClassDynamicCast_bSuccess);
	void DEBUGONLY_SkipToFartEscape(TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGoal_Base, bool K2Node_ClassDynamicCast_bSuccess);
	void DEBUGONLY_Skip_To_Mantle(TSubclassOf<class UQtnGoal> CallFunc_LoadGoalClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGoal_Base, bool K2Node_ClassDynamicCast_bSuccess);
	void DEBUGONLY_Skip_To(class UClass* TodaysGoalClass, class UQtnGoal* Skip_to_goal, class UClass* LOCAL_TodaysGoal, int32 Temp_int_Loop_Counter_Variable, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_1, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class AQtnBodyPawn*>& CallFunc_GetAllBodyPawns_foundBodyPawns, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_Array_Get_Item, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, class UQtnGoal* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Less_IntInt_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void GetScriptedVOScene(struct FGameplayTag* ScriptedVOScene);
	void KickPlayerWhoTriedToJoin(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer);
	void bindInviteAcceptEvents();
	void OnJoinPendingInviteReady();
	void SetupSeedGoals_ServerOnly();
	void ExecuteUbergraph_QtnGoalManager_FTUX(int32 EntryPoint, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool K2Node_CustomEvent_isLocalPlayer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class AQtnPlayerPawn*>& CallFunc_GetAllPlayerPawns_foundPlayerPawns, int32 CallFunc_Array_Length_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsPlayingInEditor_ReturnValue, class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_1, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_2, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_3, class UQtnGoal* CallFunc_SpawnSeedGoal_ServerOnly_ReturnValue_1, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_4, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_5, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_6, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_7, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_8, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_9, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_10, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_11, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_12, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_13, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_14, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_15, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_16, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_17, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_18, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_19, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_20, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_21, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_22, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_23, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_24, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_25, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_26, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_27, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_28, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_29, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_30, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_31, class UQtnGoal* CallFunc_SpawnChildGoal_ServerOnly_ReturnValue_32);
};

}


