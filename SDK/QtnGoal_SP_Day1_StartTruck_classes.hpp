#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x3C8 - 0x2E0)
// BlueprintGeneratedClass QtnGoal_SP_Day1_StartTruck.QtnGoal_SP_Day1_StartTruck_C
class UQtnGoal_SP_Day1_StartTruck_C : public UGoalBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UGoalBase_C*                           GasGoal;                                           // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGoalBase_C*                           KeyGoal;                                           // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KeysDelivered;                                     // 0x2F8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         GasDelivered;                                      // 0x2F9(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52AA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASP_TruckCrash_CinematicBP_C*          Truck;                                             // 0x300(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  StartTruckFrobPrompt;                              // 0x308(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ACinematicSceneArchetype_BP_C*         CinematicActor;                                    // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CutsceneID;                                        // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52AB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ALocationMarker_BP_C*                  DummyTruckMarker;                                  // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnStruct_VOLine                     VO_StartTruck;                                     // 0x338(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ATargetLocationVolume_C*               VoVolume;                                          // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         VO_RandyLineSpoken;                                // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_Randy_Option1;                                  // 0x370(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         VO_OkForRandyReminder;                             // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_Randy_Option2;                                  // 0x3A0(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52B0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UQtnGoal_SP_Day1_StartTruck_C* GetDefaultObj();

	void VO_Stop_Second_Hub_Return_Conversation_Server_Only(class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void Get_VOVolume(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ATargetLocationVolume_C* K2Node_DynamicCast_AsTarget_Location_Volume, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void DEBUGONLY_EndGoal();
	void GetCinematicActor(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ACinematicSceneArchetype_BP_C* K2Node_DynamicCast_AsCinematic_Scene_Archetype_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOnServer_ReturnValue);
	void SetKeyGoal(class UQtnGoal_SP_Day1_DeliverKeysParent_C* Key_goal, bool CallFunc_IsOnServer_ReturnValue);
	void SetGasGoal(class UQtnGoal_SP_Day1_DeliverGasParent_C* Gas_goal, bool CallFunc_IsOnServer_ReturnValue);
	void GetTruck(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class ALocationMarker_BP_C* K2Node_DynamicCast_AsLocation_Marker_BP, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors_1, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, class ASP_TruckCrash_CinematicBP_C* K2Node_DynamicCast_AsSP_Truck_Crash_Cinematic_BP, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsOnServer_ReturnValue);
	void End_Previous_Goals(bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_1, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1);
	void CheckForGoalStart(bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnGoalSpawned_ServerOnly();
	void UpdateGasItemStatus(class ABP_GoalPickup_C* Item, bool Delivered, bool Picked_up);
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void TruckStarted();
	void bindGasEvents();
	void bindKeyEvents();
	void UpdateKeyItemStatus(class ABP_GoalPickup_C* Item, bool Delivered, bool Picked_up);
	void UnbindGasEvents();
	void UnbindKeyEvents();
	void CutsceneEnded(class UClass* Goal_class, int32 Cutscene_ID);
	void UnbindCutsceneEvent();
	void EndGoalSequence();
	void SetupCutscene();
	void Multicast_updateTruckFrobPrompt();
	void TeleportLateJoiner(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer);
	void bindVOEvents();
	void PlayerEnteredVOVOlume(class AQtnPlayerPawn* PlayerWhoEntered, bool OnExit);
	void UnbindVOEvents();
	void DoTruckStarted();
	void DoSetGasGoal(class UQtnGoal* GasGoal);
	void DoSetKeyGoal(class UQtnGoal* KeyGoal);
	void ExecuteUbergraph_QtnGoal_SP_Day1_StartTruck(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_GoalPickup_C* K2Node_CustomEvent_Item_1, bool K2Node_CustomEvent_delivered_1, bool K2Node_CustomEvent_picked_up_1, bool CallFunc_IsOnServer_ReturnValue, class ABP_StarksPondGas_C* K2Node_DynamicCast_AsBP_Starks_Pond_Gas, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsOnServer_ReturnValue_1, bool CallFunc_IsOnServer_ReturnValue_2, bool CallFunc_IsOnServer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, class UQtnGoal_SP_Day1_DeliveryParent_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsOnServer_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_1, class UQtnGoal_SP_Day1_DeliveryParent_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent_1, bool K2Node_DynamicCast_bSuccess_2, class ABP_GoalPickup_C* K2Node_CustomEvent_Item, bool K2Node_CustomEvent_delivered, bool K2Node_CustomEvent_picked_up, bool CallFunc_IsOnServer_ReturnValue_5, class ABP_StarksPondKeys_C* K2Node_DynamicCast_AsBP_Starks_Pond_Keys, bool K2Node_DynamicCast_bSuccess_3, class UQtnGoal_SP_Day1_DeliveryParent_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent_2, bool K2Node_DynamicCast_bSuccess_4, class UQtnGoal_SP_Day1_DeliveryParent_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Delivery_Parent_3, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_2, class UClass* K2Node_CustomEvent_goal_class, int32 K2Node_CustomEvent_Cutscene_ID, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsOnServer_ReturnValue_6, bool CallFunc_IsOnServer_ReturnValue_7, class UClass* CallFunc_GetObjectClass_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, class AQtnPlayerPawn* K2Node_Event_playerPawnSoul, class AQtnBodyPawn* K2Node_Event_occupiedBodyPawn, bool K2Node_Event_isLocalPlayer, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UQtnGoal*>& CallFunc_GetChildGoals_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class AQtnPlayerPawn* K2Node_CustomEvent_playerWhoEntered, bool K2Node_CustomEvent_onExit, bool CallFunc_IsServer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_StarksPond_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Starks_Pond, bool K2Node_DynamicCast_bSuccess_6, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, class UQtnGoal* K2Node_Event_gasGoal, class UQtnGoal* K2Node_Event_keyGoal, class UQtnGoal_SP_Day1_DeliverGasParent_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Deliver_Gas_Parent, bool K2Node_DynamicCast_bSuccess_7, class UQtnGoal_SP_Day1_DeliverKeysParent_C* K2Node_DynamicCast_AsQtn_Goal_SP_Day_1_Deliver_Keys_Parent, bool K2Node_DynamicCast_bSuccess_8, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_2);
};

}


