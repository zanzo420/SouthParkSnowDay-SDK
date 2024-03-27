#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2F9 (0x841 - 0x548)
// BlueprintGeneratedClass QtnGoal_DT_Act3_FOS_Wytchfire.QtnGoal_DT_Act3_FOS_Wytchfire_C
class UQtnGoal_DT_Act3_FOS_Wytchfire_C : public UQtnGoal_DT_Arc3_FOSParent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x548(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AWytchfireBrazier_BP_C*                WytchfireSource;                                   // 0x550(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AWytchfireBrazier_BP_C*>        WytchfireTargets;                                  // 0x558(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify)
	int32                                        TotalBraziersToLight;                              // 0x568(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentBraziersLit;                                // 0x56C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQtnStruct_VOLine>             VO_LitBeaconGoHigher;                              // 0x570(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_FinalBeaconLit_Butters;                         // 0x580(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_FinalBeaconLit_Dougie;                          // 0x590(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_MethlabLore;                                    // 0x5A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         SomeoneCaughtFire;                                 // 0x5B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_UrgeToKennysHouse;                              // 0x5B8(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnStruct_VOLine>             VO_OnFirstWytchfire;                               // 0x5E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         PlayedFirstWytchfireVO;                            // 0x5F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayedTorchlightUrge;                              // 0x5F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66D9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_TorchlightUrge;                                 // 0x5F8(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnStruct_VOLine>             VO_LitBeacon;                                      // 0x620(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  GoalInstruction_OnLit;                             // 0x630(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         brazierTaskStarted;                                // 0x648(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         SomeoneSetOnFire;                                  // 0x649(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_66DB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AWytchfireBrazier_BP_C*>        SecondSmallBrazierSet;                             // 0x650(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	class FText                                  GoalInstruction_GoToSteeds;                        // 0x660(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         GoToSteeds;                                        // 0x678(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_66DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ADeepSnow_BP_C*>                NearbyDeepSnow;                                    // 0x680(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ATargetLocationVolume_C*               SteedVolume;                                       // 0x690(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQtnStruct_VOLine>             VO_OnLongBurn;                                     // 0x698(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        LowHealthPercentage;                               // 0x6A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GoalDetail_LightPrefix;                            // 0x6B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  GoalDetail_Slash;                                  // 0x6C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         VO_AllLit;                                         // 0x6E0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_66E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AWytchfireTorch_BP_C*>          VO_torches;                                        // 0x6E8(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_BeaconUrge;                                     // 0x6F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        VO_TorchesLitCount;                                // 0x708(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        VO_MaxTorchesForWarning;                           // 0x70C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnStruct_VOLine                     VO_Reminder;                                       // 0x710(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnStruct_VOLine>             VO_FirstBeacon;                                    // 0x738(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FQtnStruct_VOLine                     VO_SecondBeacon;                                   // 0x748(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_ThirdBeacon;                                    // 0x770(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_FourthBeacon;                                   // 0x798(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnStruct_VOLine>             VO_FinalBeacon;                                    // 0x7C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            StartObjectiveHighlight;                           // 0x7D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          VO_KennyHouseReminderTimer;                        // 0x7E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FQtnStruct_VOLine                     VO_KennyHouseReminder;                             // 0x7E8(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VO_BeaconReminderTime;                             // 0x810(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66E9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          VO_BeaconReminderTimer;                            // 0x818(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         VO_PlayersReachedWiderLevel;                       // 0x820(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          VO_LitForABitTimer;                                // 0x828(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQtnStruct_VOLine>             VO_NewKidOP;                                       // 0x830(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         VO_Heard2ndFloor;                                  // 0x840(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UQtnGoal_DT_Act3_FOS_Wytchfire_C* GetDefaultObj();

	void VO_Beacon_Reminder_Timer_Server_Only(bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void VO_Reset_Reminder_Timer_Server_Only(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void VO_Play_Local_Beacon_Reminder(bool LOCAL_OnFire, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UQtnStatusEffect*>& CallFunc_GetAllStatusEffects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UQtnStatusEffect* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void VO_Player_Lit_for_ABit_Server_Only(bool CallFunc_IsServer_ReturnValue);
	void PostFlyCamEvents(bool CallFunc_IsServer_ReturnValue);
	void OnRep_VO_AllLit();
	void Server_Porta_Potty_Complete(bool CallFunc_IsServer_ReturnValue);
	void DEBUGONLY_Start_Goal(bool CallFunc_IsServer_ReturnValue);
	void IsThisPlayerAtLowHealth(class ABodyPawnPlayer_C* Player, bool* At_Low_Health, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void Get_Steed_Directions_Volume(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ATargetLocationVolume_C* K2Node_DynamicCast_AsTarget_Location_Volume, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue);
	void OnRep_goToSteeds();
	void StartWytchfireTargetIcons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AWytchfireBrazier_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnRep_someoneSetOnFire();
	void OnRep_brazierTaskStarted();
	void CheckForVO_OnTorchlightUrge(bool CallFunc_IsServer_ReturnValue);
	void VO_Direct_Reminder(bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void CheckForVO_FirstWytchfire(bool CallFunc_IsServer_ReturnValue);
	void Post_VOConversation_Server_Only();
	void Check_For_VO_Urge_to_Kennys_House(bool CallFunc_IsOnServer_ReturnValue);
	void OnRep_currentBraziersLit();
	void Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AWytchfireBrazier_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsServer_ReturnValue);
	void TaskStartedSequence(int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsOnServer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AWytchfireBrazier_BP_C* K2Node_DynamicCast_AsWytchfire_Brazier_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void TaskCompleteSequence(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void LOCAL_UpdateGoalDetail(const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void OnRep_wytchfireTargets();
	void GetSecondSmallBrazier(class FName Temp_name_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsOnServer_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AWytchfireBrazier_BP_C* K2Node_DynamicCast_AsWytchfire_Brazier_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void GetWytchfireTargets(int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsOnServer_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class AWytchfireBrazier_BP_C* K2Node_DynamicCast_AsWytchfire_Brazier_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, class AWytchfireTorch_BP_C* K2Node_DynamicCast_AsWytchfire_Torch_BP, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_AddUnique_ReturnValue_1);
	void GetWytchfireSource(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsOnServer_ReturnValue, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AWytchfireBrazier_BP_C* K2Node_DynamicCast_AsWytchfire_Brazier_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnGoalSpawned_ServerOnly();
	void bindWytchfireTargetEvents();
	void brazierLitEvent(class AWytchfireBrazier_BP_C* brazier);
	void UnbindBrazierLitEvent(class AWytchfireBrazier_BP_C* brazier);
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void bindWytchfireSourceFirstLit();
	void SourceFirstCatchFire(class AWytchfireBrazier_BP_C* brazier);
	void UnbindSourceBrazier();
	void bindFirstLightingEvent();
	void FirstLight(class AWytchfireBrazier_BP_C* brazier);
	void UnbindFirstLightingEvent();
	void bindTorchCountEvent();
	void LitTorch(class AWytchfireBrazier_BP_C* brazier);
	void UnbindTorchCountEvent();
	void VO_playKennyHouseUrge_ServerOnly();
	void VO_KennyHouseReminder_ServerOnly();
	void StartIntroAndKennyHouseUrgeTimer_ServerOnly();
	void Multicast_VO_BeaconReminder();
	void VO_FirstWytchfire_ServerOnly();
	void ExecuteUbergraph_QtnGoal_DT_Act3_FOS_Wytchfire(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Array_Index_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Array_Index_Variable_5, bool CallFunc_IsOnServer_ReturnValue, class AWytchfireBrazier_BP_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AWytchfireBrazier_BP_C* K2Node_CustomEvent_brazier_4, bool CallFunc_IsOnServer_ReturnValue_1, class AWytchfireBrazier_BP_C* K2Node_CustomEvent_brazier_3, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AWytchfireBrazier_BP_C* K2Node_CustomEvent_brazier_2, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_6, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_3, class AWytchfireBrazier_BP_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, class AWytchfireBrazier_BP_C* K2Node_CustomEvent_brazier_1, bool CallFunc_IsServer_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_6, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_7, bool CallFunc_IsServer_ReturnValue_5, class AWytchfireBrazier_BP_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_IsServer_ReturnValue_6, class AWytchfireTorch_BP_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AWytchfireBrazier_BP_C* K2Node_CustomEvent_brazier, bool CallFunc_IsServer_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_8, int32 Temp_int_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue_8, class AWytchfireTorch_BP_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_5, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_5, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsServer_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsServer_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_11, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, bool CallFunc_IsServer_ReturnValue_12, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_8, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_6, int32 Temp_int_Array_Index_Variable_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class AWytchfireBrazier_BP_C* CallFunc_Array_Get_Item_9, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_10, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_11, bool CallFunc_EqualEqual_IntInt_ReturnValue_2);
	void StartObjectiveHighlight__DelegateSignature();
};

}


