#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_PopListManager_Widget.BP_PopListManager_Widget_C
// (None)

class UClass* UBP_PopListManager_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PopListManager_Widget_C");

	return Clss;
}


// BP_PopListManager_Widget_C BP_PopListManager_Widget.Default__BP_PopListManager_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PopListManager_Widget_C* UBP_PopListManager_Widget_C::GetDefaultObj()
{
	static class UBP_PopListManager_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PopListManager_Widget_C*>(UBP_PopListManager_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PopListManager_Widget.BP_PopListManager_Widget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_PopListManager_Widget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopListManager_Widget_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PopListManager_Widget.BP_PopListManager_Widget_C.CheckForEmpty
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PopListManager_Widget_C::CheckForEmpty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopListManager_Widget_C", "CheckForEmpty");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PopListManager_Widget.BP_PopListManager_Widget_C.GenerateListItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IQtnItemDataProviderInterface>ItemPickup                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PopListManager_Widget_C::GenerateListItem(TScriptInterface<class IQtnItemDataProviderInterface> ItemPickup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopListManager_Widget_C", "GenerateListItem");

	Params::UBP_PopListManager_Widget_C_GenerateListItem_Params Parms{};

	Parms.ItemPickup = ItemPickup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PopListManager_Widget.BP_PopListManager_Widget_C.OnPopListCountChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PopListManager_Widget_C::OnPopListCountChangedEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopListManager_Widget_C", "OnPopListCountChangedEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PopListManager_Widget.BP_PopListManager_Widget_C.ExecuteUbergraph_BP_PopListManager_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_PopListItem_Widget_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnItemDataProviderInterface>K2Node_CustomEvent_ItemPickup                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_FetchItemActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALootItem_Archetype_C*       K2Node_DynamicCast_AsLoot_Item_Archetype                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_PopListItem_Widget_C*    CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PopListManager_Widget_C::ExecuteUbergraph_BP_PopListManager_Widget(int32 EntryPoint, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UBP_PopListItem_Widget_C* CallFunc_Create_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, TScriptInterface<class IQtnItemDataProviderInterface> K2Node_CustomEvent_ItemPickup, class AActor* CallFunc_FetchItemActor_ReturnValue, class ALootItem_Archetype_C* K2Node_DynamicCast_AsLoot_Item_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UBP_PopListItem_Widget_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopListManager_Widget_C", "ExecuteUbergraph_BP_PopListManager_Widget");

	Params::UBP_PopListManager_Widget_C_ExecuteUbergraph_BP_PopListManager_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_CustomEvent_ItemPickup = K2Node_CustomEvent_ItemPickup;
	Parms.CallFunc_FetchItemActor_ReturnValue = CallFunc_FetchItemActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsLoot_Item_Archetype = K2Node_DynamicCast_AsLoot_Item_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PopListManager_Widget.BP_PopListManager_Widget_C.WalletPopupsCleared__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PopListManager_Widget_C::WalletPopupsCleared__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopListManager_Widget_C", "WalletPopupsCleared__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PopListManager_Widget.BP_PopListManager_Widget_C.PopupOnHUD__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PopListItem_Widget_C*    PopupWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PopListManager_Widget_C::PopupOnHUD__DelegateSignature(class UBP_PopListItem_Widget_C* PopupWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PopListManager_Widget_C", "PopupOnHUD__DelegateSignature");

	Params::UBP_PopListManager_Widget_C_PopupOnHUD__DelegateSignature_Params Parms{};

	Parms.PopupWidget = PopupWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


