#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x569 - 0x501)
// BlueprintGeneratedClass QtnGoal_SP_Day1_DeliverKeysParent.QtnGoal_SP_Day1_DeliverKeysParent_C
class UQtnGoal_SP_Day1_DeliverKeysParent_C : public UQtnGoal_SP_Day1_DeliveryParent_C
{
public:
	uint8                                        Pad_6895[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x508(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         GasDelivered;                                      // 0x510(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         GasPickedUp;                                       // 0x511(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6897[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_KeyPickupWithGas;                               // 0x518(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6898[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_KeyPickup;                                      // 0x540(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6899[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         KeysNotified;                                      // 0x568(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UQtnGoal_SP_Day1_DeliverKeysParent_C* GetDefaultObj();

	void Update_Bonus_Zone_Status_Server_Only(class UQtnGoal_SP_Day1_CE_Parent_C* bonus_goal, bool Was_drop, bool CallFunc_IsServer_ReturnValue);
	void Update_Ambush_Status_Server_Only(class UQtnGoal_Ambush_Parent_C* Ambush_Goal, bool Was_drop, bool CallFunc_IsServer_ReturnValue);
	void Pick_Up_Quest_Item(class ABP_GoalPickup_C* Item_picked_up, bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void PlayPickupFacetime(bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsOnServer_ReturnValue);
	void UnbindItemUpdateEvents();
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void UpdateOtherItemStatus(class ABP_GoalPickup_C* Item, bool Delivered, bool Picked_up);
	void PostDeliverySequence();
	void Multicast_KeyBanner();
	void ExecuteUbergraph_QtnGoal_SP_Day1_DeliverKeysParent(int32 EntryPoint, bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsOnServer_ReturnValue_1, class ABP_GoalPickup_C* K2Node_CustomEvent_Item, bool K2Node_CustomEvent_delivered, bool K2Node_CustomEvent_picked_up, class ABP_StarksPondGas_C* K2Node_DynamicCast_AsBP_Starks_Pond_Gas, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess_1);
};

}


