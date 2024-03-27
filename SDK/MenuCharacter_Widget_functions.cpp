#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MenuCharacter_Widget.MenuCharacter_Widget_C
// (None)

class UClass* UMenuCharacter_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuCharacter_Widget_C");

	return Clss;
}


// MenuCharacter_Widget_C MenuCharacter_Widget.Default__MenuCharacter_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuCharacter_Widget_C* UMenuCharacter_Widget_C::GetDefaultObj()
{
	static class UMenuCharacter_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuCharacter_Widget_C*>(UMenuCharacter_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.RequestCurrencyVisibilities
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowTP                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowDM                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowPP                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuCharacter_Widget_C::RequestCurrencyVisibilities(bool* ShowTP, bool* ShowDM, bool* ShowPP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "RequestCurrencyVisibilities");

	Params::UMenuCharacter_Widget_C_RequestCurrencyVisibilities_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShowTP != nullptr)
		*ShowTP = Parms.ShowTP;

	if (ShowDM != nullptr)
		*ShowDM = Parms.ShowDM;

	if (ShowPP != nullptr)
		*ShowPP = Parms.ShowPP;

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.OnListEntryPressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCosmeticItemSlot_C*         CosmeticItemSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFQtnStoreItem              QtnStoreItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               AllowHold                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCosmeticItemSlot_C*         LOCAL_SelectedCosmeticItemSlot                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnAppearanceSlot      LOCAL_AppearanceSlot                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      LOCAL_PressedItemID                                              (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Unequip_Cosmetic_SlotString                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnAppearanceSlot      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnDLCManager*              CallFunc_GetDLCManager_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCharacterBodyMesh*       CallFunc_GetCosmeticItem_OutBodyMesh                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UQtnEmoteVerb_Archetype_C>CallFunc_GetCosmeticItem_OutEmoteVerb                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetCosmeticItem_requiredDLC                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCosmeticItem_DLCExistsInStore                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCosmeticCurrentlyEquipped_IsEquipped_                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnAppearanceSlot      CallFunc_IsCosmeticCurrentlyEquipped_TargetSlot                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPurchasedDLC_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuCharacter_Widget_C::OnListEntryPressed(bool IsPressed, class UCosmeticItemSlot_C* CosmeticItemSlot, const struct FFQtnStoreItem& QtnStoreItem, bool* AllowHold, class UCosmeticItemSlot_C* LOCAL_SelectedCosmeticItemSlot, enum class EQtnAppearanceSlot LOCAL_AppearanceSlot, const class FString& LOCAL_PressedItemID, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_Unequip_Cosmetic_SlotString, bool CallFunc_IsEmpty_ReturnValue, enum class EQtnAppearanceSlot CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UQtnDLCManager* CallFunc_GetDLCManager_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb, class UClass* CallFunc_GetCosmeticItem_requiredDLC, bool CallFunc_GetCosmeticItem_DLCExistsInStore, bool CallFunc_IsCosmeticCurrentlyEquipped_IsEquipped_, enum class EQtnAppearanceSlot CallFunc_IsCosmeticCurrentlyEquipped_TargetSlot, bool CallFunc_HasPurchasedDLC_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "OnListEntryPressed");

	Params::UMenuCharacter_Widget_C_OnListEntryPressed_Params Parms{};

	Parms.IsPressed = IsPressed;
	Parms.CosmeticItemSlot = CosmeticItemSlot;
	Parms.QtnStoreItem = QtnStoreItem;
	Parms.LOCAL_SelectedCosmeticItemSlot = LOCAL_SelectedCosmeticItemSlot;
	Parms.LOCAL_AppearanceSlot = LOCAL_AppearanceSlot;
	Parms.LOCAL_PressedItemID = LOCAL_PressedItemID;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Unequip_Cosmetic_SlotString = CallFunc_Unequip_Cosmetic_SlotString;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetDLCManager_ReturnValue = CallFunc_GetDLCManager_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_GetCosmeticItem_OutBodyMesh = CallFunc_GetCosmeticItem_OutBodyMesh;
	Parms.CallFunc_GetCosmeticItem_OutEmoteVerb = CallFunc_GetCosmeticItem_OutEmoteVerb;
	Parms.CallFunc_GetCosmeticItem_requiredDLC = CallFunc_GetCosmeticItem_requiredDLC;
	Parms.CallFunc_GetCosmeticItem_DLCExistsInStore = CallFunc_GetCosmeticItem_DLCExistsInStore;
	Parms.CallFunc_IsCosmeticCurrentlyEquipped_IsEquipped_ = CallFunc_IsCosmeticCurrentlyEquipped_IsEquipped_;
	Parms.CallFunc_IsCosmeticCurrentlyEquipped_TargetSlot = CallFunc_IsCosmeticCurrentlyEquipped_TargetSlot;
	Parms.CallFunc_HasPurchasedDLC_ReturnValue = CallFunc_HasPurchasedDLC_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (AllowHold != nullptr)
		*AllowHold = Parms.AllowHold;

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.SequenceEvent__ENTRYPOINTMenuCharacter_Widget_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuCharacter_Widget_C::SequenceEvent__ENTRYPOINTMenuCharacter_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "SequenceEvent__ENTRYPOINTMenuCharacter_Widget_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.Is Focused Emote Equipped in Focused Wheel Slot?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCosmeticItemSlot_C*         FocusedEmote                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EquippedInFocusedSlot                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCharacterBodyMesh*       CallFunc_GetCosmeticItem_OutBodyMesh                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UQtnEmoteVerb_Archetype_C>CallFunc_GetCosmeticItem_OutEmoteVerb                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetCosmeticItem_requiredDLC                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCosmeticItem_DLCExistsInStore                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URadialEmoteButton_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuCharacter_Widget_C::Is_Focused_Emote_Equipped_in_Focused_Wheel_Slot_(class UCosmeticItemSlot_C* FocusedEmote, bool* EquippedInFocusedSlot, bool CallFunc_IsValid_ReturnValue, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb, class UClass* CallFunc_GetCosmeticItem_requiredDLC, bool CallFunc_GetCosmeticItem_DLCExistsInStore, class URadialEmoteButton_C* CallFunc_Array_Get_Item, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "Is Focused Emote Equipped in Focused Wheel Slot?");

	Params::UMenuCharacter_Widget_C_Is_Focused_Emote_Equipped_in_Focused_Wheel_Slot__Params Parms{};

	Parms.FocusedEmote = FocusedEmote;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCosmeticItem_OutBodyMesh = CallFunc_GetCosmeticItem_OutBodyMesh;
	Parms.CallFunc_GetCosmeticItem_OutEmoteVerb = CallFunc_GetCosmeticItem_OutEmoteVerb;
	Parms.CallFunc_GetCosmeticItem_requiredDLC = CallFunc_GetCosmeticItem_requiredDLC;
	Parms.CallFunc_GetCosmeticItem_DLCExistsInStore = CallFunc_GetCosmeticItem_DLCExistsInStore;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EquippedInFocusedSlot != nullptr)
		*EquippedInFocusedSlot = Parms.EquippedInFocusedSlot;

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.FTUX_ForceFinishButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UMenuCharacter_Widget_C::FTUX_ForceFinishButton(enum class EUINavigation Navigation, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "FTUX_ForceFinishButton");

	Params::UMenuCharacter_Widget_C_FTUX_ForceFinishButton_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.Toggle FTUX UI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantShown                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuCharacter_Widget_C::Toggle_FTUX_UI(bool WantShown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "Toggle FTUX UI");

	Params::UMenuCharacter_Widget_C_Toggle_FTUX_UI_Params Parms{};

	Parms.WantShown = WantShown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.Custom Gamepad Navigation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     NavigationTarget                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_Get_Last_Button_Entry_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UMenuCharacter_Widget_C::Custom_Gamepad_Navigation(enum class EUINavigation Navigation, class UWidget* NavigationTarget, bool K2Node_SwitchEnum_CmpSuccess, class UWidget* CallFunc_Get_Last_Button_Entry_Button, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "Custom Gamepad Navigation");

	Params::UMenuCharacter_Widget_C_Custom_Gamepad_Navigation_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.NavigationTarget = NavigationTarget;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Get_Last_Button_Entry_Button = CallFunc_Get_Last_Button_Entry_Button;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue_1 = CallFunc_GetVisibility_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue_2 = CallFunc_GetVisibility_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.RefreshDisplayedTitlesEquipped
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUserWidget*>         CallFunc_GetDisplayedEntryWidgets_ReturnValue                    (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCosmeticItemSlot_C*         K2Node_DynamicCast_AsCosmetic_Item_Slot                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCosmeticCurrentlyEquipped_IsEquipped_                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnAppearanceSlot      CallFunc_IsCosmeticCurrentlyEquipped_TargetSlot                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::RefreshDisplayedTitlesEquipped(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UCosmeticItemSlot_C* K2Node_DynamicCast_AsCosmetic_Item_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsCosmeticCurrentlyEquipped_IsEquipped_, enum class EQtnAppearanceSlot CallFunc_IsCosmeticCurrentlyEquipped_TargetSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "RefreshDisplayedTitlesEquipped");

	Params::UMenuCharacter_Widget_C_RefreshDisplayedTitlesEquipped_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDisplayedEntryWidgets_ReturnValue = CallFunc_GetDisplayedEntryWidgets_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsCosmetic_Item_Slot = K2Node_DynamicCast_AsCosmetic_Item_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsCosmeticCurrentlyEquipped_IsEquipped_ = CallFunc_IsCosmeticCurrentlyEquipped_IsEquipped_;
	Parms.CallFunc_IsCosmeticCurrentlyEquipped_TargetSlot = CallFunc_IsCosmeticCurrentlyEquipped_TargetSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.CheckForHover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUserWidget*>         LOCAL_DisplayedEntries                                           (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              LOCAL_LastIndex                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LOCAL_HoveredFound                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentCategoryEmotes__ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuCharacter_Widget_C::CheckForHover(const TArray<class UUserWidget*>& LOCAL_DisplayedEntries, int32 LOCAL_LastIndex, bool LOCAL_HoveredFound, bool CallFunc_IsCurrentCategoryEmotes__ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "CheckForHover");

	Params::UMenuCharacter_Widget_C_CheckForHover_Params Parms{};

	Parms.LOCAL_DisplayedEntries = LOCAL_DisplayedEntries;
	Parms.LOCAL_LastIndex = LOCAL_LastIndex;
	Parms.LOCAL_HoveredFound = LOCAL_HoveredFound;
	Parms.CallFunc_IsCurrentCategoryEmotes__ReturnValue = CallFunc_IsCurrentCategoryEmotes__ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.IsCosmeticCurrentlyEquipped
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsEquipped_                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnAppearanceSlot      TargetSlot                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterBodyMesh*       CallFunc_GetCosmeticItem_OutBodyMesh                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UQtnEmoteVerb_Archetype_C>CallFunc_GetCosmeticItem_OutEmoteVerb                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetCosmeticItem_requiredDLC                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCosmeticItem_DLCExistsInStore                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCharacterAppearanceComponent*CallFunc_GetBodyAppearanceComponent_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetEquippedCosmetics_ReturnValue                        (ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuCharacter_Widget_C::IsCosmeticCurrentlyEquipped(const class FString& ItemId, bool* IsEquipped_, enum class EQtnAppearanceSlot* TargetSlot, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb, class UClass* CallFunc_GetCosmeticItem_requiredDLC, bool CallFunc_GetCosmeticItem_DLCExistsInStore, bool CallFunc_IsValid_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, TArray<class FString>& CallFunc_GetEquippedCosmetics_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "IsCosmeticCurrentlyEquipped");

	Params::UMenuCharacter_Widget_C_IsCosmeticCurrentlyEquipped_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.CallFunc_GetCosmeticItem_OutBodyMesh = CallFunc_GetCosmeticItem_OutBodyMesh;
	Parms.CallFunc_GetCosmeticItem_OutEmoteVerb = CallFunc_GetCosmeticItem_OutEmoteVerb;
	Parms.CallFunc_GetCosmeticItem_requiredDLC = CallFunc_GetCosmeticItem_requiredDLC;
	Parms.CallFunc_GetCosmeticItem_DLCExistsInStore = CallFunc_GetCosmeticItem_DLCExistsInStore;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBodyAppearanceComponent_ReturnValue = CallFunc_GetBodyAppearanceComponent_ReturnValue;
	Parms.CallFunc_GetEquippedCosmetics_ReturnValue = CallFunc_GetEquippedCosmetics_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEquipped_ != nullptr)
		*IsEquipped_ = Parms.IsEquipped_;

	if (TargetSlot != nullptr)
		*TargetSlot = Parms.TargetSlot;

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.OnDebugDisplay
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCurrentCategoryEmotes__ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsCurrentCategoryEmotes__ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "OnDebugDisplay");

	Params::UMenuCharacter_Widget_C_OnDebugDisplay_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsCurrentCategoryEmotes__ReturnValue = CallFunc_IsCurrentCategoryEmotes__ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.IsCurrentCategoryEmotes?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// enum class EQtnAppearanceSlot      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UMenuCharacter_Widget_C::IsCurrentCategoryEmotes_(enum class EQtnAppearanceSlot CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "IsCurrentCategoryEmotes?");

	Params::UMenuCharacter_Widget_C_IsCurrentCategoryEmotes__Params Parms{};

	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.Toggle Emote UI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantEmotes                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuCharacter_Widget_C::Toggle_Emote_UI(bool WantEmotes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "Toggle Emote UI");

	Params::UMenuCharacter_Widget_C_Toggle_Emote_UI_Params Parms{};

	Parms.WantEmotes = WantEmotes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.SetupSliders
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::SetupSliders(int32 Temp_int_Variable, enum class ESlateVisibility Temp_byte_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 Temp_int_Variable_1, enum class ESlateVisibility Temp_byte_Variable_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "SetupSliders");

	Params::UMenuCharacter_Widget_C_SetupSliders_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.CheckTutorialPresence
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Menu_unlocked                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayingInEditor_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuCharacter_Widget_C::CheckTutorialPresence(bool* Menu_unlocked, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_IsPlayingInEditor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "CheckTutorialPresence");

	Params::UMenuCharacter_Widget_C_CheckTutorialPresence_Params Parms{};

	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_IsPlayingInEditor_ReturnValue = CallFunc_IsPlayingInEditor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Menu_unlocked != nullptr)
		*Menu_unlocked = Parms.Menu_unlocked;

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.ClearLoopingEmotes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewSideNav                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnAppearanceSlot      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnAppearanceSlot      CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuCharacter_Widget_C::ClearLoopingEmotes(int32 NewSideNav, enum class EQtnAppearanceSlot CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, enum class EQtnAppearanceSlot CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "ClearLoopingEmotes");

	Params::UMenuCharacter_Widget_C_ClearLoopingEmotes_Params Parms{};

	Parms.NewSideNav = NewSideNav;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.Unequip Cosmetic
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnAppearanceSlot      AppearanceSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SlotString                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UQtnCharacterBodyMesh*       CallFunc_GetCosmeticItem_OutBodyMesh                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UQtnEmoteVerb_Archetype_C>CallFunc_GetCosmeticItem_OutEmoteVerb                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetCosmeticItem_requiredDLC                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCosmeticItem_DLCExistsInStore                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCharacterBodyMesh*       CallFunc_GetCosmeticItem_OutBodyMesh_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UQtnEmoteVerb_Archetype_C>CallFunc_GetCosmeticItem_OutEmoteVerb_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetCosmeticItem_requiredDLC_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCosmeticItem_DLCExistsInStore_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCharacterBodyMesh*       CallFunc_GetCosmeticItem_OutBodyMesh_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UQtnEmoteVerb_Archetype_C>CallFunc_GetCosmeticItem_OutEmoteVerb_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetCosmeticItem_requiredDLC_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCosmeticItem_DLCExistsInStore_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCharacterBodyMesh*       CallFunc_GetCosmeticItem_OutBodyMesh_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UQtnEmoteVerb_Archetype_C>CallFunc_GetCosmeticItem_OutEmoteVerb_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetCosmeticItem_requiredDLC_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCosmeticItem_DLCExistsInStore_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCharacterBodyMesh*       CallFunc_GetCosmeticItem_OutBodyMesh_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UQtnEmoteVerb_Archetype_C>CallFunc_GetCosmeticItem_OutEmoteVerb_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetCosmeticItem_requiredDLC_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCosmeticItem_DLCExistsInStore_4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCharacterBodyMesh*       CallFunc_GetCosmeticItem_OutBodyMesh_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UQtnEmoteVerb_Archetype_C>CallFunc_GetCosmeticItem_OutEmoteVerb_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetCosmeticItem_requiredDLC_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCosmeticItem_DLCExistsInStore_5                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuCharacter_Widget_C::Unequip_Cosmetic(enum class EQtnAppearanceSlot AppearanceSlot, class FString* SlotString, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb, class UClass* CallFunc_GetCosmeticItem_requiredDLC, bool CallFunc_GetCosmeticItem_DLCExistsInStore, bool K2Node_SwitchEnum_CmpSuccess, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh_1, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb_1, class UClass* CallFunc_GetCosmeticItem_requiredDLC_1, bool CallFunc_GetCosmeticItem_DLCExistsInStore_1, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh_2, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb_2, class UClass* CallFunc_GetCosmeticItem_requiredDLC_2, bool CallFunc_GetCosmeticItem_DLCExistsInStore_2, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh_3, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb_3, class UClass* CallFunc_GetCosmeticItem_requiredDLC_3, bool CallFunc_GetCosmeticItem_DLCExistsInStore_3, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh_4, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb_4, class UClass* CallFunc_GetCosmeticItem_requiredDLC_4, bool CallFunc_GetCosmeticItem_DLCExistsInStore_4, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh_5, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb_5, class UClass* CallFunc_GetCosmeticItem_requiredDLC_5, bool CallFunc_GetCosmeticItem_DLCExistsInStore_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "Unequip Cosmetic");

	Params::UMenuCharacter_Widget_C_Unequip_Cosmetic_Params Parms{};

	Parms.AppearanceSlot = AppearanceSlot;
	Parms.CallFunc_GetCosmeticItem_OutBodyMesh = CallFunc_GetCosmeticItem_OutBodyMesh;
	Parms.CallFunc_GetCosmeticItem_OutEmoteVerb = CallFunc_GetCosmeticItem_OutEmoteVerb;
	Parms.CallFunc_GetCosmeticItem_requiredDLC = CallFunc_GetCosmeticItem_requiredDLC;
	Parms.CallFunc_GetCosmeticItem_DLCExistsInStore = CallFunc_GetCosmeticItem_DLCExistsInStore;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCosmeticItem_OutBodyMesh_1 = CallFunc_GetCosmeticItem_OutBodyMesh_1;
	Parms.CallFunc_GetCosmeticItem_OutEmoteVerb_1 = CallFunc_GetCosmeticItem_OutEmoteVerb_1;
	Parms.CallFunc_GetCosmeticItem_requiredDLC_1 = CallFunc_GetCosmeticItem_requiredDLC_1;
	Parms.CallFunc_GetCosmeticItem_DLCExistsInStore_1 = CallFunc_GetCosmeticItem_DLCExistsInStore_1;
	Parms.CallFunc_GetCosmeticItem_OutBodyMesh_2 = CallFunc_GetCosmeticItem_OutBodyMesh_2;
	Parms.CallFunc_GetCosmeticItem_OutEmoteVerb_2 = CallFunc_GetCosmeticItem_OutEmoteVerb_2;
	Parms.CallFunc_GetCosmeticItem_requiredDLC_2 = CallFunc_GetCosmeticItem_requiredDLC_2;
	Parms.CallFunc_GetCosmeticItem_DLCExistsInStore_2 = CallFunc_GetCosmeticItem_DLCExistsInStore_2;
	Parms.CallFunc_GetCosmeticItem_OutBodyMesh_3 = CallFunc_GetCosmeticItem_OutBodyMesh_3;
	Parms.CallFunc_GetCosmeticItem_OutEmoteVerb_3 = CallFunc_GetCosmeticItem_OutEmoteVerb_3;
	Parms.CallFunc_GetCosmeticItem_requiredDLC_3 = CallFunc_GetCosmeticItem_requiredDLC_3;
	Parms.CallFunc_GetCosmeticItem_DLCExistsInStore_3 = CallFunc_GetCosmeticItem_DLCExistsInStore_3;
	Parms.CallFunc_GetCosmeticItem_OutBodyMesh_4 = CallFunc_GetCosmeticItem_OutBodyMesh_4;
	Parms.CallFunc_GetCosmeticItem_OutEmoteVerb_4 = CallFunc_GetCosmeticItem_OutEmoteVerb_4;
	Parms.CallFunc_GetCosmeticItem_requiredDLC_4 = CallFunc_GetCosmeticItem_requiredDLC_4;
	Parms.CallFunc_GetCosmeticItem_DLCExistsInStore_4 = CallFunc_GetCosmeticItem_DLCExistsInStore_4;
	Parms.CallFunc_GetCosmeticItem_OutBodyMesh_5 = CallFunc_GetCosmeticItem_OutBodyMesh_5;
	Parms.CallFunc_GetCosmeticItem_OutEmoteVerb_5 = CallFunc_GetCosmeticItem_OutEmoteVerb_5;
	Parms.CallFunc_GetCosmeticItem_requiredDLC_5 = CallFunc_GetCosmeticItem_requiredDLC_5;
	Parms.CallFunc_GetCosmeticItem_DLCExistsInStore_5 = CallFunc_GetCosmeticItem_DLCExistsInStore_5;

	UObject::ProcessEvent(Func, &Parms);

	if (SlotString != nullptr)
		*SlotString = std::move(Parms.SlotString);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.Setup Appearance Categories
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LOCAL_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::Setup_Appearance_Categories(int32 LOCAL_Index, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Variable_2, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "Setup Appearance Categories");

	Params::UMenuCharacter_Widget_C_Setup_Appearance_Categories_Params Parms{};

	Parms.LOCAL_Index = LOCAL_Index;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.UpdateAffordance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseKB1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LOCAL_IsUsingMouseKB                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class UQtnScreen*                  CallFunc_GetOwningScreen_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalNav_Widget_C*         K2Node_DynamicCast_AsGlobal_Nav_Widget                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGlobalNavAffordance_Interface_C>CallFunc_UpdateGlobalNavAffordances_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_2                                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::UpdateAffordance(bool IsUsingMouseKB1, bool LOCAL_IsUsingMouseKB, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, bool Temp_bool_Variable_2, bool CallFunc_IsValid_ReturnValue, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UGlobalNav_Widget_C* K2Node_DynamicCast_AsGlobal_Nav_Widget, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, TScriptInterface<class IGlobalNavAffordance_Interface_C> CallFunc_UpdateGlobalNavAffordances_self_CastInput, class FText K2Node_Select_Default_2, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "UpdateAffordance");

	Params::UMenuCharacter_Widget_C_UpdateAffordance_Params Parms{};

	Parms.IsUsingMouseKB1 = IsUsingMouseKB1;
	Parms.LOCAL_IsUsingMouseKB = LOCAL_IsUsingMouseKB;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetOwningScreen_ReturnValue = CallFunc_GetOwningScreen_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsGlobal_Nav_Widget = K2Node_DynamicCast_AsGlobal_Nav_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_UpdateGlobalNavAffordances_self_CastInput = CallFunc_UpdateGlobalNavAffordances_self_CastInput;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.SelectEmoteSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentEmoteSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayAnim                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnEmoteVerb_Archetype_C*   EmoteVerbDefault                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URadialEmoteButton_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URadialEmoteButton_C*        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnEmoteVerb_Archetype_C*   CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuCharacter_Widget_C::SelectEmoteSlot(int32 CurrentEmoteSlot, bool PlayAnim, class UQtnEmoteVerb_Archetype_C** EmoteVerbDefault, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class URadialEmoteButton_C* CallFunc_Array_Get_Item, class URadialEmoteButton_C* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, class UQtnEmoteVerb_Archetype_C* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "SelectEmoteSlot");

	Params::UMenuCharacter_Widget_C_SelectEmoteSlot_Params Parms{};

	Parms.CurrentEmoteSlot = CurrentEmoteSlot;
	Parms.PlayAnim = PlayAnim;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EmoteVerbDefault != nullptr)
		*EmoteVerbDefault = Parms.EmoteVerbDefault;

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.HighlightEmoteSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentEmoteSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayAnim                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnEmoteVerb_Archetype_C*   EmoteVerbDefault                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URadialEmoteButton_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnEmoteVerb_Archetype_C*   CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuCharacter_Widget_C::HighlightEmoteSlot(int32 CurrentEmoteSlot, bool PlayAnim, class UQtnEmoteVerb_Archetype_C** EmoteVerbDefault, class URadialEmoteButton_C* CallFunc_Array_Get_Item, class UQtnEmoteVerb_Archetype_C* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_IsValidClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "HighlightEmoteSlot");

	Params::UMenuCharacter_Widget_C_HighlightEmoteSlot_Params Parms{};

	Parms.CurrentEmoteSlot = CurrentEmoteSlot;
	Parms.PlayAnim = PlayAnim;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EmoteVerbDefault != nullptr)
		*EmoteVerbDefault = Parms.EmoteVerbDefault;

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.PopulateEmoteWheel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  TargetTexture                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColor_White_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterAppearanceComponent*CallFunc_GetBodyAppearanceComponent_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSubclassOf<class UQtnVerb>>CallFunc_GetEquippedEmotes_ReturnValue                           (ConstParm, ReferenceParm)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnEmoteVerb_Archetype_C*   CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URadialEmoteButton_C*        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnEmoteVerb_Archetype_C*   CallFunc_SelectEmoteSlot_EmoteVerbDefault                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::PopulateEmoteWheel(class UTexture2D* TargetTexture, int32 Temp_int_Array_Index_Variable, const struct FLinearColor& CallFunc_LinearColor_White_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<TSubclassOf<class UQtnVerb>>& CallFunc_GetEquippedEmotes_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype, bool K2Node_ClassDynamicCast_bSuccess, class UQtnEmoteVerb_Archetype_C* CallFunc_GetClassDefaultObject_ReturnValue, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class URadialEmoteButton_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UQtnEmoteVerb_Archetype_C* CallFunc_SelectEmoteSlot_EmoteVerbDefault)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "PopulateEmoteWheel");

	Params::UMenuCharacter_Widget_C_PopulateEmoteWheel_Params Parms{};

	Parms.TargetTexture = TargetTexture;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_LinearColor_White_ReturnValue = CallFunc_LinearColor_White_ReturnValue;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.CallFunc_GetBodyAppearanceComponent_ReturnValue = CallFunc_GetBodyAppearanceComponent_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetEquippedEmotes_ReturnValue = CallFunc_GetEquippedEmotes_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype = K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsTexture_2D_1 = K2Node_DynamicCast_AsTexture_2D_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SelectEmoteSlot_EmoteVerbDefault = CallFunc_SelectEmoteSlot_EmoteVerbDefault;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.ResetCosmetics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterAppearanceComponent*CallFunc_GetBodyAppearanceComponent_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LocalFindCosmeticIndex_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LocalFindCosmeticIndex_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::ResetCosmetics(const class FString& CallFunc_MakeLiteralString_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue_1, const class FString& CallFunc_MakeLiteralString_ReturnValue_2, const class FString& CallFunc_MakeLiteralString_ReturnValue_3, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, int32 CallFunc_LocalFindCosmeticIndex_ReturnValue, int32 CallFunc_LocalFindCosmeticIndex_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "ResetCosmetics");

	Params::UMenuCharacter_Widget_C_ResetCosmetics_Params Parms{};

	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_MakeLiteralString_ReturnValue_1 = CallFunc_MakeLiteralString_ReturnValue_1;
	Parms.CallFunc_MakeLiteralString_ReturnValue_2 = CallFunc_MakeLiteralString_ReturnValue_2;
	Parms.CallFunc_MakeLiteralString_ReturnValue_3 = CallFunc_MakeLiteralString_ReturnValue_3;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.CallFunc_GetBodyAppearanceComponent_ReturnValue = CallFunc_GetBodyAppearanceComponent_ReturnValue;
	Parms.CallFunc_LocalFindCosmeticIndex_ReturnValue = CallFunc_LocalFindCosmeticIndex_ReturnValue;
	Parms.CallFunc_LocalFindCosmeticIndex_ReturnValue_1 = CallFunc_LocalFindCosmeticIndex_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.UnequipTargetSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnAppearanceSlot      TargetSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterAppearanceComponent*CallFunc_GetBodyAppearanceComponent_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnBodyDataBag*             CallFunc_GetBodyDataBag_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBodyDataBag_C*              K2Node_DynamicCast_AsBody_Data_Bag                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuCharacter_Widget_C::UnequipTargetSlot(enum class EQtnAppearanceSlot TargetSlot, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, class UQtnBodyDataBag* CallFunc_GetBodyDataBag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UBodyDataBag_C* K2Node_DynamicCast_AsBody_Data_Bag, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "UnequipTargetSlot");

	Params::UMenuCharacter_Widget_C_UnequipTargetSlot_Params Parms{};

	Parms.TargetSlot = TargetSlot;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.CallFunc_GetBodyAppearanceComponent_ReturnValue = CallFunc_GetBodyAppearanceComponent_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData = CallFunc_GetSaveLoadDataBP_localOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData = CallFunc_GetSaveLoadDataBP_progressSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin = CallFunc_GetSaveLoadDataBP_outputPin;
	Parms.CallFunc_GetBodyDataBag_ReturnValue = CallFunc_GetBodyDataBag_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_DynamicCast_AsBody_Data_Bag = K2Node_DynamicCast_AsBody_Data_Bag;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.UpdateShownActors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              ActorsToShow                                                     (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAttachedActors_OutActors                             (ReferenceParm)

void UMenuCharacter_Widget_C::UpdateShownActors(const TArray<class AActor*>& ActorsToShow, int32 CallFunc_Array_Add_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "UpdateShownActors");

	Params::UMenuCharacter_Widget_C_UpdateShownActors_Params Parms{};

	Parms.ActorsToShow = ActorsToShow;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetAttachedActors_OutActors = CallFunc_GetAttachedActors_OutActors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.SetupCameraTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuCharacter_Widget_C::SetupCameraTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "SetupCameraTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.EquipEmote
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EmoteItemID_ToFind                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      LOCAL_PressedItemID                                              (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              LOCAL_EmoteVaultIndex                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterBodyMesh*       LOCAL_TargetEquipment                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAnimMontage*>        EquipAnimsHat                                                    (Edit, BlueprintVisible)
// class UAnimMontage*                ChosenMontage                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAnimMontage*>        EquipAnimsCape                                                   (Edit, BlueprintVisible)
// TArray<class UAnimMontage*>        EquipAnimsBody                                                   (Edit, BlueprintVisible)
// TArray<class UAnimMontage*>        EquipAnims                                                       (Edit, BlueprintVisible)
// TArray<class UAnimMontage*>        K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TArray<class UAnimMontage*>        K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<class UAnimMontage*>        K2Node_MakeArray_Array_2                                         (ReferenceParm)
// TArray<class UAnimMontage*>        K2Node_MakeArray_Array_3                                         (ReferenceParm)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URadialEmoteButton_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterAppearanceComponent*CallFunc_GetBodyAppearanceComponent_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterAppearanceComponent*CallFunc_GetBodyAppearanceComponent_ReturnValue_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetVaultEmotesData_ReturnValue                          (ConstParm, ReferenceParm)
// TArray<class FString>              CallFunc_GetVaultEmotesData_ReturnValue_1                        (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterBodyMesh*       CallFunc_GetCosmeticItem_OutBodyMesh                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UQtnEmoteVerb_Archetype_C>CallFunc_GetCosmeticItem_OutEmoteVerb                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetCosmeticItem_requiredDLC                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCosmeticItem_DLCExistsInStore                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnEmoteVerb_Archetype_C*   CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCharacterAppearanceComponent*CallFunc_GetBodyAppearanceComponent_ReturnValue_2                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnBodyDataBag*             CallFunc_GetBodyDataBag_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBodyDataBag_C*              K2Node_DynamicCast_AsBody_Data_Bag                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuCharacter_Widget_C::EquipEmote(const class FString& EmoteItemID_ToFind, const class FString& LOCAL_PressedItemID, int32 LOCAL_EmoteVaultIndex, class UQtnCharacterBodyMesh* LOCAL_TargetEquipment, const TArray<class UAnimMontage*>& EquipAnimsHat, class UAnimMontage* ChosenMontage, const TArray<class UAnimMontage*>& EquipAnimsCape, const TArray<class UAnimMontage*>& EquipAnimsBody, const TArray<class UAnimMontage*>& EquipAnims, TArray<class UAnimMontage*>& K2Node_MakeArray_Array, const class FString& CallFunc_Concat_StrStr_ReturnValue, TArray<class UAnimMontage*>& K2Node_MakeArray_Array_1, TArray<class UAnimMontage*>& K2Node_MakeArray_Array_2, TArray<class UAnimMontage*>& K2Node_MakeArray_Array_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class URadialEmoteButton_C* CallFunc_Array_Get_Item, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue_1, TArray<class FString>& CallFunc_GetVaultEmotesData_ReturnValue, TArray<class FString>& CallFunc_GetVaultEmotesData_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb, class UClass* CallFunc_GetCosmeticItem_requiredDLC, bool CallFunc_GetCosmeticItem_DLCExistsInStore, class UQtnEmoteVerb_Archetype_C* CallFunc_GetClassDefaultObject_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue_2, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, class UQtnBodyDataBag* CallFunc_GetBodyDataBag_ReturnValue, class UBodyDataBag_C* K2Node_DynamicCast_AsBody_Data_Bag, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "EquipEmote");

	Params::UMenuCharacter_Widget_C_EquipEmote_Params Parms{};

	Parms.EmoteItemID_ToFind = EmoteItemID_ToFind;
	Parms.LOCAL_PressedItemID = LOCAL_PressedItemID;
	Parms.LOCAL_EmoteVaultIndex = LOCAL_EmoteVaultIndex;
	Parms.LOCAL_TargetEquipment = LOCAL_TargetEquipment;
	Parms.EquipAnimsHat = EquipAnimsHat;
	Parms.ChosenMontage = ChosenMontage;
	Parms.EquipAnimsCape = EquipAnimsCape;
	Parms.EquipAnimsBody = EquipAnimsBody;
	Parms.EquipAnims = EquipAnims;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.CallFunc_GetBodyAppearanceComponent_ReturnValue = CallFunc_GetBodyAppearanceComponent_ReturnValue;
	Parms.CallFunc_GetBodyAppearanceComponent_ReturnValue_1 = CallFunc_GetBodyAppearanceComponent_ReturnValue_1;
	Parms.CallFunc_GetVaultEmotesData_ReturnValue = CallFunc_GetVaultEmotesData_ReturnValue;
	Parms.CallFunc_GetVaultEmotesData_ReturnValue_1 = CallFunc_GetVaultEmotesData_ReturnValue_1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GetCosmeticItem_OutBodyMesh = CallFunc_GetCosmeticItem_OutBodyMesh;
	Parms.CallFunc_GetCosmeticItem_OutEmoteVerb = CallFunc_GetCosmeticItem_OutEmoteVerb;
	Parms.CallFunc_GetCosmeticItem_requiredDLC = CallFunc_GetCosmeticItem_requiredDLC;
	Parms.CallFunc_GetCosmeticItem_DLCExistsInStore = CallFunc_GetCosmeticItem_DLCExistsInStore;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue_1 = CallFunc_GetOccupiedBodyPawn_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetBodyAppearanceComponent_ReturnValue_2 = CallFunc_GetBodyAppearanceComponent_ReturnValue_2;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData = CallFunc_GetSaveLoadDataBP_localOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData = CallFunc_GetSaveLoadDataBP_progressSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin = CallFunc_GetSaveLoadDataBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetBodyDataBag_ReturnValue = CallFunc_GetBodyDataBag_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Data_Bag = K2Node_DynamicCast_AsBody_Data_Bag;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.Equip Cosmetic Anim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnCharacterBodyMesh*       TargetEquipment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAnimMontage*>        LOCAL_EquipAnimsHat                                              (Edit, BlueprintVisible)
// TArray<class UAnimMontage*>        LOCAL_EquipAnimsCape                                             (Edit, BlueprintVisible)
// TArray<class UAnimMontage*>        LOCAL_EquipAnimsBody                                             (Edit, BlueprintVisible)
// class UAnimMontage*                LOCAL_ChosenMontage                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterBodyMesh*       LOCAL_TargetEquipment                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAnimMontage*>        K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<class UAnimMontage*>        K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<class UAnimMontage*>        K2Node_MakeArray_Array_2                                         (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                CallFunc_Array_Random_OutItem                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Array_Random_OutItem_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Array_Random_OutItem_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Array_Random_OutItem_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::Equip_Cosmetic_Anim(class UQtnCharacterBodyMesh* TargetEquipment, const TArray<class UAnimMontage*>& LOCAL_EquipAnimsHat, const TArray<class UAnimMontage*>& LOCAL_EquipAnimsCape, const TArray<class UAnimMontage*>& LOCAL_EquipAnimsBody, class UAnimMontage* LOCAL_ChosenMontage, class UQtnCharacterBodyMesh* LOCAL_TargetEquipment, TArray<class UAnimMontage*>& K2Node_MakeArray_Array, TArray<class UAnimMontage*>& K2Node_MakeArray_Array_1, TArray<class UAnimMontage*>& K2Node_MakeArray_Array_2, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UAnimMontage* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class UAnimMontage* CallFunc_Array_Random_OutItem_1, int32 CallFunc_Array_Random_OutIndex_1, class UAnimMontage* CallFunc_Array_Random_OutItem_2, int32 CallFunc_Array_Random_OutIndex_2, class UAnimMontage* CallFunc_Array_Random_OutItem_3, int32 CallFunc_Array_Random_OutIndex_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "Equip Cosmetic Anim");

	Params::UMenuCharacter_Widget_C_Equip_Cosmetic_Anim_Params Parms{};

	Parms.TargetEquipment = TargetEquipment;
	Parms.LOCAL_EquipAnimsHat = LOCAL_EquipAnimsHat;
	Parms.LOCAL_EquipAnimsCape = LOCAL_EquipAnimsCape;
	Parms.LOCAL_EquipAnimsBody = LOCAL_EquipAnimsBody;
	Parms.LOCAL_ChosenMontage = LOCAL_ChosenMontage;
	Parms.LOCAL_TargetEquipment = LOCAL_TargetEquipment;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.CallFunc_Array_Random_OutItem_1 = CallFunc_Array_Random_OutItem_1;
	Parms.CallFunc_Array_Random_OutIndex_1 = CallFunc_Array_Random_OutIndex_1;
	Parms.CallFunc_Array_Random_OutItem_2 = CallFunc_Array_Random_OutItem_2;
	Parms.CallFunc_Array_Random_OutIndex_2 = CallFunc_Array_Random_OutIndex_2;
	Parms.CallFunc_Array_Random_OutItem_3 = CallFunc_Array_Random_OutItem_3;
	Parms.CallFunc_Array_Random_OutIndex_3 = CallFunc_Array_Random_OutIndex_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.OnSelectCosmeticObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      LOCAL_ItemName                                                   (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              LOCAL_VaultIndexforItem                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnAppearanceSlot      LOCAL_CurrentAppearanceSlot                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterBodyMesh*       LOCAL_EquippedCosmetic                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterBodyMesh*       CallFunc_GetCosmeticItem_OutBodyMesh                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UQtnEmoteVerb_Archetype_C>CallFunc_GetCosmeticItem_OutEmoteVerb                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetCosmeticItem_requiredDLC                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCosmeticItem_DLCExistsInStore                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCharacterAppearanceComponent*CallFunc_GetBodyAppearanceComponent_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnBodyDataBag*             CallFunc_GetBodyDataBag_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetVaultCosmeticsData_ReturnValue                       (ConstParm, ReferenceParm)
// class UBodyDataBag_C*              K2Node_DynamicCast_AsBody_Data_Bag                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::OnSelectCosmeticObject(int32 Index, const class FString& ItemId, const class FString& LOCAL_ItemName, int32 LOCAL_VaultIndexforItem, enum class EQtnAppearanceSlot LOCAL_CurrentAppearanceSlot, class UQtnCharacterBodyMesh* LOCAL_EquippedCosmetic, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb, class UClass* CallFunc_GetCosmeticItem_requiredDLC, bool CallFunc_GetCosmeticItem_DLCExistsInStore, bool CallFunc_IsValid_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, class UQtnBodyDataBag* CallFunc_GetBodyDataBag_ReturnValue, TArray<class FString>& CallFunc_GetVaultCosmeticsData_ReturnValue, class UBodyDataBag_C* K2Node_DynamicCast_AsBody_Data_Bag, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "OnSelectCosmeticObject");

	Params::UMenuCharacter_Widget_C_OnSelectCosmeticObject_Params Parms{};

	Parms.Index = Index;
	Parms.ItemId = ItemId;
	Parms.LOCAL_ItemName = LOCAL_ItemName;
	Parms.LOCAL_VaultIndexforItem = LOCAL_VaultIndexforItem;
	Parms.LOCAL_CurrentAppearanceSlot = LOCAL_CurrentAppearanceSlot;
	Parms.LOCAL_EquippedCosmetic = LOCAL_EquippedCosmetic;
	Parms.CallFunc_GetCosmeticItem_OutBodyMesh = CallFunc_GetCosmeticItem_OutBodyMesh;
	Parms.CallFunc_GetCosmeticItem_OutEmoteVerb = CallFunc_GetCosmeticItem_OutEmoteVerb;
	Parms.CallFunc_GetCosmeticItem_requiredDLC = CallFunc_GetCosmeticItem_requiredDLC;
	Parms.CallFunc_GetCosmeticItem_DLCExistsInStore = CallFunc_GetCosmeticItem_DLCExistsInStore;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData = CallFunc_GetSaveLoadDataBP_localOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData = CallFunc_GetSaveLoadDataBP_progressSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin = CallFunc_GetSaveLoadDataBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetBodyAppearanceComponent_ReturnValue = CallFunc_GetBodyAppearanceComponent_ReturnValue;
	Parms.CallFunc_GetBodyDataBag_ReturnValue = CallFunc_GetBodyDataBag_ReturnValue;
	Parms.CallFunc_GetVaultCosmeticsData_ReturnValue = CallFunc_GetVaultCosmeticsData_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Data_Bag = K2Node_DynamicCast_AsBody_Data_Bag;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.GetCosmeticItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsEmote                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCharacterBodyMesh*       OutBodyMesh                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UQtnEmoteVerb_Archetype_C>OutEmoteVerb                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      RequiredDLC                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DLCExistsInStore                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnCosmeticCatalogueEntry  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCharacterBodyMesh*       CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterBodyMesh*       CallFunc_GetClassDefaultObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuCharacter_Widget_C::GetCosmeticItem(const class FString& ItemId, bool IsEmote, class UQtnCharacterBodyMesh** OutBodyMesh, TSubclassOf<class UQtnEmoteVerb_Archetype_C>* OutEmoteVerb, class UClass** RequiredDLC, bool* DLCExistsInStore, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FQtnCosmeticCatalogueEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh, bool K2Node_ClassDynamicCast_bSuccess_1, class UClass* K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_1, bool K2Node_ClassDynamicCast_bSuccess_2, class UClass* K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_2, bool K2Node_ClassDynamicCast_bSuccess_3, class UQtnCharacterBodyMesh* CallFunc_GetClassDefaultObject_ReturnValue, class UQtnCharacterBodyMesh* CallFunc_GetClassDefaultObject_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "GetCosmeticItem");

	Params::UMenuCharacter_Widget_C_GetCosmeticItem_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.IsEmote = IsEmote;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype = K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh = K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_1 = K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_1;
	Parms.K2Node_ClassDynamicCast_bSuccess_2 = K2Node_ClassDynamicCast_bSuccess_2;
	Parms.K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_2 = K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_2;
	Parms.K2Node_ClassDynamicCast_bSuccess_3 = K2Node_ClassDynamicCast_bSuccess_3;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue_1 = CallFunc_GetClassDefaultObject_ReturnValue_1;
	Parms.CallFunc_IsValidClass_ReturnValue_1 = CallFunc_IsValidClass_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutBodyMesh != nullptr)
		*OutBodyMesh = Parms.OutBodyMesh;

	if (OutEmoteVerb != nullptr)
		*OutEmoteVerb = Parms.OutEmoteVerb;

	if (RequiredDLC != nullptr)
		*RequiredDLC = Parms.RequiredDLC;

	if (DLCExistsInStore != nullptr)
		*DLCExistsInStore = Parms.DLCExistsInStore;

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.HasCosmeticsInVault
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterAppearanceComponent*CallFunc_GetBodyAppearanceComponent_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetVaultCosmeticsData_ReturnValue                       (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UMenuCharacter_Widget_C::HasCosmeticsInVault(class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, TArray<class FString>& CallFunc_GetVaultCosmeticsData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "HasCosmeticsInVault");

	Params::UMenuCharacter_Widget_C_HasCosmeticsInVault_Params Parms{};

	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.CallFunc_GetBodyAppearanceComponent_ReturnValue = CallFunc_GetBodyAppearanceComponent_ReturnValue;
	Parms.CallFunc_GetVaultCosmeticsData_ReturnValue = CallFunc_GetVaultCosmeticsData_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.HandleSideNavUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USideNav_Widget_C*>   CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class USideNav_Widget_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuCharacter_Widget_C::HandleSideNavUI(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class USideNav_Widget_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class USideNav_Widget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "HandleSideNavUI");

	Params::UMenuCharacter_Widget_C_HandleSideNavUI_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.UpdateGlobalNavAffordances
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, class FText>   Affordances                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass*                      MyClass                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::UpdateGlobalNavAffordances(TMap<class FString, class FText> Affordances, class UClass* MyClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "UpdateGlobalNavAffordances");

	Params::UMenuCharacter_Widget_C_UpdateGlobalNavAffordances_Params Parms{};

	Parms.Affordances = Affordances;
	Parms.MyClass = MyClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.AddMenuRepeater
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuCharacter_Widget_C::AddMenuRepeater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "AddMenuRepeater");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.AnimSeq_ToggleMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantShown                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuCharacter_Widget_C::AnimSeq_ToggleMenu(bool WantShown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "AnimSeq_ToggleMenu");

	Params::UMenuCharacter_Widget_C_AnimSeq_ToggleMenu_Params Parms{};

	Parms.WantShown = WantShown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.Event_CloseMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuCharacter_Widget_C::Event_CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "Event_CloseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.OnQtnWidgetResumed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQtnScreen*                  PreviousScreen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::OnQtnWidgetResumed(class UQtnScreen* PreviousScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "OnQtnWidgetResumed");

	Params::UMenuCharacter_Widget_C_OnQtnWidgetResumed_Params Parms{};

	Parms.PreviousScreen = PreviousScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.OnQtnWidgetInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMenuCharacter_Widget_C::OnQtnWidgetInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "OnQtnWidgetInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.OnQtnWidgetStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMenuCharacter_Widget_C::OnQtnWidgetStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "OnQtnWidgetStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.OnUIScreenActionPressed
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIScreenActionEnum  ScreenAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "OnUIScreenActionPressed");

	Params::UMenuCharacter_Widget_C_OnUIScreenActionPressed_Params Parms{};

	Parms.ScreenAction = ScreenAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.OnQtnWidgetTicked
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::OnQtnWidgetTicked(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "OnQtnWidgetTicked");

	Params::UMenuCharacter_Widget_C_OnQtnWidgetTicked_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.OnQtnWidgetPaused
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMenuCharacter_Widget_C::OnQtnWidgetPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "OnQtnWidgetPaused");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.SlotButtonSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::SlotButtonSelected(int32 SelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "SlotButtonSelected");

	Params::UMenuCharacter_Widget_C_SlotButtonSelected_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.RequestAffordance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuCharacter_Widget_C::RequestAffordance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "RequestAffordance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.OnUIScroll
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              ScrollDelta                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromStick                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuCharacter_Widget_C::OnUIScroll(float ScrollDelta, bool FromStick)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "OnUIScroll");

	Params::UMenuCharacter_Widget_C_OnUIScroll_Params Parms{};

	Parms.ScrollDelta = ScrollDelta;
	Parms.FromStick = FromStick;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.ShowHoveredInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ItemClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::ShowHoveredInfo(const class FString& ID, const class FString& ItemClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "ShowHoveredInfo");

	Params::UMenuCharacter_Widget_C_ShowHoveredInfo_Params Parms{};

	Parms.ID = ID;
	Parms.ItemClass = ItemClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.OnQtnWidgetOccupied
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FirstTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuCharacter_Widget_C::OnQtnWidgetOccupied(class AQtnBodyPawn* OccupiedBodyPawn, bool FirstTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "OnQtnWidgetOccupied");

	Params::UMenuCharacter_Widget_C_OnQtnWidgetOccupied_Params Parms{};

	Parms.OccupiedBodyPawn = OccupiedBodyPawn;
	Parms.FirstTime = FirstTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.OnUIBodyActionPressed
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIBodyActionEnum    BodyAction                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::OnUIBodyActionPressed(enum class EQtnUIBodyActionEnum BodyAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "OnUIBodyActionPressed");

	Params::UMenuCharacter_Widget_C_OnUIBodyActionPressed_Params Parms{};

	Parms.BodyAction = BodyAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.OnUIBodyActionReleased
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIBodyActionEnum    BodyAction                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::OnUIBodyActionReleased(enum class EQtnUIBodyActionEnum BodyAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "OnUIBodyActionReleased");

	Params::UMenuCharacter_Widget_C_OnUIBodyActionReleased_Params Parms{};

	Parms.BodyAction = BodyAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMenuCharacter_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.BndEvt__MenuCharacter_Widget_Button_Finish_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMenuCharacter_Widget_C::BndEvt__MenuCharacter_Widget_Button_Finish_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "BndEvt__MenuCharacter_Widget_Button_Finish_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.InputChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseAndKeyboard                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuCharacter_Widget_C::InputChanged(bool IsUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "InputChanged");

	Params::UMenuCharacter_Widget_C_InputChanged_Params Parms{};

	Parms.IsUsingMouseAndKeyboard = IsUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.SlotButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HoveredIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::SlotButtonHovered(int32 HoveredIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "SlotButtonHovered");

	Params::UMenuCharacter_Widget_C_SlotButtonHovered_Params Parms{};

	Parms.HoveredIndex = HoveredIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.OnListEntryHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCosmeticItemSlot_C*         CosmeticItemSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFQtnStoreItem              QtnStoreItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::OnListEntryHovered(bool IsHovered, class UCosmeticItemSlot_C* CosmeticItemSlot, const struct FFQtnStoreItem& QtnStoreItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "OnListEntryHovered");

	Params::UMenuCharacter_Widget_C_OnListEntryHovered_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.CosmeticItemSlot = CosmeticItemSlot;
	Parms.QtnStoreItem = QtnStoreItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.OnSideNavBarButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::OnSideNavBarButtonPressed(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "OnSideNavBarButtonPressed");

	Params::UMenuCharacter_Widget_C_OnSideNavBarButtonPressed_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.ItemUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuCharacter_Widget_C::ItemUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "ItemUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.OnInputUsageChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseAndKeyboard                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuCharacter_Widget_C::OnInputUsageChange(bool IsUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "OnInputUsageChange");

	Params::UMenuCharacter_Widget_C_OnInputUsageChange_Params Parms{};

	Parms.IsUsingMouseAndKeyboard = IsUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.OnQtnWidgetHidden
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMenuCharacter_Widget_C::OnQtnWidgetHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "OnQtnWidgetHidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UMenuCharacter_Widget_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "OnRemovedFromFocusPath");

	Params::UMenuCharacter_Widget_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.Rotate Paper Doll UIAction Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnUIScreenActionEnum  Screen_Action                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::Rotate_Paper_Doll_UIAction_Pressed(enum class EQtnUIScreenActionEnum Screen_Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "Rotate Paper Doll UIAction Pressed");

	Params::UMenuCharacter_Widget_C_Rotate_Paper_Doll_UIAction_Pressed_Params Parms{};

	Parms.Screen_Action = Screen_Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.Rotate Paper Doll UIAction Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnUIScreenActionEnum  Screen_Action                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::Rotate_Paper_Doll_UIAction_Released(enum class EQtnUIScreenActionEnum Screen_Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "Rotate Paper Doll UIAction Released");

	Params::UMenuCharacter_Widget_C_Rotate_Paper_Doll_UIAction_Released_Params Parms{};

	Parms.Screen_Action = Screen_Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.OnUIScreenActionReleased
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIScreenActionEnum  ScreenAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::OnUIScreenActionReleased(enum class EQtnUIScreenActionEnum ScreenAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "OnUIScreenActionReleased");

	Params::UMenuCharacter_Widget_C_OnUIScreenActionReleased_Params Parms{};

	Parms.ScreenAction = ScreenAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.RefreshHairColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              HairColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::RefreshHairColor(float HairColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "RefreshHairColor");

	Params::UMenuCharacter_Widget_C_RefreshHairColor_Params Parms{};

	Parms.HairColor = HairColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.RefreshSkinTone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              SkinTone                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::RefreshSkinTone(float SkinTone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "RefreshSkinTone");

	Params::UMenuCharacter_Widget_C_RefreshSkinTone_Params Parms{};

	Parms.SkinTone = SkinTone;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.RefreshHairBrightness
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              HairBrightness                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuCharacter_Widget_C::RefreshHairBrightness(float HairBrightness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "RefreshHairBrightness");

	Params::UMenuCharacter_Widget_C_RefreshHairBrightness_Params Parms{};

	Parms.HairBrightness = HairBrightness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuCharacter_Widget.MenuCharacter_Widget_C.ExecuteUbergraph_MenuCharacter_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class FText>   K2Node_Event_Affordances                                         (ConstParm)
