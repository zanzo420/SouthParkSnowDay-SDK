#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x179 (0x669 - 0x4F0)
// BlueprintGeneratedClass SkirmishBase.SkirmishBase_C
class ASkirmishBase_C : public AQtnSkirmish
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkirmishTickTrackingComponent_C*      SkirmishTickTrackingComponent;                     // 0x4F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x500(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ATravelVolume_BP_C*                    UpgradeStationGate;                                // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowCheatingEvents;                               // 0x510(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A2C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            SkirmishCheatEvent;                                // 0x518(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            SkirmishGroupSpawnedEvent;                         // 0x528(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsOverlappingAmbushSkirmish;                       // 0x538(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A2D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StopLootSpawnThreshold;                            // 0x53C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                ValidArcs;                                         // 0x540(0x10)(Edit, BlueprintVisible)
	bool                                         WaitingForGroupSpawn;                              // 0x550(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A2E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  WaitingGroup;                                      // 0x554(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A2F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABodyPawnAI_C*>                 AIsForIcons;                                       // 0x560(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, RepNotify, ContainsInstancedReference)
	TArray<class ABodyPawnAI_C*>                 HoldingArray;                                      // 0x570(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class ABodyPawnAI_C*>                 DeadSpawns;                                        // 0x580(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, RepNotify, ContainsInstancedReference)
	bool                                         IconTracking;                                      // 0x590(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         LOCAL_needInit;                                    // 0x591(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         StopSpawning;                                      // 0x592(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A30[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FleeDelay;                                         // 0x594(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CycleSpawnIndex;                                   // 0x598(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A31[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            DelayComplete;                                     // 0x5A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         InDelay;                                           // 0x5B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A32[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            VehicleSpawned;                                    // 0x5B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AActor*                                Vehicle;                                           // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ALoot_Container_Parent_C*>      SpawnedTreasures;                                  // 0x5D0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	class ASkirmishDoor_C*                       TimedDoor;                                         // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Ambrosia_C*>                TrackedAmbrosia;                                   // 0x5E8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         Timing;                                            // 0x5F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A33[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SkirmishTimer;                                     // 0x5FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SkirmishTimerComplete;                             // 0x600(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Skirmish_Goal_Event;                               // 0x610(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        SpawnCounter;                                      // 0x620(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A34[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ReceiveSkirmishNotify;                             // 0x628(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FName>                          SubTags;                                           // 0x638(0x10)(Edit, BlueprintVisible)
	bool                                         ValidToday;                                        // 0x648(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A35[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USkirmishActionBSWindowOpen_C*> OpenBSWindows;                                     // 0x650(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        TrueDeaths;                                        // 0x660(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PopAtIconCall;                                     // 0x664(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TrackingDoOver;                                    // 0x668(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ASkirmishBase_C* GetDefaultObj();

	void ForceRemoveAllAIIcons_ServerOnly(const TArray<class ABodyPawnAI_C*>& LOCAL_EmptyArray, const TArray<class ABodyPawnAI_C*>& LOCAL_HoldingArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TArray<class AQtnPawn*>& CallFunc_GetTrackedDeadPawns_ReturnValue, class AQtnPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, TArray<class AQtnPawn*>& CallFunc_GetTrackedLivingPawns_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, class AQtnPawn* CallFunc_Array_Get_Item_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI_1, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_IsServer_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void Apply_Icons_To_These_AI(TArray<class AQtnBodyPawn*>& AIs, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class AQtnPawn* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, enum class EQtnBodyAliveness CallFunc_GetBodyAliveness_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, class AQtnSkirmish* CallFunc_GetOwningSkirmish_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void DoOver_ServerOnly(TArray<class AQtnBodyPawn*>& RezzedAIs, const TArray<class ABodyPawnAI_C*>& TempHoldingArray, TArray<class AQtnPawn*>& CallFunc_GetTrackedLivingPawns_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void CloseAllSkirmishBSWindows(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnSpokeComponent* CallFunc_GetOwningSpoke_ReturnValue, class USpokeBP_C* K2Node_DynamicCast_AsSpoke_BP, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class USkirmishActionBSWindowOpen_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void AttemptBSWindowClose(class UQtnSpokeComponent* CallFunc_GetOwningSpoke_ReturnValue, class USpokeBP_C* K2Node_DynamicCast_AsSpoke_BP, bool K2Node_DynamicCast_bSuccess, class USkirmishActionBSWindowOpen_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void AttemptBSWindowOpen(class USkirmishActionBSWindowOpen_C* bsWindow, class UQtnSpokeComponent* CallFunc_GetOwningSpoke_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class USpokeBP_C* K2Node_DynamicCast_AsSpoke_BP, bool K2Node_DynamicCast_bSuccess);
	void GatherBPErrors(TArray<class FString>* ErrorMsgs, int32 NumCloseWindows, int32 NumOpenWindows, const TArray<class FString>& Result, const class FString& Temp_string_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TArray<class UQtnSkirmishAction*>& CallFunc_GatherSkirmishActions_gatheredActions, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, TArray<class UQtnSkirmishAction*>& CallFunc_GatherSkirmishActions_gatheredActions_1, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class UQtnSkirmishAction*>& CallFunc_GatherSkirmishActions_gatheredActions_2, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_2);
	struct FLinearColor GetVisualizationColor(class AActor* RelevantActor, bool ForLines, const struct FLinearColor& CallFunc_MakeRandomLinearColor_ReturnValue, class ATravelVolume_BP_C* K2Node_DynamicCast_AsTravel_Volume_BP, bool K2Node_DynamicCast_bSuccess, class AQtnAIJobActorBase_C* K2Node_DynamicCast_AsQtn_AIJob_Actor_Base, bool K2Node_DynamicCast_bSuccess_1, class AQtnSpawner* K2Node_DynamicCast_AsQtn_Spawner, bool K2Node_DynamicCast_bSuccess_2);
	class FString GatherSkirmishInfo(const class FString& Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_4, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, int32 CallFunc_StaticGetPIEArc_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_18, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_19, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_20, const struct FQtnSkirmishTriggerDef& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FQtnSkirmishResponse& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UQtnSkirmishAction* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_GetClassNameFromObject_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_21, class USkirmishActionSpawnGroup_C* K2Node_DynamicCast_AsSkirmish_Action_Spawn_Group, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_22, const class FString& CallFunc_Conv_NameToString_ReturnValue, class USkirmishActionBSWindowOpen_C* K2Node_DynamicCast_AsSkirmish_Action_BSWindow_Open, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_23, const class FString& CallFunc_Concat_StrStr_ReturnValue_24, class UClass* CallFunc_Array_Get_Item_3, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_25, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class USkirmishActionNotifyGoal_C* K2Node_DynamicCast_AsSkirmish_Action_Notify_Goal, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_26, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_27, bool CallFunc_IsValidClass_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_28, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, const class FString& CallFunc_SelectString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_GetClassNameFromObject_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_29, const class FString& CallFunc_Concat_StrStr_ReturnValue_30, const class FString& CallFunc_Concat_StrStr_ReturnValue_31, int32 CallFunc_Array_Get_Item_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_32, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_33, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_4, const class FString& CallFunc_GatherSkirmishInfo_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_34);
	void GatherRelevantActors(TArray<class AActor*>* RelevantActors, const TArray<class AActor*>& LocalRelevantActors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_4, int32 CallFunc_StaticGetPIEArc_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Array_Index_Variable_5, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FQtnSkirmishTriggerDef& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FQtnSkirmishResponse& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UQtnSkirmishAction* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, class USkirmishActionSpawnTreasure_C* K2Node_DynamicCast_AsSkirmish_Action_Spawn_Treasure, bool K2Node_DynamicCast_bSuccess, class USkirmishActionToggleJobs_C* K2Node_DynamicCast_AsSkirmish_Action_Toggle_Jobs, bool K2Node_DynamicCast_bSuccess_1, class AQtnSpawner* CallFunc_Array_Get_Item_3, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class AActor* CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class AQtnAIJobActorBase_C* K2Node_DynamicCast_AsQtn_AIJob_Actor_Base, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_AddUnique_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_Get_Item_5, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue, TArray<class AActor*>& CallFunc_GatherRelevantActors_relevantActors);
	void CheckForMissingIcons(const TArray<class ABodyPawnAI_C*>& LOCAL_MissingPawns, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class ABodyPawnAI_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TArray<class AQtnPawn*>& CallFunc_GetTrackedLivingPawns_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AQtnPawn* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
	void GetActorIndicatorData(class AActor* Actor, bool* Has_data, struct FIndicatorData* Data, TScriptInterface<class IIndicatorData_Interface_C> K2Node_DynamicCast_AsIndicator_Data_Interface, bool K2Node_DynamicCast_bSuccess, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_1, const struct FIndicatorData& CallFunc_GetIndicatorData_indicatorData, enum class EQtnBodyAliveness CallFunc_GetBodyAliveness_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Is_Intended_Ambush(bool* Intended, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UGoalBase_C* K2Node_DynamicCast_AsGoal_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void IsValidToday(bool* Valid_today, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCurrentArc_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void HandleDoorTimers(float Delta, bool CallFunc_IsServer_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void UnlockTreasures(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, class ALoot_Container_Parent_C* CallFunc_Array_Get_Item, class ALoot_Container_TreasureChest_C* K2Node_DynamicCast_AsLoot_Container_Treasure_Chest, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetVehicle(class AActor* Vehicle, bool CallFunc_IsServer_ReturnValue);
	void DespawnTrackedAI(TArray<class UClass*>& IgnoreTheseClasses, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, TArray<class AQtnPawn*>& CallFunc_GetTrackedLivingPawns_ReturnValue, class AQtnPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void ApplyIconsToRemainingAI(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AQtnPawn*>& CallFunc_GetTrackedLivingPawns_ReturnValue, class AQtnPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, enum class EQtnBodyAliveness CallFunc_GetBodyAliveness_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void OnRep_deadSpawns();
	void OnRep_iconTracking();
	void Update_Icons(bool WantIcons, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class AActor* CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OnRep_AIsForIcons();
	void Add_Remove_Icon(bool Adding, class AActor* ActorToTrack, const struct FIndicatorData& LOCAL_IndicatorData, bool CallFunc_GetActorIndicatorData_has_data, const struct FIndicatorData& CallFunc_GetActorIndicatorData_data, bool CallFunc_IsValid_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsLocalPlayerUIReadyBP_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsReadyForGameplay_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_2, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess, class UScreenIndicator_C* CallFunc_AddRemoveTrackedActor_indicatorOut, class UScreenIndicator_C* CallFunc_AddRemoveTrackedActor_indicatorOut_1);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void DelayAndCheckForGroupSpawned(class FName GroupToCheckFor);
	void bindAIDeathIconEvents(class ABodyPawnAI_C* AI);
	void RemoveIconFromDeadAI(class AActor* DeadAI);
	void UnbindAIDeathEvent(class ABodyPawnAI_C* AI);
	void Local_CheckForIconRefresh();
	void Multicast_DisplayBanner(class FText Banner_Text, class USoundCue* Sound);
	void DelayAndCheckForRemainingAI(TArray<class UClass*>& IgnoreTheseClasses);
	void CustomDelayWithEvent(float DelayTime);
	void UpdateSpawnCount_ServerOnly(class AQtnSkirmish* Skirmish, class AQtnPawn* SkirmishPawn);
	void RefreshValidity();
	void Server_UpdateTrueDeathTally(class AQtnSkirmish* Skirmish, class AQtnPawn* SkirmishPawn);
	void ExecuteUbergraph_SkirmishBase(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class ABodyPawnAI_C* K2Node_CustomEvent_AI_1, class AActor* K2Node_CustomEvent_deadAI, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue_1, class ABodyPawn_Ent_C* K2Node_DynamicCast_AsBody_Pawn_Ent, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class ABodyPawnAI_C* K2Node_CustomEvent_AI, TArray<class FName>& CallFunc_GetSpawnGroupHistory_ServerOnly_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, class FName K2Node_CustomEvent_GroupToCheckFor, float K2Node_Event_DeltaSeconds, bool CallFunc_Array_Contains_ReturnValue, class FText K2Node_CustomEvent_Banner_Text, class USoundCue* K2Node_CustomEvent_sound, bool CallFunc_IsValid_ReturnValue_2, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess_2, TArray<class UClass*>& K2Node_CustomEvent_ignoreTheseClasses, float K2Node_CustomEvent_delayTime, bool CallFunc_IsServer_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_3, class AQtnSkirmish* K2Node_CustomEvent_Skirmish_1, class AQtnPawn* K2Node_CustomEvent_skirmishPawn_1, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, int32 CallFunc_Add_IntInt_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI_1, bool K2Node_DynamicCast_bSuccess_3, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_isValidToday_valid_today, bool CallFunc_isValidToday_valid_today_1, bool CallFunc_Is_Intended_Ambush_Intended, bool CallFunc_BooleanAND_ReturnValue, class AQtnSkirmish* K2Node_CustomEvent_Skirmish, class AQtnPawn* K2Node_CustomEvent_skirmishPawn, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Variable_1, TArray<class AQtnPawn*>& CallFunc_GetTrackedLivingPawns_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<class AQtnPawn*>& CallFunc_GetTrackedLivingPawns_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void ReceiveSkirmishNotify__DelegateSignature(class ASkirmishBase_C* Skirmish_Sending_Event, class FName Tag);
	void Skirmish_Goal_Event__DelegateSignature(class UQtnGoal* Goal_calling_event, class FName Tag);
	void SkirmishTimerComplete__DelegateSignature(class FName CurrentTimerTag);
	void VehicleSpawned__DelegateSignature(class AActor* Vehicle);
	void DelayComplete__DelegateSignature();
	void SkirmishGroupSpawnedEvent__DelegateSignature(class FName GroupName);
	void SkirmishCheatEvent__DelegateSignature();
};

}


