#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGoal_SP_Day1_DeliverKeysParent.QtnGoal_SP_Day1_DeliverKeysParent_C
// (None)

class UClass* UQtnGoal_SP_Day1_DeliverKeysParent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGoal_SP_Day1_DeliverKeysParent_C");

	return Clss;
}


// QtnGoal_SP_Day1_DeliverKeysParent_C QtnGoal_SP_Day1_DeliverKeysParent.Default__QtnGoal_SP_Day1_DeliverKeysParent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnGoal_SP_Day1_DeliverKeysParent_C* UQtnGoal_SP_Day1_DeliverKeysParent_C::GetDefaultObj()
{
	static class UQtnGoal_SP_Day1_DeliverKeysParent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnGoal_SP_Day1_DeliverKeysParent_C*>(UQtnGoal_SP_Day1_DeliverKeysParent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnGoal_SP_Day1_DeliverKeysParent.QtnGoal_SP_Day1_DeliverKeysParent_C.Update Bonus Zone Status Server Only
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal_SP_Day1_CE_Parent_C*bonus_goal                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Was_drop                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_DeliverKeysParent_C::Update_Bonus_Zone_Status_Server_Only(class UQtnGoal_SP_Day1_CE_Parent_C* bonus_goal, bool Was_drop, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverKeysParent_C", "Update Bonus Zone Status Server Only");

	Params::UQtnGoal_SP_Day1_DeliverKeysParent_C_Update_Bonus_Zone_Status_Server_Only_Params Parms{};

	Parms.bonus_goal = bonus_goal;
	Parms.Was_drop = Was_drop;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_DeliverKeysParent.QtnGoal_SP_Day1_DeliverKeysParent_C.Update Ambush Status Server Only
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnGoal_Ambush_Parent_C*    Ambush_Goal                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Was_drop                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_DeliverKeysParent_C::Update_Ambush_Status_Server_Only(class UQtnGoal_Ambush_Parent_C* Ambush_Goal, bool Was_drop, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverKeysParent_C", "Update Ambush Status Server Only");

	Params::UQtnGoal_SP_Day1_DeliverKeysParent_C_Update_Ambush_Status_Server_Only_Params Parms{};

	Parms.Ambush_Goal = Ambush_Goal;
	Parms.Was_drop = Was_drop;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_DeliverKeysParent.QtnGoal_SP_Day1_DeliverKeysParent_C.Pick Up Quest Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GoalPickup_C*            Item_picked_up                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_DeliverKeysParent_C::Pick_Up_Quest_Item(class ABP_GoalPickup_C* Item_picked_up, bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverKeysParent_C", "Pick Up Quest Item");

	Params::UQtnGoal_SP_Day1_DeliverKeysParent_C_Pick_Up_Quest_Item_Params Parms{};

	Parms.Item_picked_up = Item_picked_up;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_DeliverKeysParent.QtnGoal_SP_Day1_DeliverKeysParent_C.PlayPickupFacetime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_DeliverKeysParent_C::PlayPickupFacetime(bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsOnServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverKeysParent_C", "PlayPickupFacetime");

	Params::UQtnGoal_SP_Day1_DeliverKeysParent_C_PlayPickupFacetime_Params Parms{};

	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_DeliverKeysParent.QtnGoal_SP_Day1_DeliverKeysParent_C.UnbindItemUpdateEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_DeliverKeysParent_C::UnbindItemUpdateEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverKeysParent_C", "UnbindItemUpdateEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_DeliverKeysParent.QtnGoal_SP_Day1_DeliverKeysParent_C.OnGoalStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               WillEndImmediatelyFromLateJoin                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_DeliverKeysParent_C::OnGoalStart(bool WillEndImmediatelyFromLateJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverKeysParent_C", "OnGoalStart");

	Params::UQtnGoal_SP_Day1_DeliverKeysParent_C_OnGoalStart_Params Parms{};

	Parms.WillEndImmediatelyFromLateJoin = WillEndImmediatelyFromLateJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_DeliverKeysParent.QtnGoal_SP_Day1_DeliverKeysParent_C.updateOtherItemStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GoalPickup_C*            Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Delivered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Picked_up                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_DeliverKeysParent_C::UpdateOtherItemStatus(class ABP_GoalPickup_C* Item, bool Delivered, bool Picked_up)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverKeysParent_C", "updateOtherItemStatus");

	Params::UQtnGoal_SP_Day1_DeliverKeysParent_C_UpdateOtherItemStatus_Params Parms{};

	Parms.Item = Item;
	Parms.Delivered = Delivered;
	Parms.Picked_up = Picked_up;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QtnGoal_SP_Day1_DeliverKeysParent.QtnGoal_SP_Day1_DeliverKeysParent_C.postDeliverySequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_DeliverKeysParent_C::PostDeliverySequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverKeysParent_C", "postDeliverySequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_DeliverKeysParent.QtnGoal_SP_Day1_DeliverKeysParent_C.multicast_KeyBanner
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQtnGoal_SP_Day1_DeliverKeysParent_C::Multicast_KeyBanner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverKeysParent_C", "multicast_KeyBanner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QtnGoal_SP_Day1_DeliverKeysParent.QtnGoal_SP_Day1_DeliverKeysParent_C.ExecuteUbergraph_QtnGoal_SP_Day1_DeliverKeysParent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnServer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_willEndImmediatelyFromLateJoin                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOnServer_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_GoalPickup_C*            K2Node_CustomEvent_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_delivered                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_picked_up                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_StarksPondGas_C*         K2Node_DynamicCast_AsBP_Starks_Pond_Gas                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerHUDScreen_C*          CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerHUD_C*                K2Node_DynamicCast_AsPlayer_HUD                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQtnGoal_SP_Day1_DeliverKeysParent_C::ExecuteUbergraph_QtnGoal_SP_Day1_DeliverKeysParent(int32 EntryPoint, bool CallFunc_IsOnServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_willEndImmediatelyFromLateJoin, bool CallFunc_IsOnServer_ReturnValue_1, class ABP_GoalPickup_C* K2Node_CustomEvent_Item, bool K2Node_CustomEvent_delivered, bool K2Node_CustomEvent_picked_up, class ABP_StarksPondGas_C* K2Node_DynamicCast_AsBP_Starks_Pond_Gas, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnGoal_SP_Day1_DeliverKeysParent_C", "ExecuteUbergraph_QtnGoal_SP_Day1_DeliverKeysParent");

	Params::UQtnGoal_SP_Day1_DeliverKeysParent_C_ExecuteUbergraph_QtnGoal_SP_Day1_DeliverKeysParent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsOnServer_ReturnValue = CallFunc_IsOnServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_willEndImmediatelyFromLateJoin = K2Node_Event_willEndImmediatelyFromLateJoin;
	Parms.CallFunc_IsOnServer_ReturnValue_1 = CallFunc_IsOnServer_ReturnValue_1;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_CustomEvent_delivered = K2Node_CustomEvent_delivered;
	Parms.K2Node_CustomEvent_picked_up = K2Node_CustomEvent_picked_up;
	Parms.K2Node_DynamicCast_AsBP_Starks_Pond_Gas = K2Node_DynamicCast_AsBP_Starks_Pond_Gas;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_HUD = K2Node_DynamicCast_AsPlayer_HUD;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


