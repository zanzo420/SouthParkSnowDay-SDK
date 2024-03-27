#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UnlockLineItem_Widget.UnlockLineItem_Widget_C
// (None)

class UClass* UUnlockLineItem_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UnlockLineItem_Widget_C");

	return Clss;
}


// UnlockLineItem_Widget_C UnlockLineItem_Widget.Default__UnlockLineItem_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUnlockLineItem_Widget_C* UUnlockLineItem_Widget_C::GetDefaultObj()
{
	static class UUnlockLineItem_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUnlockLineItem_Widget_C*>(UUnlockLineItem_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.OnUnlockListEntryPressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUnlockLineItem_Widget_C*    UnlockLineItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AllowHold                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUnlockLineItem_Widget_C::OnUnlockListEntryPressed(bool IsPressed, class UUnlockLineItem_Widget_C* UnlockLineItem, bool* AllowHold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockLineItem_Widget_C", "OnUnlockListEntryPressed");

	Params::UUnlockLineItem_Widget_C_OnUnlockListEntryPressed_Params Parms{};

	Parms.IsPressed = IsPressed;
	Parms.UnlockLineItem = UnlockLineItem;

	UObject::ProcessEvent(Func, &Parms);

	if (AllowHold != nullptr)
		*AllowHold = Parms.AllowHold;

}


// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UUnlockLineItem_Widget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockLineItem_Widget_C", "OnFocusReceived");

	Params::UUnlockLineItem_Widget_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUnlockLineItem_Widget_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockLineItem_Widget_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUnlockLineItem_Widget_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockLineItem_Widget_C", "BP_OnItemExpansionChanged");

	Params::UUnlockLineItem_Widget_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUnlockLineItem_Widget_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockLineItem_Widget_C", "BP_OnItemSelectionChanged");

	Params::UUnlockLineItem_Widget_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.OnUnlockListEntryHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUnlockLineItem_Widget_C*    UnlockLineItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUnlockLineItem_Widget_C::OnUnlockListEntryHovered(bool IsHovered, class UUnlockLineItem_Widget_C* UnlockLineItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockLineItem_Widget_C", "OnUnlockListEntryHovered");

	Params::UUnlockLineItem_Widget_C_OnUnlockListEntryHovered_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.UnlockLineItem = UnlockLineItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.AnimSeq_Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUnlockLineItem_Widget_C::AnimSeq_Hover(bool IsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockLineItem_Widget_C", "AnimSeq_Hover");

	Params::UUnlockLineItem_Widget_C_AnimSeq_Hover_Params Parms{};

	Parms.IsHovered = IsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.InitUnlockInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        UnlockId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUnlockLineItem_Widget_C::InitUnlockInfo(class FName UnlockId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockLineItem_Widget_C", "InitUnlockInfo");

	Params::UUnlockLineItem_Widget_C_InitUnlockInfo_Params Parms{};

	Parms.UnlockId = UnlockId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.BndEvt__UnlockLineItem_Widget_Button_UnlockItem_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUnlockLineItem_Widget_C::BndEvt__UnlockLineItem_Widget_Button_UnlockItem_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockLineItem_Widget_C", "BndEvt__UnlockLineItem_Widget_Button_UnlockItem_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.BndEvt__UnlockLineItem_Widget_Button_UnlockItem_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUnlockLineItem_Widget_C::BndEvt__UnlockLineItem_Widget_Button_UnlockItem_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockLineItem_Widget_C", "BndEvt__UnlockLineItem_Widget_Button_UnlockItem_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUnlockLineItem_Widget_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockLineItem_Widget_C", "OnListItemObjectSet");

	Params::UUnlockLineItem_Widget_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.ForceUnhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUnlockLineItem_Widget_C::ForceUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockLineItem_Widget_C", "ForceUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.ExecuteUbergraph_UnlockLineItem_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsHovered                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUnlockLineItem_Widget_C*    K2Node_Event_UnlockLineItem                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsHovered                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_UnlockId                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUnlockData_O_C*             K2Node_DynamicCast_AsUnlock_Data_O                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetUnlockInfo_displayName                               (None)
// class FText                        CallFunc_GetUnlockInfo_description                               (None)
// bool                               CallFunc_GetUnlockInfo_isSecret                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetUnlockInfo_icon                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetUnlockInfo_unlockKey                                 (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetUnlockInfo_unlockCategory                            (NoDestructor, HasGetValueTypeHash)
// struct FQtnUnlockRewards           CallFunc_GetUnlockInfo_unlockRewards                             (None)
// class FText                        CallFunc_GetUnlockInfo_rewardName                                (None)
// TSubclassOf<class UQtnDLCInfo>     CallFunc_GetUnlockInfo_requiredDLC                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetUnlockProgress_ClientOnly_isUnlocked                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetUnlockProgress_ClientOnly_numOccurrences             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUnlockProgress_ClientOnly_targetOccurrences          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnUnlockListEntry_BPI_C>K2Node_DynamicCast_AsQtn_Unlock_List_Entry_BPI                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUnlockLineItem_Widget_C::ExecuteUbergraph_UnlockLineItem_Widget(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, bool K2Node_Event_IsHovered, class UUnlockLineItem_Widget_C* K2Node_Event_UnlockLineItem, bool K2Node_CustomEvent_IsHovered, class FName K2Node_CustomEvent_UnlockId, class UObject* K2Node_Event_ListItemObject, class UUnlockData_O_C* K2Node_DynamicCast_AsUnlock_Data_O, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetUnlockInfo_displayName, class FText CallFunc_GetUnlockInfo_description, bool CallFunc_GetUnlockInfo_isSecret, class UTexture2D* CallFunc_GetUnlockInfo_icon, const struct FGameplayTag& CallFunc_GetUnlockInfo_unlockKey, const struct FGameplayTag& CallFunc_GetUnlockInfo_unlockCategory, const struct FQtnUnlockRewards& CallFunc_GetUnlockInfo_unlockRewards, class FText CallFunc_GetUnlockInfo_rewardName, TSubclassOf<class UQtnDLCInfo> CallFunc_GetUnlockInfo_requiredDLC, bool CallFunc_GetUnlockProgress_ClientOnly_isUnlocked, int32 CallFunc_GetUnlockProgress_ClientOnly_numOccurrences, int32 CallFunc_GetUnlockProgress_ClientOnly_targetOccurrences, TScriptInterface<class IQtnUnlockListEntry_BPI_C> K2Node_DynamicCast_AsQtn_Unlock_List_Entry_BPI, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockLineItem_Widget_C", "ExecuteUbergraph_UnlockLineItem_Widget");

	Params::UUnlockLineItem_Widget_C_ExecuteUbergraph_UnlockLineItem_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_IsHovered = K2Node_Event_IsHovered;
	Parms.K2Node_Event_UnlockLineItem = K2Node_Event_UnlockLineItem;
	Parms.K2Node_CustomEvent_IsHovered = K2Node_CustomEvent_IsHovered;
	Parms.K2Node_CustomEvent_UnlockId = K2Node_CustomEvent_UnlockId;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_DynamicCast_AsUnlock_Data_O = K2Node_DynamicCast_AsUnlock_Data_O;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUnlockInfo_displayName = CallFunc_GetUnlockInfo_displayName;
	Parms.CallFunc_GetUnlockInfo_description = CallFunc_GetUnlockInfo_description;
	Parms.CallFunc_GetUnlockInfo_isSecret = CallFunc_GetUnlockInfo_isSecret;
	Parms.CallFunc_GetUnlockInfo_icon = CallFunc_GetUnlockInfo_icon;
	Parms.CallFunc_GetUnlockInfo_unlockKey = CallFunc_GetUnlockInfo_unlockKey;
	Parms.CallFunc_GetUnlockInfo_unlockCategory = CallFunc_GetUnlockInfo_unlockCategory;
	Parms.CallFunc_GetUnlockInfo_unlockRewards = CallFunc_GetUnlockInfo_unlockRewards;
	Parms.CallFunc_GetUnlockInfo_rewardName = CallFunc_GetUnlockInfo_rewardName;
	Parms.CallFunc_GetUnlockInfo_requiredDLC = CallFunc_GetUnlockInfo_requiredDLC;
	Parms.CallFunc_GetUnlockProgress_ClientOnly_isUnlocked = CallFunc_GetUnlockProgress_ClientOnly_isUnlocked;
	Parms.CallFunc_GetUnlockProgress_ClientOnly_numOccurrences = CallFunc_GetUnlockProgress_ClientOnly_numOccurrences;
	Parms.CallFunc_GetUnlockProgress_ClientOnly_targetOccurrences = CallFunc_GetUnlockProgress_ClientOnly_targetOccurrences;
	Parms.K2Node_DynamicCast_AsQtn_Unlock_List_Entry_BPI = K2Node_DynamicCast_AsQtn_Unlock_List_Entry_BPI;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnlockLineItem_Widget.UnlockLineItem_Widget_C.CallHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Focused                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUnlockLineItem_Widget_C::CallHovered__DelegateSignature(bool Focused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnlockLineItem_Widget_C", "CallHovered__DelegateSignature");

	Params::UUnlockLineItem_Widget_C_CallHovered__DelegateSignature_Params Parms{};

	Parms.Focused = Focused;

	UObject::ProcessEvent(Func, &Parms);

}

}