// class UClass*                      K2Node_Event_myClass                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_WantShown                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetStartTime_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  CallFunc_GetOwningScreen_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  K2Node_Event_previousScreen                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUIScreenActionEnum  K2Node_Event_screenAction_1                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_SelectedIndex                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnEmoteVerb_Archetype_C*   CallFunc_SelectEmoteSlot_EmoteVerbDefault                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue_2                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_3                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_Event_scrollDelta                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_fromStick                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_ID                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ItemClass                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_Event_occupiedBodyPawn                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_firstTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnUIBodyActionEnum    K2Node_Event_bodyAction_1                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnUIBodyActionEnum    K2Node_Event_bodyAction                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckTutorialPresence_menu_unlocked                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_3                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_isUsingMouseAndKeyboard                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnScreen*                  CallFunc_GetOwningScreen_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalNav_Widget_C*         K2Node_DynamicCast_AsGlobal_Nav_Widget                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EQtnAppearanceSlot      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentCategoryEmotes__ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentCategoryEmotes__ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_HoveredIndex                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnEmoteVerb_Archetype_C*   CallFunc_HighlightEmoteSlot_EmoteVerbDefault                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsCurrentCategoryEmotes__ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentCategoryEmotes__ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterAppearanceComponent*CallFunc_GetBodyAppearanceComponent_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsHovered                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCosmeticItemSlot_C*         K2Node_Event_CosmeticItemSlot                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFQtnStoreItem              K2Node_Event_QtnStoreItem                                        (HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCharacterBodyMesh*       CallFunc_GetCosmeticItem_OutBodyMesh                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UQtnEmoteVerb_Archetype_C>CallFunc_GetCosmeticItem_OutEmoteVerb                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetCosmeticItem_requiredDLC                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCosmeticItem_DLCExistsInStore                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnEmoteVerb_Archetype_C*   CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnUserWidget*              Temp_object_Variable                                             (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isUsingMouseAndKeyboard                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnUIScreenActionEnum  K2Node_CustomEvent_Screen_Action_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUIScreenActionEnum  K2Node_CustomEvent_Screen_Action                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentCategoryEmotes__ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentCategoryEmotes__ReturnValue_5                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnUIScreenActionEnum  K2Node_Event_screenAction                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_HairColor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_skinTone                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_HairBrightness                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsCurrentCategoryEmotes__ReturnValue_6                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_4                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_FTUX_TrainingMoment_Screen_C*CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_FTUX_Archetype_Widget_C* CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsCurrentCategoryEmotes__ReturnValue_7                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuCharacter_Widget_C::ExecuteUbergraph_MenuCharacter_Widget(int32 EntryPoint, TMap<class FString, class FText> K2Node_Event_Affordances, class UClass* K2Node_Event_myClass, bool K2Node_CustomEvent_WantShown, float CallFunc_GetStartTime_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Ease_ReturnValue, class UQtnScreen* K2Node_Event_previousScreen, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction_1, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_DeltaSeconds, int32 K2Node_CustomEvent_SelectedIndex, class UQtnEmoteVerb_Archetype_C* CallFunc_SelectEmoteSlot_EmoteVerbDefault, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype_1, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetDisplayName_ReturnValue_2, const class FString& CallFunc_GetDisplayName_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, float K2Node_Event_scrollDelta, bool K2Node_Event_fromStick, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& K2Node_CustomEvent_ID, const class FString& K2Node_CustomEvent_ItemClass, bool CallFunc_IsEmpty_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AQtnBodyPawn* K2Node_Event_occupiedBodyPawn, bool K2Node_Event_firstTime, enum class EQtnUIBodyActionEnum K2Node_Event_bodyAction_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EQtnUIBodyActionEnum K2Node_Event_bodyAction, bool K2Node_SwitchEnum_CmpSuccess_2, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1, bool CallFunc_CheckTutorialPresence_menu_unlocked, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_2, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_3, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2, bool K2Node_CustomEvent_isUsingMouseAndKeyboard, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue_1, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UGlobalNav_Widget_C* K2Node_DynamicCast_AsGlobal_Nav_Widget, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EQtnAppearanceSlot CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsCurrentCategoryEmotes__ReturnValue, bool CallFunc_IsCurrentCategoryEmotes__ReturnValue_1, int32 K2Node_CustomEvent_HoveredIndex, bool CallFunc_NotEqual_IntInt_ReturnValue, class UQtnEmoteVerb_Archetype_C* CallFunc_HighlightEmoteSlot_EmoteVerbDefault, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsCurrentCategoryEmotes__ReturnValue_2, bool CallFunc_IsCurrentCategoryEmotes__ReturnValue_3, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_1, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, bool K2Node_Event_IsHovered, class UCosmeticItemSlot_C* K2Node_Event_CosmeticItemSlot, const struct FFQtnStoreItem& K2Node_Event_QtnStoreItem, int32 K2Node_CustomEvent_index, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb, class UClass* CallFunc_GetCosmeticItem_requiredDLC, bool CallFunc_GetCosmeticItem_DLCExistsInStore, class UQtnEmoteVerb_Archetype_C* CallFunc_GetClassDefaultObject_ReturnValue, class UQtnUserWidget* Temp_object_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_Event_isUsingMouseAndKeyboard, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_LessEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsVisible_ReturnValue_2, enum class EQtnUIScreenActionEnum K2Node_CustomEvent_Screen_Action_1, enum class EQtnUIScreenActionEnum K2Node_CustomEvent_Screen_Action, bool K2Node_SwitchEnum_CmpSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_IsCurrentCategoryEmotes__ReturnValue_4, bool CallFunc_IsCurrentCategoryEmotes__ReturnValue_5, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_3, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_4, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float K2Node_CustomEvent_HairColor, float K2Node_CustomEvent_skinTone, float K2Node_CustomEvent_HairBrightness, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsCurrentCategoryEmotes__ReturnValue_6, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_4, class UUI_FTUX_TrainingMoment_Screen_C* CallFunc_GetScreen_ReturnValue, class UUI_FTUX_Archetype_Widget_C* CallFunc_GetUserWidget_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_IsCurrentCategoryEmotes__ReturnValue_7, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuCharacter_Widget_C", "ExecuteUbergraph_MenuCharacter_Widget");

	Params::UMenuCharacter_Widget_C_ExecuteUbergraph_MenuCharacter_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Affordances = K2Node_Event_Affordances;
	Parms.K2Node_Event_myClass = K2Node_Event_myClass;
	Parms.K2Node_CustomEvent_WantShown = K2Node_CustomEvent_WantShown;
	Parms.CallFunc_GetStartTime_ReturnValue = CallFunc_GetStartTime_ReturnValue;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_GetOwningScreen_ReturnValue = CallFunc_GetOwningScreen_ReturnValue;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;
	Parms.K2Node_Event_previousScreen = K2Node_Event_previousScreen;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_Event_screenAction_1 = K2Node_Event_screenAction_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_SelectedIndex = K2Node_CustomEvent_SelectedIndex;
	Parms.CallFunc_SelectEmoteSlot_EmoteVerbDefault = CallFunc_SelectEmoteSlot_EmoteVerbDefault;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue = CallFunc_GetOwningPlayerUI_ReturnValue;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_1 = CallFunc_GetOwningPlayerUI_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype = K2Node_DynamicCast_AsQtn_Player_UIArchetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype_1 = K2Node_DynamicCast_AsQtn_Player_UIArchetype_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetDisplayName_ReturnValue_2 = CallFunc_GetDisplayName_ReturnValue_2;
	Parms.CallFunc_GetDisplayName_ReturnValue_3 = CallFunc_GetDisplayName_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.K2Node_Event_scrollDelta = K2Node_Event_scrollDelta;
	Parms.K2Node_Event_fromStick = K2Node_Event_fromStick;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_ID = K2Node_CustomEvent_ID;
	Parms.K2Node_CustomEvent_ItemClass = K2Node_CustomEvent_ItemClass;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_occupiedBodyPawn = K2Node_Event_occupiedBodyPawn;
	Parms.K2Node_Event_firstTime = K2Node_Event_firstTime;
	Parms.K2Node_Event_bodyAction_1 = K2Node_Event_bodyAction_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_Event_bodyAction = K2Node_Event_bodyAction;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1;
	Parms.CallFunc_CheckTutorialPresence_menu_unlocked = CallFunc_CheckTutorialPresence_menu_unlocked;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_2 = CallFunc_GetOwningPlayerUI_ReturnValue_2;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_3 = CallFunc_GetOwningPlayerUI_ReturnValue_3;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2;
	Parms.K2Node_CustomEvent_isUsingMouseAndKeyboard = K2Node_CustomEvent_isUsingMouseAndKeyboard;
	Parms.CallFunc_GetOwningScreen_ReturnValue_1 = CallFunc_GetOwningScreen_ReturnValue_1;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsGlobal_Nav_Widget = K2Node_DynamicCast_AsGlobal_Nav_Widget;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsCurrentCategoryEmotes__ReturnValue = CallFunc_IsCurrentCategoryEmotes__ReturnValue;
	Parms.CallFunc_IsCurrentCategoryEmotes__ReturnValue_1 = CallFunc_IsCurrentCategoryEmotes__ReturnValue_1;
	Parms.K2Node_CustomEvent_HoveredIndex = K2Node_CustomEvent_HoveredIndex;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_HighlightEmoteSlot_EmoteVerbDefault = CallFunc_HighlightEmoteSlot_EmoteVerbDefault;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsCurrentCategoryEmotes__ReturnValue_2 = CallFunc_IsCurrentCategoryEmotes__ReturnValue_2;
	Parms.CallFunc_IsCurrentCategoryEmotes__ReturnValue_3 = CallFunc_IsCurrentCategoryEmotes__ReturnValue_3;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue_1 = CallFunc_GetOccupiedBodyPawn_ReturnValue_1;
	Parms.CallFunc_GetBodyAppearanceComponent_ReturnValue = CallFunc_GetBodyAppearanceComponent_ReturnValue;
	Parms.K2Node_Event_IsHovered = K2Node_Event_IsHovered;
	Parms.K2Node_Event_CosmeticItemSlot = K2Node_Event_CosmeticItemSlot;
	Parms.K2Node_Event_QtnStoreItem = K2Node_Event_QtnStoreItem;
	Parms.K2Node_CustomEvent_index = K2Node_CustomEvent_index;
	Parms.CallFunc_GetCosmeticItem_OutBodyMesh = CallFunc_GetCosmeticItem_OutBodyMesh;
	Parms.CallFunc_GetCosmeticItem_OutEmoteVerb = CallFunc_GetCosmeticItem_OutEmoteVerb;
	Parms.CallFunc_GetCosmeticItem_requiredDLC = CallFunc_GetCosmeticItem_requiredDLC;
	Parms.CallFunc_GetCosmeticItem_DLCExistsInStore = CallFunc_GetCosmeticItem_DLCExistsInStore;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Event_isUsingMouseAndKeyboard = K2Node_Event_isUsingMouseAndKeyboard;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsVisible_ReturnValue_2 = CallFunc_IsVisible_ReturnValue_2;
	Parms.K2Node_CustomEvent_Screen_Action_1 = K2Node_CustomEvent_Screen_Action_1;
	Parms.K2Node_CustomEvent_Screen_Action = K2Node_CustomEvent_Screen_Action;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_IsCurrentCategoryEmotes__ReturnValue_4 = CallFunc_IsCurrentCategoryEmotes__ReturnValue_4;
	Parms.CallFunc_IsCurrentCategoryEmotes__ReturnValue_5 = CallFunc_IsCurrentCategoryEmotes__ReturnValue_5;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_3 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_3;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_4 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_4;
	Parms.K2Node_Event_screenAction = K2Node_Event_screenAction;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_HairColor = K2Node_CustomEvent_HairColor;
	Parms.K2Node_CustomEvent_skinTone = K2Node_CustomEvent_skinTone;
	Parms.K2Node_CustomEvent_HairBrightness = K2Node_CustomEvent_HairBrightness;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_IsCurrentCategoryEmotes__ReturnValue_6 = CallFunc_IsCurrentCategoryEmotes__ReturnValue_6;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_4 = CallFunc_GetOwningPlayerUI_ReturnValue_4;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_IsCurrentCategoryEmotes__ReturnValue_7 = CallFunc_IsCurrentCategoryEmotes__ReturnValue_7;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_5 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


