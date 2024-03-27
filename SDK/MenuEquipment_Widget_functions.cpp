#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MenuEquipment_Widget.MenuEquipment_Widget_C
// (None)

class UClass* UMenuEquipment_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuEquipment_Widget_C");

	return Clss;
}


// MenuEquipment_Widget_C MenuEquipment_Widget.Default__MenuEquipment_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuEquipment_Widget_C* UMenuEquipment_Widget_C::GetDefaultObj()
{
	static class UMenuEquipment_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuEquipment_Widget_C*>(UMenuEquipment_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.RequestCurrencyVisibilities
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowTP                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowDM                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowPP                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::RequestCurrencyVisibilities(bool* ShowTP, bool* ShowDM, bool* ShowPP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "RequestCurrencyVisibilities");

	Params::UMenuEquipment_Widget_C_RequestCurrencyVisibilities_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShowTP != nullptr)
		*ShowTP = Parms.ShowTP;

	if (ShowDM != nullptr)
		*ShowDM = Parms.ShowDM;

	if (ShowPP != nullptr)
		*ShowPP = Parms.ShowPP;

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.GetUnlockData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Requester                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Locked                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        LockText                                                         (Parm, OutParm)

void UMenuEquipment_Widget_C::GetUnlockData(class UObject* Requester, bool* Locked, class FText* LockText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "GetUnlockData");

	Params::UMenuEquipment_Widget_C_GetUnlockData_Params Parms{};

	Parms.Requester = Requester;

	UObject::ProcessEvent(Func, &Parms);

	if (Locked != nullptr)
		*Locked = Parms.Locked;

	if (LockText != nullptr)
		*LockText = Parms.LockText;

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.SequenceEvent__ENTRYPOINTMenuEquipment_Widget_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::SequenceEvent__ENTRYPOINTMenuEquipment_Widget_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "SequenceEvent__ENTRYPOINTMenuEquipment_Widget_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.SequenceEvent__ENTRYPOINTMenuEquipment_Widget_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::SequenceEvent__ENTRYPOINTMenuEquipment_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "SequenceEvent__ENTRYPOINTMenuEquipment_Widget_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.GetWeaponCardArt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Card_Art                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  TextureToUse                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::GetWeaponCardArt(class UTexture2D* Card_Art, class UTexture2D** TextureToUse, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "GetWeaponCardArt");

	Params::UMenuEquipment_Widget_C_GetWeaponCardArt_Params Parms{};

	Parms.Card_Art = Card_Art;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TextureToUse != nullptr)
		*TextureToUse = Parms.TextureToUse;

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.HideVariationsWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::HideVariationsWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "HideVariationsWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.OnItemVariationSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmoryItem_Widget_C*        ArmoryItem                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WasAlreadySelcted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::OnItemVariationSelected(class UArmoryItem_Widget_C* ArmoryItem, bool WasAlreadySelcted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "OnItemVariationSelected");

	Params::UMenuEquipment_Widget_C_OnItemVariationSelected_Params Parms{};

	Parms.ArmoryItem = ArmoryItem;
	Parms.WasAlreadySelcted = WasAlreadySelcted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.ShowVariationsWidgetForGear
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmoryItem_Widget_C*        InGear                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// struct FGeometry                   CallFunc_GetCachedGeometry_ReturnValue                           (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_LocalToViewport_PixelPosition                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_LocalToViewport_ViewportPosition                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::ShowVariationsWidgetForGear(class UArmoryItem_Widget_C* InGear, const struct FAnchors& K2Node_MakeStruct_Anchors, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "ShowVariationsWidgetForGear");

	Params::UMenuEquipment_Widget_C_ShowVariationsWidgetForGear_Params Parms{};

	Parms.InGear = InGear;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_GetCachedGeometry_ReturnValue = CallFunc_GetCachedGeometry_ReturnValue;
	Parms.CallFunc_LocalToViewport_PixelPosition = CallFunc_LocalToViewport_PixelPosition;
	Parms.CallFunc_LocalToViewport_ViewportPosition = CallFunc_LocalToViewport_ViewportPosition;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.IsVariationsMenuUnlockedByDLC
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDLCManager*              CallFunc_GetDLCManager_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPurchasedDLC_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::IsVariationsMenuUnlockedByDLC(bool* OutResult, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnDLCManager* CallFunc_GetDLCManager_ReturnValue, bool CallFunc_HasPurchasedDLC_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "IsVariationsMenuUnlockedByDLC");

	Params::UMenuEquipment_Widget_C_IsVariationsMenuUnlockedByDLC_Params Parms{};

	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.CallFunc_GetDLCManager_ReturnValue = CallFunc_GetDLCManager_ReturnValue;
	Parms.CallFunc_HasPurchasedDLC_ReturnValue = CallFunc_HasPurchasedDLC_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.IsWeaponUnlockedByDLC
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnWeaponConfiguration     InWeaponConfig                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnDLCManager*              CallFunc_GetDLCManager_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasPurchasedDLC_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::IsWeaponUnlockedByDLC(const struct FQtnWeaponConfiguration& InWeaponConfig, bool* OutResult, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnDLCManager* CallFunc_GetDLCManager_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_HasPurchasedDLC_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "IsWeaponUnlockedByDLC");

	Params::UMenuEquipment_Widget_C_IsWeaponUnlockedByDLC_Params Parms{};

	Parms.InWeaponConfig = InWeaponConfig;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.CallFunc_GetDLCManager_ReturnValue = CallFunc_GetDLCManager_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_HasPurchasedDLC_ReturnValue = CallFunc_HasPurchasedDLC_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.UnbindChangeEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AQtnPlayerPawn*              CallFunc_GetOwningQtnPlayerPawn_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AQtnPlayerPawn*              CallFunc_GetOwningQtnPlayerPawn_ReturnValue_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)

void UMenuEquipment_Widget_C::UnbindChangeEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnPlayerPawn* CallFunc_GetOwningQtnPlayerPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AQtnPlayerPawn* CallFunc_GetOwningQtnPlayerPawn_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "UnbindChangeEvents");

	Params::UMenuEquipment_Widget_C_UnbindChangeEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningQtnPlayerPawn_ReturnValue = CallFunc_GetOwningQtnPlayerPawn_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOwningQtnPlayerPawn_ReturnValue_1 = CallFunc_GetOwningQtnPlayerPawn_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.BindChangeEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AQtnPlayerPawn*              CallFunc_GetOwningQtnPlayerPawn_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AQtnPlayerPawn*              CallFunc_GetOwningQtnPlayerPawn_ReturnValue_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)

void UMenuEquipment_Widget_C::BindChangeEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnPlayerPawn* CallFunc_GetOwningQtnPlayerPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AQtnPlayerPawn* CallFunc_GetOwningQtnPlayerPawn_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "BindChangeEvents");

	Params::UMenuEquipment_Widget_C_BindChangeEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningQtnPlayerPawn_ReturnValue = CallFunc_GetOwningQtnPlayerPawn_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOwningQtnPlayerPawn_ReturnValue_1 = CallFunc_GetOwningQtnPlayerPawn_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Refresh All Category Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::Refresh_All_Category_Button()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Refresh All Category Button");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.FocusWeaponByItemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnItemData                InItemData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArmoryItem_Widget_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::FocusWeaponByItemData(const struct FQtnItemData& InItemData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UArmoryItem_Widget_C* CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "FocusWeaponByItemData");

	Params::UMenuEquipment_Widget_C_FocusWeaponByItemData_Params Parms{};

	Parms.InItemData = InItemData;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Focus First Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUI_ArmoryCategory_Enum Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::Focus_First_Item(enum class EUI_ArmoryCategory_Enum Temp_byte_Variable, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Focus First Item");

	Params::UMenuEquipment_Widget_C_Focus_First_Item_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue_1 = CallFunc_HasAnyChildren_ReturnValue_1;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Custom Item Left Navigation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UMenuEquipment_Widget_C::Custom_Item_Left_Navigation(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Custom Item Left Navigation");

	Params::UMenuEquipment_Widget_C_Custom_Item_Left_Navigation_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Check Gear for Hover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmoryItem_Widget_C*        LOCAL_HoveredGear                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LOCAL_FocusFound                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArmoryItem_Widget_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::Check_Gear_for_Hover(class UArmoryItem_Widget_C* LOCAL_HoveredGear, bool LOCAL_FocusFound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UArmoryItem_Widget_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsHovered_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Check Gear for Hover");

	Params::UMenuEquipment_Widget_C_Check_Gear_for_Hover_Params Parms{};

	Parms.LOCAL_HoveredGear = LOCAL_HoveredGear;
	Parms.LOCAL_FocusFound = LOCAL_FocusFound;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.RefreshSelectedTooltipPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ModalOn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors_1                                      (NoDestructor)

void UMenuEquipment_Widget_C::RefreshSelectedTooltipPosition(bool ModalOn, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FAnchors& K2Node_MakeStruct_Anchors_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "RefreshSelectedTooltipPosition");

	Params::UMenuEquipment_Widget_C_RefreshSelectedTooltipPosition_Params Parms{};

	Parms.ModalOn = ModalOn;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.K2Node_MakeStruct_Anchors_1 = K2Node_MakeStruct_Anchors_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.RefreshBannerFocusUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ChangeGearFocused                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::RefreshBannerFocusUI(bool ChangeGearFocused, bool CallFunc_Not_PreBool_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "RefreshBannerFocusUI");

	Params::UMenuEquipment_Widget_C_RefreshBannerFocusUI_Params Parms{};

	Parms.ChangeGearFocused = ChangeGearFocused;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_1 = CallFunc_Conv_BoolToFloat_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Training_ToggleCategoryButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DisableWeapons                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               DisablePowers                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::Training_ToggleCategoryButtons(bool DisableWeapons, bool DisablePowers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Training_ToggleCategoryButtons");

	Params::UMenuEquipment_Widget_C_Training_ToggleCategoryButtons_Params Parms{};

	Parms.DisableWeapons = DisableWeapons;
	Parms.DisablePowers = DisablePowers;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Initialize First Category
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Initialized                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::Initialize_First_Category(bool Initialized, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Initialize First Category");

	Params::UMenuEquipment_Widget_C_Initialize_First_Category_Params Parms{};

	Parms.Initialized = Initialized;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Check if Power Already Equipped
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmoryItem_Widget_C*        SelectedPower                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CurrentlyEquipped                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  CallFunc_GetPowerHandleTableAndName_DataTable                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetPowerHandleTableAndName_RowName                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                CallFunc_GetPower2ItemData_ReturnValue                           (ConstParm)
// struct FQtnItemData                CallFunc_GetPower1ItemData_ReturnValue                           (ConstParm)
// class UDataTable*                  CallFunc_GetPowerHandleTableAndName_DataTable_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetPowerHandleTableAndName_RowName_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetPowerHandleTableAndName_DataTable_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetPowerHandleTableAndName_RowName_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::Check_if_Power_Already_Equipped(class UArmoryItem_Widget_C* SelectedPower, bool* CurrentlyEquipped, class UDataTable* CallFunc_GetPowerHandleTableAndName_DataTable, class FName CallFunc_GetPowerHandleTableAndName_RowName, const struct FQtnItemData& CallFunc_GetPower2ItemData_ReturnValue, const struct FQtnItemData& CallFunc_GetPower1ItemData_ReturnValue, class UDataTable* CallFunc_GetPowerHandleTableAndName_DataTable_1, class FName CallFunc_GetPowerHandleTableAndName_RowName_1, class UDataTable* CallFunc_GetPowerHandleTableAndName_DataTable_2, class FName CallFunc_GetPowerHandleTableAndName_RowName_2, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Check if Power Already Equipped");

	Params::UMenuEquipment_Widget_C_Check_if_Power_Already_Equipped_Params Parms{};

	Parms.SelectedPower = SelectedPower;
	Parms.CallFunc_GetPowerHandleTableAndName_DataTable = CallFunc_GetPowerHandleTableAndName_DataTable;
	Parms.CallFunc_GetPowerHandleTableAndName_RowName = CallFunc_GetPowerHandleTableAndName_RowName;
	Parms.CallFunc_GetPower2ItemData_ReturnValue = CallFunc_GetPower2ItemData_ReturnValue;
	Parms.CallFunc_GetPower1ItemData_ReturnValue = CallFunc_GetPower1ItemData_ReturnValue;
	Parms.CallFunc_GetPowerHandleTableAndName_DataTable_1 = CallFunc_GetPowerHandleTableAndName_DataTable_1;
	Parms.CallFunc_GetPowerHandleTableAndName_RowName_1 = CallFunc_GetPowerHandleTableAndName_RowName_1;
	Parms.CallFunc_GetPowerHandleTableAndName_DataTable_2 = CallFunc_GetPowerHandleTableAndName_DataTable_2;
	Parms.CallFunc_GetPowerHandleTableAndName_RowName_2 = CallFunc_GetPowerHandleTableAndName_RowName_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentlyEquipped != nullptr)
		*CurrentlyEquipped = Parms.CurrentlyEquipped;

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Bind Category Buttons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)

void UMenuEquipment_Widget_C::Bind_Category_Buttons(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Bind Category Buttons");

	Params::UMenuEquipment_Widget_C_Bind_Category_Buttons_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.RefreshChangedCategoryButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtn_EquipmentCategory  Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapons_rangedWeapon                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapons_meleeWeapon                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetIconForUI_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetIconForUI_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                CallFunc_GetPower1ItemData_ReturnValue                           (ConstParm)
// struct FQtnItemData                CallFunc_GetPower2ItemData_ReturnValue                           (ConstParm)
// class UTexture2D*                  CallFunc_GetPowerIconFromItemData_CooldownWheel                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetPowerIconFromItemData_CooldownWheel_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::RefreshChangedCategoryButton(enum class EQtn_EquipmentCategory Selection, bool K2Node_SwitchEnum_CmpSuccess, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_rangedWeapon, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_meleeWeapon, class UTexture2D* CallFunc_GetIconForUI_ReturnValue, class UTexture2D* CallFunc_GetIconForUI_ReturnValue_1, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, const struct FQtnItemData& CallFunc_GetPower1ItemData_ReturnValue, const struct FQtnItemData& CallFunc_GetPower2ItemData_ReturnValue, class UTexture2D* CallFunc_GetPowerIconFromItemData_CooldownWheel, class UTexture2D* CallFunc_GetPowerIconFromItemData_CooldownWheel_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "RefreshChangedCategoryButton");

	Params::UMenuEquipment_Widget_C_RefreshChangedCategoryButton_Params Parms{};

	Parms.Selection = Selection;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetIntendedEquippedWeapons_rangedWeapon = CallFunc_GetIntendedEquippedWeapons_rangedWeapon;
	Parms.CallFunc_GetIntendedEquippedWeapons_meleeWeapon = CallFunc_GetIntendedEquippedWeapons_meleeWeapon;
	Parms.CallFunc_GetIconForUI_ReturnValue = CallFunc_GetIconForUI_ReturnValue;
	Parms.CallFunc_GetIconForUI_ReturnValue_1 = CallFunc_GetIconForUI_ReturnValue_1;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.CallFunc_GetPower1ItemData_ReturnValue = CallFunc_GetPower1ItemData_ReturnValue;
	Parms.CallFunc_GetPower2ItemData_ReturnValue = CallFunc_GetPower2ItemData_ReturnValue;
	Parms.CallFunc_GetPowerIconFromItemData_CooldownWheel = CallFunc_GetPowerIconFromItemData_CooldownWheel;
	Parms.CallFunc_GetPowerIconFromItemData_CooldownWheel_1 = CallFunc_GetPowerIconFromItemData_CooldownWheel_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.GetPowerIconFromItemData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnItemData                QtnItemData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UTexture2D*                  CooldownWheel                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemStatSettings        CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UQtnVerb>        CallFunc_SyncLoadVerbClass_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnVerb*                    CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb_Archetype_C*        K2Node_DynamicCast_AsQtn_Verb_Archetype                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::GetPowerIconFromItemData(struct FQtnItemData& QtnItemData, class UTexture2D** CooldownWheel, const struct FQtnItemStatSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TSubclassOf<class UQtnVerb> CallFunc_SyncLoadVerbClass_ReturnValue, class UQtnVerb* CallFunc_GetClassDefaultObject_ReturnValue, class UQtnVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Verb_Archetype, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "GetPowerIconFromItemData");

	Params::UMenuEquipment_Widget_C_GetPowerIconFromItemData_Params Parms{};

	Parms.QtnItemData = QtnItemData;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_SyncLoadVerbClass_ReturnValue = CallFunc_SyncLoadVerbClass_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Verb_Archetype = K2Node_DynamicCast_AsQtn_Verb_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CooldownWheel != nullptr)
		*CooldownWheel = Parms.CooldownWheel;

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.AddGearToCategoryGrid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmoryItem_Widget_C*        GearWidgetToAdd                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LOCAL_IsLeftItem                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArmoryItem_Widget_C*        LOCAL_GearWidget                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtn_EquipmentCategory  Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtn_EquipmentCategory  Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtn_EquipmentCategory  Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtn_EquipmentCategory  Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUniformGridPanel*           K2Node_Select_Default_2                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::AddGearToCategoryGrid(class UArmoryItem_Widget_C* GearWidgetToAdd, bool LOCAL_IsLeftItem, class UArmoryItem_Widget_C* LOCAL_GearWidget, enum class EQtn_EquipmentCategory Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, enum class EQtn_EquipmentCategory Temp_byte_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, enum class EQtn_EquipmentCategory Temp_byte_Variable_2, int32 K2Node_Select_Default, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, int32 Temp_int_Variable_8, int32 Temp_int_Variable_9, enum class EQtn_EquipmentCategory Temp_byte_Variable_3, int32 K2Node_Select_Default_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUniformGridPanel* K2Node_Select_Default_2, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 K2Node_Select_Default_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "AddGearToCategoryGrid");

	Params::UMenuEquipment_Widget_C_AddGearToCategoryGrid_Params Parms{};

	Parms.GearWidgetToAdd = GearWidgetToAdd;
	Parms.LOCAL_IsLeftItem = LOCAL_IsLeftItem;
	Parms.LOCAL_GearWidget = LOCAL_GearWidget;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.Temp_int_Variable_9 = Temp_int_Variable_9;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.PopulateGearItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameplayTag>        Subweapons                                                       (Edit, BlueprintVisible)
// struct FQtnWeaponConfiguration     WeaponConf                                                       (Edit, BlueprintVisible)
// class ABaseWeapon_C*               Parent                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Container                                                        (Edit, BlueprintVisible)
// class ABaseWeapon_C*               Weapon                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnItemData>        LOCAL_PowerData                                                  (Edit, BlueprintVisible)
// TArray<struct FQtnItemData>        LOCAL_WeaponData                                                 (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCombatSettings*          CallFunc_GetCombatSettings_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWeaponUnlockedByDLC_OutResult                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnWeaponConfiguration     CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWeaponUnlockedByDLC_OutResult_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Item                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_GetIconForUI_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetItemArchetype_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseWeapon_C*               K2Node_DynamicCast_AsBase_Weapon                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                CallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UQtnVerb>        CallFunc_GetPowerVerbClass_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnVerb*                    CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb_Archetype_C*        K2Node_DynamicCast_AsQtn_Verb_Archetype                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class UArmoryItem_Widget_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtn_EquipmentCategory  Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                CallFunc_Array_Get_Item_2                                        (None)
// bool                               CallFunc_handleTutorialStaffGrant_haltStaff                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_handleTutorialStaffGrant_found_Staff                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnWeaponConfiguration     CallFunc_GetWeaponConfigFromItemData_WeaponConfig                (None)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtn_EquipmentCategory  Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtn_EquipmentCategory  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArmoryItem_Widget_C*        CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnItemData>        CallFunc_GetVaultWeapons_ReturnValue                             (ConstParm, ReferenceParm)
// TArray<struct FQtnItemData>        CallFunc_GetVaultPowers_ReturnValue                              (ConstParm, ReferenceParm)

void UMenuEquipment_Widget_C::PopulateGearItems(const TArray<struct FGameplayTag>& Subweapons, const struct FQtnWeaponConfiguration& WeaponConf, class ABaseWeapon_C* Parent, const struct FGameplayTagContainer& Container, class ABaseWeapon_C* Weapon, const TArray<struct FQtnItemData>& LOCAL_PowerData, const TArray<struct FQtnItemData>& LOCAL_WeaponData, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnCombatSettings* CallFunc_GetCombatSettings_ReturnValue, bool CallFunc_IsWeaponUnlockedByDLC_OutResult, int32 Temp_int_Loop_Counter_Variable_1, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, const struct FQtnWeaponConfiguration& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsWeaponUnlockedByDLC_OutResult_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_SyncLoadClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Item, bool K2Node_ClassDynamicCast_bSuccess, class UTexture2D* CallFunc_GetIconForUI_ReturnValue, class AQtnItem* CallFunc_GetItemArchetype_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Array_Length_ReturnValue_2, const struct FQtnItemData& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, TSubclassOf<class UQtnVerb> CallFunc_GetPowerVerbClass_ReturnValue, class UQtnVerb* CallFunc_GetClassDefaultObject_ReturnValue, class UQtnVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Verb_Archetype, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UArmoryItem_Widget_C* CallFunc_Create_ReturnValue, enum class EQtn_EquipmentCategory Temp_byte_Variable, const struct FQtnItemData& CallFunc_Array_Get_Item_2, bool CallFunc_handleTutorialStaffGrant_haltStaff, bool CallFunc_handleTutorialStaffGrant_found_Staff, const struct FQtnWeaponConfiguration& CallFunc_GetWeaponConfigFromItemData_WeaponConfig, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, enum class EQtn_EquipmentCategory Temp_byte_Variable_1, bool Temp_bool_Variable, int32 CallFunc_Array_Add_ReturnValue_1, bool Temp_bool_Variable_1, enum class EQtn_EquipmentCategory K2Node_Select_Default, class UArmoryItem_Widget_C* CallFunc_Create_ReturnValue_1, class UTexture2D* K2Node_Select_Default_1, int32 CallFunc_Array_Add_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, TArray<struct FQtnItemData>& CallFunc_GetVaultWeapons_ReturnValue, TArray<struct FQtnItemData>& CallFunc_GetVaultPowers_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "PopulateGearItems");

	Params::UMenuEquipment_Widget_C_PopulateGearItems_Params Parms{};

	Parms.Subweapons = Subweapons;
	Parms.WeaponConf = WeaponConf;
	Parms.Parent = Parent;
	Parms.Container = Container;
	Parms.Weapon = Weapon;
	Parms.LOCAL_PowerData = LOCAL_PowerData;
	Parms.LOCAL_WeaponData = LOCAL_WeaponData;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.CallFunc_GetCombatSettings_ReturnValue = CallFunc_GetCombatSettings_ReturnValue;
	Parms.CallFunc_IsWeaponUnlockedByDLC_OutResult = CallFunc_IsWeaponUnlockedByDLC_OutResult;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_IsWeaponUnlockedByDLC_OutResult_1 = CallFunc_IsWeaponUnlockedByDLC_OutResult_1;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SyncLoadClass_ReturnValue = CallFunc_SyncLoadClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsQtn_Item = K2Node_ClassDynamicCast_AsQtn_Item;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetIconForUI_ReturnValue = CallFunc_GetIconForUI_ReturnValue;
	Parms.CallFunc_GetItemArchetype_ReturnValue = CallFunc_GetItemArchetype_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Weapon = K2Node_DynamicCast_AsBase_Weapon;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetPowerVerbClass_ReturnValue = CallFunc_GetPowerVerbClass_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Verb_Archetype = K2Node_DynamicCast_AsQtn_Verb_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_handleTutorialStaffGrant_haltStaff = CallFunc_handleTutorialStaffGrant_haltStaff;
	Parms.CallFunc_handleTutorialStaffGrant_found_Staff = CallFunc_handleTutorialStaffGrant_found_Staff;
	Parms.CallFunc_GetWeaponConfigFromItemData_WeaponConfig = CallFunc_GetWeaponConfigFromItemData_WeaponConfig;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.CallFunc_GetVaultWeapons_ReturnValue = CallFunc_GetVaultWeapons_ReturnValue;
	Parms.CallFunc_GetVaultPowers_ReturnValue = CallFunc_GetVaultPowers_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.GetWeaponConfigFromItemData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FQtnItemData                QtnItemData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQtnWeaponConfiguration     WeaponConfig                                                     (Parm, OutParm)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCombatSettings*          CallFunc_GetCombatSettings_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnWeaponConfiguration     CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::GetWeaponConfigFromItemData(struct FQtnItemData& QtnItemData, struct FQtnWeaponConfiguration* WeaponConfig, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnCombatSettings* CallFunc_GetCombatSettings_ReturnValue, const struct FQtnWeaponConfiguration& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "GetWeaponConfigFromItemData");

	Params::UMenuEquipment_Widget_C_GetWeaponConfigFromItemData_Params Parms{};

	Parms.QtnItemData = QtnItemData;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.CallFunc_GetCombatSettings_ReturnValue = CallFunc_GetCombatSettings_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponConfig != nullptr)
		*WeaponConfig = std::move(Parms.WeaponConfig);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.CheckGearLocked
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmoryItem_Widget_C*        SelectedGear                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FTUX_StaffOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Locked                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        LockedText                                                       (Parm, OutParm)
// bool                               LOCAL_StaffOverride                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArmoryItem_Widget_C*        LOCAL_SelectedGear                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnVerb>        CallFunc_GetPowerVerbClass_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnVerb*                    CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnVerbUI_Interface_C>K2Node_DynamicCast_AsQtn_Verb_UI_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUnlockData_Locked                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetUnlockData_LockText                                  (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnWeaponConfiguration     CallFunc_GetWeaponConfigFromItemData_WeaponConfig                (None)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Item                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnItem*                    CallFunc_GetClassDefaultObject_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemUIInterfaces_C>K2Node_DynamicCast_AsItem_UIInterfaces                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUnlockData_Locked_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetUnlockData_LockText_1                                (None)

void UMenuEquipment_Widget_C::CheckGearLocked(class UArmoryItem_Widget_C* SelectedGear, bool FTUX_StaffOverride, bool* Locked, class FText* LockedText, bool LOCAL_StaffOverride, class UArmoryItem_Widget_C* LOCAL_SelectedGear, TSubclassOf<class UQtnVerb> CallFunc_GetPowerVerbClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UQtnVerb* CallFunc_GetClassDefaultObject_ReturnValue, TScriptInterface<class IQtnVerbUI_Interface_C> K2Node_DynamicCast_AsQtn_Verb_UI_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetUnlockData_Locked, class FText CallFunc_GetUnlockData_LockText, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, const struct FQtnWeaponConfiguration& CallFunc_GetWeaponConfigFromItemData_WeaponConfig, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UClass* CallFunc_SyncLoadClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Item, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue_1, class AQtnItem* CallFunc_GetClassDefaultObject_ReturnValue_1, TScriptInterface<class IItemUIInterfaces_C> K2Node_DynamicCast_AsItem_UIInterfaces, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_GetUnlockData_Locked_1, class FText CallFunc_GetUnlockData_LockText_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "CheckGearLocked");

	Params::UMenuEquipment_Widget_C_CheckGearLocked_Params Parms{};

	Parms.SelectedGear = SelectedGear;
	Parms.FTUX_StaffOverride = FTUX_StaffOverride;
	Parms.LOCAL_StaffOverride = LOCAL_StaffOverride;
	Parms.LOCAL_SelectedGear = LOCAL_SelectedGear;
	Parms.CallFunc_GetPowerVerbClass_ReturnValue = CallFunc_GetPowerVerbClass_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Verb_UI_Interface = K2Node_DynamicCast_AsQtn_Verb_UI_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUnlockData_Locked = CallFunc_GetUnlockData_Locked;
	Parms.CallFunc_GetUnlockData_LockText = CallFunc_GetUnlockData_LockText;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetTutorialState_ReturnValue = CallFunc_GetTutorialState_ReturnValue;
	Parms.CallFunc_GetWeaponConfigFromItemData_WeaponConfig = CallFunc_GetWeaponConfigFromItemData_WeaponConfig;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_SyncLoadClass_ReturnValue = CallFunc_SyncLoadClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsQtn_Item = K2Node_ClassDynamicCast_AsQtn_Item;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_IsValidClass_ReturnValue_1 = CallFunc_IsValidClass_ReturnValue_1;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue_1 = CallFunc_GetClassDefaultObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsItem_UIInterfaces = K2Node_DynamicCast_AsItem_UIInterfaces;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_GetUnlockData_Locked_1 = CallFunc_GetUnlockData_Locked_1;
	Parms.CallFunc_GetUnlockData_LockText_1 = CallFunc_GetUnlockData_LockText_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Locked != nullptr)
		*Locked = Parms.Locked;

	if (LockedText != nullptr)
		*LockedText = Parms.LockedText;

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.RefreshAllGearUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUserWidget*>         LOCAL_ShownEntries                                               (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArmoryItem_Widget_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckGearLocked_Locked                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_CheckGearLocked_LockedText                              (None)
// bool                               CallFunc_CheckGearEquipped_IsEquipped                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckGearEquipped_variation                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_CheckGearEquipped_Weapon_Subtype_Tag                    (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::RefreshAllGearUI(const TArray<class UUserWidget*>& LOCAL_ShownEntries, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UArmoryItem_Widget_C* CallFunc_Array_Get_Item, bool CallFunc_CheckGearLocked_Locked, class FText CallFunc_CheckGearLocked_LockedText, bool CallFunc_CheckGearEquipped_IsEquipped, bool CallFunc_CheckGearEquipped_variation, const struct FGameplayTag& CallFunc_CheckGearEquipped_Weapon_Subtype_Tag, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "RefreshAllGearUI");

	Params::UMenuEquipment_Widget_C_RefreshAllGearUI_Params Parms{};

	Parms.LOCAL_ShownEntries = LOCAL_ShownEntries;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CheckGearLocked_Locked = CallFunc_CheckGearLocked_Locked;
	Parms.CallFunc_CheckGearLocked_LockedText = CallFunc_CheckGearLocked_LockedText;
	Parms.CallFunc_CheckGearEquipped_IsEquipped = CallFunc_CheckGearEquipped_IsEquipped;
	Parms.CallFunc_CheckGearEquipped_variation = CallFunc_CheckGearEquipped_variation;
	Parms.CallFunc_CheckGearEquipped_Weapon_Subtype_Tag = CallFunc_CheckGearEquipped_Weapon_Subtype_Tag;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.CheckGearEquipped
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmoryItem_Widget_C*        SelectedGear                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEquipped                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Variation                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                Weapon_Subtype_Tag                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// class UArmoryItem_Widget_C*        LOCAL_SelectedGear                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOriginalBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOriginalBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapon_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                CallFunc_GetItemData_ReturnValue                                 (None)
// struct FQtnWeaponConfiguration     CallFunc_GetWeaponConfigFromItemData_WeaponConfig                (None)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)
// TArray<struct FGameplayTag>        CallFunc_Gather_All_Weapon_VariationTags_AllRelevantTags         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                CallFunc_GetPower1ItemData_ReturnValue                           (ConstParm)
// struct FQtnItemData                CallFunc_GetPower2ItemData_ReturnValue                           (ConstParm)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::CheckGearEquipped(class UArmoryItem_Widget_C* SelectedGear, bool* IsEquipped, bool* Variation, struct FGameplayTag* Weapon_Subtype_Tag, class UArmoryItem_Widget_C* LOCAL_SelectedGear, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, class AQtnItem* CallFunc_GetIntendedEquippedWeapon_ReturnValue, const struct FQtnItemData& CallFunc_GetItemData_ReturnValue, const struct FQtnWeaponConfiguration& CallFunc_GetWeaponConfigFromItemData_WeaponConfig, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, TArray<struct FGameplayTag>& CallFunc_Gather_All_Weapon_VariationTags_AllRelevantTags, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, const struct FQtnItemData& CallFunc_GetPower1ItemData_ReturnValue, const struct FQtnItemData& CallFunc_GetPower2ItemData_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "CheckGearEquipped");

	Params::UMenuEquipment_Widget_C_CheckGearEquipped_Params Parms{};

	Parms.SelectedGear = SelectedGear;
	Parms.LOCAL_SelectedGear = LOCAL_SelectedGear;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetLocalPlayerOriginalBody_outputPin = CallFunc_GetLocalPlayerOriginalBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOriginalBody_ReturnValue = CallFunc_GetLocalPlayerOriginalBody_ReturnValue;
	Parms.CallFunc_GetIntendedEquippedWeapon_ReturnValue = CallFunc_GetIntendedEquippedWeapon_ReturnValue;
	Parms.CallFunc_GetItemData_ReturnValue = CallFunc_GetItemData_ReturnValue;
	Parms.CallFunc_GetWeaponConfigFromItemData_WeaponConfig = CallFunc_GetWeaponConfigFromItemData_WeaponConfig;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_Gather_All_Weapon_VariationTags_AllRelevantTags = CallFunc_Gather_All_Weapon_VariationTags_AllRelevantTags;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.CallFunc_GetPower1ItemData_ReturnValue = CallFunc_GetPower1ItemData_ReturnValue;
	Parms.CallFunc_GetPower2ItemData_ReturnValue = CallFunc_GetPower2ItemData_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEquipped != nullptr)
		*IsEquipped = Parms.IsEquipped;

	if (Variation != nullptr)
		*Variation = Parms.Variation;

	if (Weapon_Subtype_Tag != nullptr)
		*Weapon_Subtype_Tag = std::move(Parms.Weapon_Subtype_Tag);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Handle Gear Change
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmoryItem_Widget_C*        SelectedGear                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtn_EquipmentCategory  LOCAL_SelectedGearCategory                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArmoryItem_Widget_C*        LOCAL_SelectedGear                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnBodyDataBag*             CallFunc_GetBodyDataBag_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBodyDataBag_C*              K2Node_DynamicCast_AsBody_Data_Bag                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetPowerHandleTableAndName_DataTable                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetPowerHandleTableAndName_RowName                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                CallFunc_GetPower2ItemData_ReturnValue                           (ConstParm)
// struct FQtnItemData                CallFunc_GetPower1ItemData_ReturnValue                           (ConstParm)
// class UDataTable*                  CallFunc_GetPowerHandleTableAndName_DataTable_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetPowerHandleTableAndName_RowName_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetPowerHandleTableAndName_DataTable_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetPowerHandleTableAndName_RowName_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnBodyDataBag*             CallFunc_GetBodyDataBag_ReturnValue_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBodyDataBag_C*              K2Node_DynamicCast_AsBody_Data_Bag_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnItemData>        CallFunc_GetVaultWeapons_ReturnValue                             (ConstParm, ReferenceParm)
// bool                               CallFunc_IsWeaponRanged_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::Handle_Gear_Change(class UArmoryItem_Widget_C* SelectedGear, enum class EQtn_EquipmentCategory LOCAL_SelectedGearCategory, class UArmoryItem_Widget_C* LOCAL_SelectedGear, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_3, class UQtnBodyDataBag* CallFunc_GetBodyDataBag_ReturnValue, class UBodyDataBag_C* K2Node_DynamicCast_AsBody_Data_Bag, bool K2Node_DynamicCast_bSuccess, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, class UDataTable* CallFunc_GetPowerHandleTableAndName_DataTable, class FName CallFunc_GetPowerHandleTableAndName_RowName, const struct FQtnItemData& CallFunc_GetPower2ItemData_ReturnValue, const struct FQtnItemData& CallFunc_GetPower1ItemData_ReturnValue, class UDataTable* CallFunc_GetPowerHandleTableAndName_DataTable_1, class FName CallFunc_GetPowerHandleTableAndName_RowName_1, class UDataTable* CallFunc_GetPowerHandleTableAndName_DataTable_2, class FName CallFunc_GetPowerHandleTableAndName_RowName_2, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_3, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData_1, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_1, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData_1, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_4, class UQtnBodyDataBag* CallFunc_GetBodyDataBag_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class UBodyDataBag_C* K2Node_DynamicCast_AsBody_Data_Bag_1, bool K2Node_DynamicCast_bSuccess_1, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue_1, TArray<struct FQtnItemData>& CallFunc_GetVaultWeapons_ReturnValue, bool CallFunc_IsWeaponRanged_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Handle Gear Change");

	Params::UMenuEquipment_Widget_C_Handle_Gear_Change_Params Parms{};

	Parms.SelectedGear = SelectedGear;
	Parms.LOCAL_SelectedGearCategory = LOCAL_SelectedGearCategory;
	Parms.LOCAL_SelectedGear = LOCAL_SelectedGear;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData = CallFunc_GetSaveLoadDataBP_localOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData = CallFunc_GetSaveLoadDataBP_progressSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin = CallFunc_GetSaveLoadDataBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_GetBodyDataBag_ReturnValue = CallFunc_GetBodyDataBag_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Data_Bag = K2Node_DynamicCast_AsBody_Data_Bag;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.CallFunc_GetPowerHandleTableAndName_DataTable = CallFunc_GetPowerHandleTableAndName_DataTable;
	Parms.CallFunc_GetPowerHandleTableAndName_RowName = CallFunc_GetPowerHandleTableAndName_RowName;
	Parms.CallFunc_GetPower2ItemData_ReturnValue = CallFunc_GetPower2ItemData_ReturnValue;
	Parms.CallFunc_GetPower1ItemData_ReturnValue = CallFunc_GetPower1ItemData_ReturnValue;
	Parms.CallFunc_GetPowerHandleTableAndName_DataTable_1 = CallFunc_GetPowerHandleTableAndName_DataTable_1;
	Parms.CallFunc_GetPowerHandleTableAndName_RowName_1 = CallFunc_GetPowerHandleTableAndName_RowName_1;
	Parms.CallFunc_GetPowerHandleTableAndName_DataTable_2 = CallFunc_GetPowerHandleTableAndName_DataTable_2;
	Parms.CallFunc_GetPowerHandleTableAndName_RowName_2 = CallFunc_GetPowerHandleTableAndName_RowName_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_2 = CallFunc_GetOwningPlayerController_ReturnValue_2;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_3 = CallFunc_GetOwningPlayerController_ReturnValue_3;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData_1 = CallFunc_GetSaveLoadDataBP_localOptionsSaveData_1;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_1 = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_1;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData_1 = CallFunc_GetSaveLoadDataBP_progressSaveData_1;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin_1 = CallFunc_GetSaveLoadDataBP_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_GetBodyDataBag_ReturnValue_1 = CallFunc_GetBodyDataBag_ReturnValue_1;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Data_Bag_1 = K2Node_DynamicCast_AsBody_Data_Bag_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetBodyInventory_ReturnValue_1 = CallFunc_GetBodyInventory_ReturnValue_1;
	Parms.CallFunc_GetVaultWeapons_ReturnValue = CallFunc_GetVaultWeapons_ReturnValue;
	Parms.CallFunc_IsWeaponRanged_ReturnValue = CallFunc_IsWeaponRanged_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Handle New Power Tutorial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>              IncludedTutorials                                                (Edit, BlueprintVisible)
// TArray<class UClass*>              ExcludedTutorials                                                (Edit, BlueprintVisible)
// TArray<class UClass*>              K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnTutorialInstanceData>CallFunc_GetAllActiveTutorials_ReturnValue                       (ReferenceParm)
// struct FQtnTutorialInstanceData    CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOriginalBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnVerb*>            CallFunc_GetAllEquippedVerbs_pawnVerbs                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnVerbUI_Interface_C>K2Node_DynamicCast_AsQtn_Verb_UI_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVerbAPower_isPower                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnVerb_Archetype_C*        K2Node_DynamicCast_AsQtn_Verb_Archetype                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::Handle_New_Power_Tutorial(const TArray<class UClass*>& IncludedTutorials, const TArray<class UClass*>& ExcludedTutorials, TArray<class UClass*>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<struct FQtnTutorialInstanceData>& CallFunc_GetAllActiveTutorials_ReturnValue, const struct FQtnTutorialInstanceData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class AQtnBodyPawn* CallFunc_GetOriginalBodyPawn_ReturnValue, TArray<class UQtnVerb*>& CallFunc_GetAllEquippedVerbs_pawnVerbs, int32 CallFunc_Array_Length_ReturnValue_1, class UQtnVerb* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, TScriptInterface<class IQtnVerbUI_Interface_C> K2Node_DynamicCast_AsQtn_Verb_UI_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVerbAPower_isPower, bool CallFunc_IsValid_ReturnValue, class UQtnVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Verb_Archetype, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Handle New Power Tutorial");

	Params::UMenuEquipment_Widget_C_Handle_New_Power_Tutorial_Params Parms{};

	Parms.IncludedTutorials = IncludedTutorials;
	Parms.ExcludedTutorials = ExcludedTutorials;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetAllActiveTutorials_ReturnValue = CallFunc_GetAllActiveTutorials_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetOriginalBodyPawn_ReturnValue = CallFunc_GetOriginalBodyPawn_ReturnValue;
	Parms.CallFunc_GetAllEquippedVerbs_pawnVerbs = CallFunc_GetAllEquippedVerbs_pawnVerbs;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Verb_UI_Interface = K2Node_DynamicCast_AsQtn_Verb_UI_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsVerbAPower_isPower = CallFunc_IsVerbAPower_isPower;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Verb_Archetype = K2Node_DynamicCast_AsQtn_Verb_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Training Moment Powers Check For Preternatural Power
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQtnItemData>        LOCAL_NewPowers                                                  (Edit, BlueprintVisible)
// TArray<struct FQtnItemData>        LOCAL_OldPowers                                                  (Edit, BlueprintVisible)
// TArray<struct FQtnItemData>        LOCAL_OriginalList                                               (Edit, BlueprintVisible)
// bool                               CallFunc_TrainingMoment_Powers_DoesPlayerHaveUnlockedPower_Has_Unlocked_Power(ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTutorialBoolValue_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::Training_Moment_Powers_Check_For_Preternatural_Power(const TArray<struct FQtnItemData>& LOCAL_NewPowers, const TArray<struct FQtnItemData>& LOCAL_OldPowers, const TArray<struct FQtnItemData>& LOCAL_OriginalList, bool CallFunc_TrainingMoment_Powers_DoesPlayerHaveUnlockedPower_Has_Unlocked_Power, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_GetTutorialBoolValue_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Training Moment Powers Check For Preternatural Power");

	Params::UMenuEquipment_Widget_C_Training_Moment_Powers_Check_For_Preternatural_Power_Params Parms{};

	Parms.LOCAL_NewPowers = LOCAL_NewPowers;
	Parms.LOCAL_OldPowers = LOCAL_OldPowers;
	Parms.LOCAL_OriginalList = LOCAL_OriginalList;
	Parms.CallFunc_TrainingMoment_Powers_DoesPlayerHaveUnlockedPower_Has_Unlocked_Power = CallFunc_TrainingMoment_Powers_DoesPlayerHaveUnlockedPower_Has_Unlocked_Power;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetTutorialBoolValue_ReturnValue = CallFunc_GetTutorialBoolValue_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.HandleDefaultFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::HandleDefaultFocus(bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "HandleDefaultFocus");

	Params::UMenuEquipment_Widget_C_HandleDefaultFocus_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Handle New Weapon Tutorial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>              IncludedTutorials                                                (Edit, BlueprintVisible)
// TArray<class UClass*>              ExcludedTutorials                                                (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FQtnTutorialInstanceData>CallFunc_GetAllActiveTutorials_ReturnValue                       (ReferenceParm)
// struct FQtnTutorialInstanceData    CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOriginalBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapon_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapon_ReturnValue_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseWeapon_C*               K2Node_DynamicCast_AsBase_Weapon                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseWeapon_C*               K2Node_DynamicCast_AsBase_Weapon_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetTutorialBoolValue_OutValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetTutorialBoolValue_OutValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::Handle_New_Weapon_Tutorial(const TArray<class UClass*>& IncludedTutorials, const TArray<class UClass*>& ExcludedTutorials, int32 Temp_int_Array_Index_Variable, TArray<class UClass*>& K2Node_MakeArray_Array, TArray<struct FQtnTutorialInstanceData>& CallFunc_GetAllActiveTutorials_ReturnValue, const struct FQtnTutorialInstanceData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class AQtnBodyPawn* CallFunc_GetOriginalBodyPawn_ReturnValue, class AQtnItem* CallFunc_GetIntendedEquippedWeapon_ReturnValue, class AQtnItem* CallFunc_GetIntendedEquippedWeapon_ReturnValue_1, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetTutorialBoolValue_OutValue, bool CallFunc_GetTutorialBoolValue_OutValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Handle New Weapon Tutorial");

	Params::UMenuEquipment_Widget_C_Handle_New_Weapon_Tutorial_Params Parms{};

	Parms.IncludedTutorials = IncludedTutorials;
	Parms.ExcludedTutorials = ExcludedTutorials;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetAllActiveTutorials_ReturnValue = CallFunc_GetAllActiveTutorials_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetOriginalBodyPawn_ReturnValue = CallFunc_GetOriginalBodyPawn_ReturnValue;
	Parms.CallFunc_GetIntendedEquippedWeapon_ReturnValue = CallFunc_GetIntendedEquippedWeapon_ReturnValue;
	Parms.CallFunc_GetIntendedEquippedWeapon_ReturnValue_1 = CallFunc_GetIntendedEquippedWeapon_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBase_Weapon = K2Node_DynamicCast_AsBase_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBase_Weapon_1 = K2Node_DynamicCast_AsBase_Weapon_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetTutorialBoolValue_OutValue = CallFunc_GetTutorialBoolValue_OutValue;
	Parms.CallFunc_GetTutorialBoolValue_OutValue_1 = CallFunc_GetTutorialBoolValue_OutValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.getWeaponTutorialManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::GetWeaponTutorialManager(class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "getWeaponTutorialManager");

	Params::UMenuEquipment_Widget_C_GetWeaponTutorialManager_Params Parms{};

	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Armory Training Save Complete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerInformation_occupiedBodyPawn              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetLocalPlayerInformation_playerPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerInformation_playerController              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerInformation_playerUI                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetLocalPlayerInformation_qtnPlayerState                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLocalPlayerInformation_isHosting                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerInformation_outputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::Armory_Training_Save_Complete(class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Armory Training Save Complete");

	Params::UMenuEquipment_Widget_C_Armory_Training_Save_Complete_Params Parms{};

	Parms.CallFunc_GetLocalPlayerInformation_occupiedBodyPawn = CallFunc_GetLocalPlayerInformation_occupiedBodyPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerPawn = CallFunc_GetLocalPlayerInformation_playerPawn;
	Parms.CallFunc_GetLocalPlayerInformation_playerController = CallFunc_GetLocalPlayerInformation_playerController;
	Parms.CallFunc_GetLocalPlayerInformation_playerUI = CallFunc_GetLocalPlayerInformation_playerUI;
	Parms.CallFunc_GetLocalPlayerInformation_qtnPlayerState = CallFunc_GetLocalPlayerInformation_qtnPlayerState;
	Parms.CallFunc_GetLocalPlayerInformation_isHosting = CallFunc_GetLocalPlayerInformation_isHosting;
	Parms.CallFunc_GetLocalPlayerInformation_outputPin = CallFunc_GetLocalPlayerInformation_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.DEPRECATED Training Moment Powers Reorder List
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQtnItemData>        ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FQtnItemData>        ReorderedList                                                    (Parm, OutParm)
// TArray<struct FQtnItemData>        LOCAL_NewPowers                                                  (Edit, BlueprintVisible)
// TArray<struct FQtnItemData>        LOCAL_OldPowers                                                  (Edit, BlueprintVisible)
// TArray<struct FQtnItemData>        LOCAL_OriginalList                                               (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Should_PIEBypass_Tutorials___ShouldBypass               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetPowerHandleTableAndName_DataTable                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetPowerHandleTableAndName_RowName                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemStatSettings        CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UQtnVerb>        CallFunc_SyncLoadVerbClass_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnVerb*                    CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnVerbUI_Interface_C>K2Node_DynamicCast_AsQtn_Verb_UI_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVerbAPower_isPower                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnVerbUI_Interface_C>K2Node_DynamicCast_AsQtn_Verb_UI_Interface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUnlockData_Locked                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetUnlockData_LockText                                  (None)

void UMenuEquipment_Widget_C::DEPRECATED_Training_Moment_Powers_Reorder_List(TArray<struct FQtnItemData>& ItemData, TArray<struct FQtnItemData>* ReorderedList, const TArray<struct FQtnItemData>& LOCAL_NewPowers, const TArray<struct FQtnItemData>& LOCAL_OldPowers, const TArray<struct FQtnItemData>& LOCAL_OriginalList, int32 Temp_int_Array_Index_Variable, bool CallFunc_Should_PIEBypass_Tutorials___ShouldBypass, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* CallFunc_SyncLoadClass_ReturnValue, class UClass* CallFunc_SyncLoadClass_ReturnValue_1, const struct FQtnItemData& CallFunc_Array_Get_Item, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue_4, class UDataTable* CallFunc_GetPowerHandleTableAndName_DataTable, class FName CallFunc_GetPowerHandleTableAndName_RowName, int32 CallFunc_Array_Length_ReturnValue, const struct FQtnItemStatSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TSubclassOf<class UQtnVerb> CallFunc_SyncLoadVerbClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UQtnVerb* CallFunc_GetClassDefaultObject_ReturnValue, TScriptInterface<class IQtnVerbUI_Interface_C> K2Node_DynamicCast_AsQtn_Verb_UI_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVerbAPower_isPower, TScriptInterface<class IQtnVerbUI_Interface_C> K2Node_DynamicCast_AsQtn_Verb_UI_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetUnlockData_Locked, class FText CallFunc_GetUnlockData_LockText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "DEPRECATED Training Moment Powers Reorder List");

	Params::UMenuEquipment_Widget_C_DEPRECATED_Training_Moment_Powers_Reorder_List_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.LOCAL_NewPowers = LOCAL_NewPowers;
	Parms.LOCAL_OldPowers = LOCAL_OldPowers;
	Parms.LOCAL_OriginalList = LOCAL_OriginalList;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Should_PIEBypass_Tutorials___ShouldBypass = CallFunc_Should_PIEBypass_Tutorials___ShouldBypass;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SyncLoadClass_ReturnValue = CallFunc_SyncLoadClass_ReturnValue;
	Parms.CallFunc_SyncLoadClass_ReturnValue_1 = CallFunc_SyncLoadClass_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue_3 = CallFunc_Array_AddUnique_ReturnValue_3;
	Parms.CallFunc_Array_AddUnique_ReturnValue_4 = CallFunc_Array_AddUnique_ReturnValue_4;
	Parms.CallFunc_GetPowerHandleTableAndName_DataTable = CallFunc_GetPowerHandleTableAndName_DataTable;
	Parms.CallFunc_GetPowerHandleTableAndName_RowName = CallFunc_GetPowerHandleTableAndName_RowName;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SyncLoadVerbClass_ReturnValue = CallFunc_SyncLoadVerbClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Verb_UI_Interface = K2Node_DynamicCast_AsQtn_Verb_UI_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsVerbAPower_isPower = CallFunc_IsVerbAPower_isPower;
	Parms.K2Node_DynamicCast_AsQtn_Verb_UI_Interface_1 = K2Node_DynamicCast_AsQtn_Verb_UI_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUnlockData_Locked = CallFunc_GetUnlockData_Locked;
	Parms.CallFunc_GetUnlockData_LockText = CallFunc_GetUnlockData_LockText;

	UObject::ProcessEvent(Func, &Parms);

	if (ReorderedList != nullptr)
		*ReorderedList = std::move(Parms.ReorderedList);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.TrainingMoment_Powers_ConfirmUnlockedPowersOnExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_TrainingMoment_Powers_DoesPlayerHaveUnlockedPower_Has_Unlocked_Power(ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::TrainingMoment_Powers_ConfirmUnlockedPowersOnExit(bool CallFunc_TrainingMoment_Powers_DoesPlayerHaveUnlockedPower_Has_Unlocked_Power)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "TrainingMoment_Powers_ConfirmUnlockedPowersOnExit");

	Params::UMenuEquipment_Widget_C_TrainingMoment_Powers_ConfirmUnlockedPowersOnExit_Params Parms{};

	Parms.CallFunc_TrainingMoment_Powers_DoesPlayerHaveUnlockedPower_Has_Unlocked_Power = CallFunc_TrainingMoment_Powers_DoesPlayerHaveUnlockedPower_Has_Unlocked_Power;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.GetVerbClass
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmoryItem_Widget_C*        GearWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      VerbClass                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// struct FQtnItemStatSettings        CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnVerb>        CallFunc_SyncLoadVerbClass_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::GetVerbClass(class UArmoryItem_Widget_C* GearWidget, class UClass** VerbClass, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FQtnItemStatSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TSubclassOf<class UQtnVerb> CallFunc_SyncLoadVerbClass_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "GetVerbClass");

	Params::UMenuEquipment_Widget_C_GetVerbClass_Params Parms{};

	Parms.GearWidget = GearWidget;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_SyncLoadVerbClass_ReturnValue = CallFunc_SyncLoadVerbClass_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (VerbClass != nullptr)
		*VerbClass = Parms.VerbClass;

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.GetPowerHandleTableAndName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FQtnItemData                QtnItemData                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDataTable*                  DataTable                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RowName                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::GetPowerHandleTableAndName(const struct FQtnItemData& QtnItemData, class UDataTable** DataTable, class FName* RowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "GetPowerHandleTableAndName");

	Params::UMenuEquipment_Widget_C_GetPowerHandleTableAndName_Params Parms{};

	Parms.QtnItemData = QtnItemData;

	UObject::ProcessEvent(Func, &Parms);

	if (DataTable != nullptr)
		*DataTable = Parms.DataTable;

	if (RowName != nullptr)
		*RowName = Parms.RowName;

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.OnDebugDisplay
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "OnDebugDisplay");

	Params::UMenuEquipment_Widget_C_OnDebugDisplay_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue_1 = CallFunc_Conv_BoolToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Training Moment Armory Unhide Powers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::Training_Moment_Armory_Unhide_Powers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Training Moment Armory Unhide Powers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.TrainingMoment_Powers_DoesPlayerHaveUnlockedPower
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Has_Unlocked_Power                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                CallFunc_GetPower2ItemData_ReturnValue                           (ConstParm)
// struct FQtnItemData                CallFunc_GetPower1ItemData_ReturnValue                           (ConstParm)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::TrainingMoment_Powers_DoesPlayerHaveUnlockedPower(bool* Has_Unlocked_Power, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, const struct FQtnItemData& CallFunc_GetPower2ItemData_ReturnValue, const struct FQtnItemData& CallFunc_GetPower1ItemData_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "TrainingMoment_Powers_DoesPlayerHaveUnlockedPower");

	Params::UMenuEquipment_Widget_C_TrainingMoment_Powers_DoesPlayerHaveUnlockedPower_Params Parms{};

	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.CallFunc_GetPower2ItemData_ReturnValue = CallFunc_GetPower2ItemData_ReturnValue;
	Parms.CallFunc_GetPower1ItemData_ReturnValue = CallFunc_GetPower1ItemData_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_3 = CallFunc_EqualEqual_NameName_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Has_Unlocked_Power != nullptr)
		*Has_Unlocked_Power = Parms.Has_Unlocked_Power;

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Training Moment Powers Save Training Complete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningPlayerInfo_occupiedBodyPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetOwningPlayerInfo_playerPawn                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetOwningPlayerInfo_playerController                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerInfo_playerUI                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetOwningPlayerInfo_qtnPlayerState                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetOwningPlayerInfo_isHosting                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTutorialBoolValue_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::Training_Moment_Powers_Save_Training_Complete(class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningPlayerInfo_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetOwningPlayerInfo_playerPawn, class AQtnPlayerController* CallFunc_GetOwningPlayerInfo_playerController, class AQtnPlayerUI* CallFunc_GetOwningPlayerInfo_playerUI, class AQtnPlayerState* CallFunc_GetOwningPlayerInfo_qtnPlayerState, bool CallFunc_GetOwningPlayerInfo_isHosting, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_GetTutorialBoolValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Training Moment Powers Save Training Complete");

	Params::UMenuEquipment_Widget_C_Training_Moment_Powers_Save_Training_Complete_Params Parms{};

	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_GetOwningPlayerInfo_occupiedBodyPawn = CallFunc_GetOwningPlayerInfo_occupiedBodyPawn;
	Parms.CallFunc_GetOwningPlayerInfo_playerPawn = CallFunc_GetOwningPlayerInfo_playerPawn;
	Parms.CallFunc_GetOwningPlayerInfo_playerController = CallFunc_GetOwningPlayerInfo_playerController;
	Parms.CallFunc_GetOwningPlayerInfo_playerUI = CallFunc_GetOwningPlayerInfo_playerUI;
	Parms.CallFunc_GetOwningPlayerInfo_qtnPlayerState = CallFunc_GetOwningPlayerInfo_qtnPlayerState;
	Parms.CallFunc_GetOwningPlayerInfo_isHosting = CallFunc_GetOwningPlayerInfo_isHosting;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetTutorialBoolValue_ReturnValue = CallFunc_GetTutorialBoolValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Training Moment Powers Toggle Highlight New Powers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Want_Highlight                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArmoryItem_Widget_C*        NewLocalVar_2                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArmoryItem_Widget_C*        LOCAL_CurrentGearWidget                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCardArmory_Widget_C*        LOCAL_CurrentArmoryCardWidget                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeaponPowerCard_Widget_C*   LOCAL_CurrentCardWidget                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                LOCAL_PowerToCheck                                               (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArmoryItem_Widget_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnVerb>        CallFunc_GetPowerVerbClass_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnVerb*                    CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnVerbUI_Interface_C>K2Node_DynamicCast_AsQtn_Verb_UI_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUnlockData_Locked                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetUnlockData_LockText                                  (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::Training_Moment_Powers_Toggle_Highlight_New_Powers(bool Want_Highlight, class UArmoryItem_Widget_C* NewLocalVar_2, class UArmoryItem_Widget_C* LOCAL_CurrentGearWidget, class UCardArmory_Widget_C* LOCAL_CurrentArmoryCardWidget, class UWeaponPowerCard_Widget_C* LOCAL_CurrentCardWidget, const struct FQtnItemData& LOCAL_PowerToCheck, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class UArmoryItem_Widget_C* CallFunc_Array_Get_Item, TSubclassOf<class UQtnVerb> CallFunc_GetPowerVerbClass_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UQtnVerb* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TScriptInterface<class IQtnVerbUI_Interface_C> K2Node_DynamicCast_AsQtn_Verb_UI_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, class UClass* CallFunc_SyncLoadClass_ReturnValue, class UClass* CallFunc_SyncLoadClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_GetUnlockData_Locked, class FText CallFunc_GetUnlockData_LockText, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Training Moment Powers Toggle Highlight New Powers");

	Params::UMenuEquipment_Widget_C_Training_Moment_Powers_Toggle_Highlight_New_Powers_Params Parms{};

	Parms.Want_Highlight = Want_Highlight;
	Parms.NewLocalVar_2 = NewLocalVar_2;
	Parms.LOCAL_CurrentGearWidget = LOCAL_CurrentGearWidget;
	Parms.LOCAL_CurrentArmoryCardWidget = LOCAL_CurrentArmoryCardWidget;
	Parms.LOCAL_CurrentCardWidget = LOCAL_CurrentCardWidget;
	Parms.LOCAL_PowerToCheck = LOCAL_PowerToCheck;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetPowerVerbClass_ReturnValue = CallFunc_GetPowerVerbClass_ReturnValue;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Verb_UI_Interface = K2Node_DynamicCast_AsQtn_Verb_UI_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_SyncLoadClass_ReturnValue = CallFunc_SyncLoadClass_ReturnValue;
	Parms.CallFunc_SyncLoadClass_ReturnValue_1 = CallFunc_SyncLoadClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetUnlockData_Locked = CallFunc_GetUnlockData_Locked;
	Parms.CallFunc_GetUnlockData_LockText = CallFunc_GetUnlockData_LockText;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.TrainingMoment_Powers_ToggleHighlightPowerTabs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Want_Highlight                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::TrainingMoment_Powers_ToggleHighlightPowerTabs(bool Want_Highlight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "TrainingMoment_Powers_ToggleHighlightPowerTabs");

	Params::UMenuEquipment_Widget_C_TrainingMoment_Powers_ToggleHighlightPowerTabs_Params Parms{};

	Parms.Want_Highlight = Want_Highlight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.TrainingMoment_Powers_PlayEntryVO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::TrainingMoment_Powers_PlayEntryVO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "TrainingMoment_Powers_PlayEntryVO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.CheckForPowersTrainingMoment
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATrainingMoment_Powers_C*    PowersTrainingMoment                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TrainingMoment_Powers_DoesPlayerHaveUnlockedPower_Has_Unlocked_Power(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TrainingMoment_Powers_DoesPlayerHaveUnlockedPower_Has_Unlocked_Power_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LOCAL_DoesPlayerNeedPowersTraining_NeedsTraining        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::CheckForPowersTrainingMoment(class ATrainingMoment_Powers_C** PowersTrainingMoment, bool CallFunc_TrainingMoment_Powers_DoesPlayerHaveUnlockedPower_Has_Unlocked_Power, bool CallFunc_TrainingMoment_Powers_DoesPlayerHaveUnlockedPower_Has_Unlocked_Power_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LOCAL_DoesPlayerNeedPowersTraining_NeedsTraining)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "CheckForPowersTrainingMoment");

	Params::UMenuEquipment_Widget_C_CheckForPowersTrainingMoment_Params Parms{};

	Parms.CallFunc_TrainingMoment_Powers_DoesPlayerHaveUnlockedPower_Has_Unlocked_Power = CallFunc_TrainingMoment_Powers_DoesPlayerHaveUnlockedPower_Has_Unlocked_Power;
	Parms.CallFunc_TrainingMoment_Powers_DoesPlayerHaveUnlockedPower_Has_Unlocked_Power_1 = CallFunc_TrainingMoment_Powers_DoesPlayerHaveUnlockedPower_Has_Unlocked_Power_1;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LOCAL_DoesPlayerNeedPowersTraining_NeedsTraining = CallFunc_LOCAL_DoesPlayerNeedPowersTraining_NeedsTraining;

	UObject::ProcessEvent(Func, &Parms);

	if (PowersTrainingMoment != nullptr)
		*PowersTrainingMoment = Parms.PowersTrainingMoment;

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Toggle Ranged Weapons Tab Highlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Want_Highlight                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::Toggle_Ranged_Weapons_Tab_Highlight(bool Want_Highlight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Toggle Ranged Weapons Tab Highlight");

	Params::UMenuEquipment_Widget_C_Toggle_Ranged_Weapons_Tab_Highlight_Params Parms{};

	Parms.Want_Highlight = Want_Highlight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Dispatch Armory VOEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              IdleCounter                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)

void UMenuEquipment_Widget_C::Dispatch_Armory_VOEvent(const struct FGameplayTag& EventType, int32 IdleCounter, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool CallFunc_MakeLiteralBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Dispatch Armory VOEvent");

	Params::UMenuEquipment_Widget_C_Dispatch_Armory_VOEvent_Params Parms{};

	Parms.EventType = EventType;
	Parms.IdleCounter = IdleCounter;
	Parms.CallFunc_GetTutorialState_ReturnValue = CallFunc_GetTutorialState_ReturnValue;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.handleTutorialStaffGrant
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnItemData                Item_data                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               HaltStaff                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Found_Staff                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Should_PIEBypass_Tutorials___ShouldBypass               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StaffUnlocked__staff_unlocked                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::HandleTutorialStaffGrant(const struct FQtnItemData& Item_data, bool* HaltStaff, bool* Found_Staff, bool CallFunc_Should_PIEBypass_Tutorials___ShouldBypass, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_StaffUnlocked__staff_unlocked, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "handleTutorialStaffGrant");

	Params::UMenuEquipment_Widget_C_HandleTutorialStaffGrant_Params Parms{};

	Parms.Item_data = Item_data;
	Parms.CallFunc_Should_PIEBypass_Tutorials___ShouldBypass = CallFunc_Should_PIEBypass_Tutorials___ShouldBypass;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_StaffUnlocked__staff_unlocked = CallFunc_StaffUnlocked__staff_unlocked;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HaltStaff != nullptr)
		*HaltStaff = Parms.HaltStaff;

	if (Found_Staff != nullptr)
		*Found_Staff = Parms.Found_Staff;

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.StaffUnlocked?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Staff_unlocked                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::StaffUnlocked_(bool* Staff_unlocked, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "StaffUnlocked?");

	Params::UMenuEquipment_Widget_C_StaffUnlocked__Params Parms{};

	Parms.CallFunc_GetTutorialState_ReturnValue = CallFunc_GetTutorialState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Staff_unlocked != nullptr)
		*Staff_unlocked = Parms.Staff_unlocked;

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Armory Training Check And Play Training Moment VO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTutorialBoolValue_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::Armory_Training_Check_And_Play_Training_Moment_VO(class FName CallFunc_MakeLiteralName_ReturnValue, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool CallFunc_GetTutorialBoolValue_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Armory Training Check And Play Training Moment VO");

	Params::UMenuEquipment_Widget_C_Armory_Training_Check_And_Play_Training_Moment_VO_Params Parms{};

	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetTutorialState_ReturnValue = CallFunc_GetTutorialState_ReturnValue;
	Parms.CallFunc_GetTutorialBoolValue_ReturnValue = CallFunc_GetTutorialBoolValue_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Armory Training Check And Update If Player Trained
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Menu_unlocked                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bypassThisTraining                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTutorialBoolValue_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::Armory_Training_Check_And_Update_If_Player_Trained(bool* Menu_unlocked, bool* bypassThisTraining, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_GetTutorialBoolValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Armory Training Check And Update If Player Trained");

	Params::UMenuEquipment_Widget_C_Armory_Training_Check_And_Update_If_Player_Trained_Params Parms{};

	Parms.CallFunc_GetTutorialState_ReturnValue = CallFunc_GetTutorialState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetTutorialBoolValue_ReturnValue = CallFunc_GetTutorialBoolValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Menu_unlocked != nullptr)
		*Menu_unlocked = Parms.Menu_unlocked;

	if (bypassThisTraining != nullptr)
		*bypassThisTraining = Parms.bypassThisTraining;

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Update Global Nav Affordance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseAndKeyboard                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HoverFound                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UBP_LootIcon_C*>      CategoryButtons                                                  (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               IsUsingMouseKeyboard                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetButtonGlyphFromBodyAction_ReturnValue                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FString                      CallFunc_GetButtonGlyphFromBodyAction_ReturnValue_1              (ZeroConstructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TScriptInterface<class IGlobalNavAffordance_Interface_C>CallFunc_UpdateGlobalNavAffordances_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::Update_Global_Nav_Affordance(bool IsUsingMouseAndKeyboard, bool HoverFound, const TArray<class UBP_LootIcon_C*>& CategoryButtons, bool IsUsingMouseKeyboard, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetButtonGlyphFromBodyAction_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_GetButtonGlyphFromBodyAction_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_IsValid_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, TScriptInterface<class IGlobalNavAffordance_Interface_C> CallFunc_UpdateGlobalNavAffordances_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Update Global Nav Affordance");

	Params::UMenuEquipment_Widget_C_Update_Global_Nav_Affordance_Params Parms{};

	Parms.IsUsingMouseAndKeyboard = IsUsingMouseAndKeyboard;
	Parms.HoverFound = HoverFound;
	Parms.CategoryButtons = CategoryButtons;
	Parms.IsUsingMouseKeyboard = IsUsingMouseKeyboard;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetButtonGlyphFromBodyAction_ReturnValue = CallFunc_GetButtonGlyphFromBodyAction_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetButtonGlyphFromBodyAction_ReturnValue_1 = CallFunc_GetButtonGlyphFromBodyAction_ReturnValue_1;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_UpdateGlobalNavAffordances_self_CastInput = CallFunc_UpdateGlobalNavAffordances_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.DisplayCategoryName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUI_ArmoryCategory_Enum ArmoryCategory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUI_ArmoryCategory_Enum Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        K2Node_Select_Default                                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UMenuEquipment_Widget_C::DisplayCategoryName(enum class EUI_ArmoryCategory_Enum ArmoryCategory, enum class EUI_ArmoryCategory_Enum Temp_byte_Variable, class FText Temp_text_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "DisplayCategoryName");

	Params::UMenuEquipment_Widget_C_DisplayCategoryName_Params Parms{};

	Parms.ArmoryCategory = ArmoryCategory;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Swap Power Slots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnItemData                NewLocalVar_1                                                    (Edit, BlueprintVisible)
// struct FQtnItemData                LOCAL_CurrentPower                                               (Edit, BlueprintVisible)
// struct FQtnItemData                LOCAL_OtherPower                                                 (Edit, BlueprintVisible)
// struct FQtnItemData                NewPower2                                                        (Edit, BlueprintVisible)
// struct FQtnItemData                NewPower1                                                        (Edit, BlueprintVisible)
// struct FQtnItemData                LOCAL_IncomingPower                                              (Edit, BlueprintVisible)
// struct FQtnItemData                LOCAL_CurrentPower2Data                                          (Edit, BlueprintVisible)
// struct FQtnItemData                LOCAL_CurrentPower1Data                                          (Edit, BlueprintVisible)
// class AQtnPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnLocalOptionsSaveData*    CallFunc_GetSaveLoadDataBP_localOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCloudOptionsSaveData*    CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnProgressSaveData*        CallFunc_GetSaveLoadDataBP_progressSaveData                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetSaveLoadDataBP_outputPin                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnBodyDataBag*             CallFunc_GetBodyDataBag_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBodyDataBag_C*              K2Node_DynamicCast_AsBody_Data_Bag                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                CallFunc_GetPower1ItemData_ReturnValue                           (ConstParm)
// struct FQtnItemData                CallFunc_GetPower2ItemData_ReturnValue                           (ConstParm)

void UMenuEquipment_Widget_C::Swap_Power_Slots(const struct FQtnItemData& NewLocalVar_1, const struct FQtnItemData& LOCAL_CurrentPower, const struct FQtnItemData& LOCAL_OtherPower, const struct FQtnItemData& NewPower2, const struct FQtnItemData& NewPower1, const struct FQtnItemData& LOCAL_IncomingPower, const struct FQtnItemData& LOCAL_CurrentPower2Data, const struct FQtnItemData& LOCAL_CurrentPower1Data, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UQtnBodyDataBag* CallFunc_GetBodyDataBag_ReturnValue, class UBodyDataBag_C* K2Node_DynamicCast_AsBody_Data_Bag, bool K2Node_DynamicCast_bSuccess, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue_1, const struct FQtnItemData& CallFunc_GetPower1ItemData_ReturnValue, const struct FQtnItemData& CallFunc_GetPower2ItemData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Swap Power Slots");

	Params::UMenuEquipment_Widget_C_Swap_Power_Slots_Params Parms{};

	Parms.NewLocalVar_1 = NewLocalVar_1;
	Parms.LOCAL_CurrentPower = LOCAL_CurrentPower;
	Parms.LOCAL_OtherPower = LOCAL_OtherPower;
	Parms.NewPower2 = NewPower2;
	Parms.NewPower1 = NewPower1;
	Parms.LOCAL_IncomingPower = LOCAL_IncomingPower;
	Parms.LOCAL_CurrentPower2Data = LOCAL_CurrentPower2Data;
	Parms.LOCAL_CurrentPower1Data = LOCAL_CurrentPower1Data;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.CallFunc_GetSaveLoadDataBP_localOptionsSaveData = CallFunc_GetSaveLoadDataBP_localOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData = CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_progressSaveData = CallFunc_GetSaveLoadDataBP_progressSaveData;
	Parms.CallFunc_GetSaveLoadDataBP_outputPin = CallFunc_GetSaveLoadDataBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetBodyDataBag_ReturnValue = CallFunc_GetBodyDataBag_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Data_Bag = K2Node_DynamicCast_AsBody_Data_Bag;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBodyInventory_ReturnValue_1 = CallFunc_GetBodyInventory_ReturnValue_1;
	Parms.CallFunc_GetPower1ItemData_ReturnValue = CallFunc_GetPower1ItemData_ReturnValue;
	Parms.CallFunc_GetPower2ItemData_ReturnValue = CallFunc_GetPower2ItemData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.UpdateShownActors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              ActorsToShow                                                     (Edit, BlueprintVisible, DisableEditOnTemplate)

void UMenuEquipment_Widget_C::UpdateShownActors(const TArray<class AActor*>& ActorsToShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "UpdateShownActors");

	Params::UMenuEquipment_Widget_C_UpdateShownActors_Params Parms{};

	Parms.ActorsToShow = ActorsToShow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.SetupCameraTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneCaptureComponent2D*    NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::SetupCameraTarget(class USceneCaptureComponent2D* NewLocalVar_0)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "SetupCameraTarget");

	Params::UMenuEquipment_Widget_C_SetupCameraTarget_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.GetItemDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LootIcon_C*              LootObject                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::GetItemDetail(class UBP_LootIcon_C* LootObject, int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "GetItemDetail");

	Params::UMenuEquipment_Widget_C_GetItemDetail_Params Parms{};

	Parms.LootObject = LootObject;
	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.ToggleModal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantShown                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::ToggleModal(bool WantShown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "ToggleModal");

	Params::UMenuEquipment_Widget_C_ToggleModal_Params Parms{};

	Parms.WantShown = WantShown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Modal_RefreshEquippedPowerCard
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ArmoryCardTooltip_Widget_C*CardToRefresh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                QtnItemData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMenuEquipment_Widget_C::Modal_RefreshEquippedPowerCard(class UUI_ArmoryCardTooltip_Widget_C* CardToRefresh, struct FQtnItemData& QtnItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Modal_RefreshEquippedPowerCard");

	Params::UMenuEquipment_Widget_C_Modal_RefreshEquippedPowerCard_Params Parms{};

	Parms.CardToRefresh = CardToRefresh;
	Parms.QtnItemData = QtnItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.bindModalEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::bindModalEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "bindModalEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.ModalCardPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtn_EquipmentCategory  CategoryToSwap                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::ModalCardPressed(bool Pressed_, enum class EQtn_EquipmentCategory CategoryToSwap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "ModalCardPressed");

	Params::UMenuEquipment_Widget_C_ModalCardPressed_Params Parms{};

	Parms.Pressed_ = Pressed_;
	Parms.CategoryToSwap = CategoryToSwap;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Modal_RefreshSelectedVariable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmoryItem_Widget_C*        SelectedGearWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::Modal_RefreshSelectedVariable(class UArmoryItem_Widget_C* SelectedGearWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Modal_RefreshSelectedVariable");

	Params::UMenuEquipment_Widget_C_Modal_RefreshSelectedVariable_Params Parms{};

	Parms.SelectedGearWidget = SelectedGearWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Modal_CheckNeeded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmoryItem_Widget_C*        SelectedGear                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WasAlreadyEquipped_                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::Modal_CheckNeeded(class UArmoryItem_Widget_C* SelectedGear, bool WasAlreadyEquipped_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Modal_CheckNeeded");

	Params::UMenuEquipment_Widget_C_Modal_CheckNeeded_Params Parms{};

	Parms.SelectedGear = SelectedGear;
	Parms.WasAlreadyEquipped_ = WasAlreadyEquipped_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Modal_CardFocused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtn_EquipmentCategory  MySlot                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::Modal_CardFocused(bool Hovered_, enum class EQtn_EquipmentCategory MySlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Modal_CardFocused");

	Params::UMenuEquipment_Widget_C_Modal_CardFocused_Params Parms{};

	Parms.Hovered_ = Hovered_;
	Parms.MySlot = MySlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.RefreshModalDefaults
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::RefreshModalDefaults()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "RefreshModalDefaults");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.OnUIBodyActionPressed
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIBodyActionEnum    BodyAction                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::OnUIBodyActionPressed(enum class EQtnUIBodyActionEnum BodyAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "OnUIBodyActionPressed");

	Params::UMenuEquipment_Widget_C_OnUIBodyActionPressed_Params Parms{};

	Parms.BodyAction = BodyAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.IntroRepeater
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::IntroRepeater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "IntroRepeater");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.AnimSeq_ToggleMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantShown                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::AnimSeq_ToggleMenu(bool WantShown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "AnimSeq_ToggleMenu");

	Params::UMenuEquipment_Widget_C_AnimSeq_ToggleMenu_Params Parms{};

	Parms.WantShown = WantShown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.AnimSeq_ToggleChangeGear
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantShown                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::AnimSeq_ToggleChangeGear(bool WantShown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "AnimSeq_ToggleChangeGear");

	Params::UMenuEquipment_Widget_C_AnimSeq_ToggleChangeGear_Params Parms{};

	Parms.WantShown = WantShown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.SequenceEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::SequenceEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "SequenceEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.OnQtnWidgetResumed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UQtnScreen*                  PreviousScreen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::OnQtnWidgetResumed(class UQtnScreen* PreviousScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "OnQtnWidgetResumed");

	Params::UMenuEquipment_Widget_C_OnQtnWidgetResumed_Params Parms{};

	Parms.PreviousScreen = PreviousScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.InputChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseAndKeyboard                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::InputChanged(bool IsUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "InputChanged");

	Params::UMenuEquipment_Widget_C_InputChanged_Params Parms{};

	Parms.IsUsingMouseAndKeyboard = IsUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.OnQtnWidgetPaused
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::OnQtnWidgetPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "OnQtnWidgetPaused");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Event_CloseMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::Event_CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Event_CloseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.OnUIScreenActionPressed
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIScreenActionEnum  ScreenAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "OnUIScreenActionPressed");

	Params::UMenuEquipment_Widget_C_OnUIScreenActionPressed_Params Parms{};

	Parms.ScreenAction = ScreenAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.OnUIScroll
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              ScrollDelta                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromStick                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::OnUIScroll(float ScrollDelta, bool FromStick)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "OnUIScroll");

	Params::UMenuEquipment_Widget_C_OnUIScroll_Params Parms{};

	Parms.ScrollDelta = ScrollDelta;
	Parms.FromStick = FromStick;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.RequestAffordance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::RequestAffordance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "RequestAffordance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.OnQtnWidgetInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::OnQtnWidgetInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "OnQtnWidgetInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "PreConstruct");

	Params::UMenuEquipment_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.RefreshGearAffordance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CardHovered                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArmoryItem_Widget_C*        FocusedGear                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::RefreshGearAffordance(bool CardHovered, class UArmoryItem_Widget_C* FocusedGear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "RefreshGearAffordance");

	Params::UMenuEquipment_Widget_C_RefreshGearAffordance_Params Parms{};

	Parms.CardHovered = CardHovered;
	Parms.FocusedGear = FocusedGear;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.CategoryLootButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LootIcon_C*              HoveredButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtn_EquipmentCategory  Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CategoryHovered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::CategoryLootButtonHovered(class UBP_LootIcon_C* HoveredButton, enum class EQtn_EquipmentCategory Category, bool CategoryHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "CategoryLootButtonHovered");

	Params::UMenuEquipment_Widget_C_CategoryLootButtonHovered_Params Parms{};

	Parms.HoveredButton = HoveredButton;
	Parms.Category = Category;
	Parms.CategoryHovered = CategoryHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.OnIdleTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::OnIdleTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "OnIdleTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.ResetIdleTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::ResetIdleTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "ResetIdleTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.FTUX_DelayAndMakeStaff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::FTUX_DelayAndMakeStaff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "FTUX_DelayAndMakeStaff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.FTUXStaffEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::FTUXStaffEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "FTUXStaffEquipped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.OnQtnWidgetStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::OnQtnWidgetStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "OnQtnWidgetStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.OnQtnWidgetStopped
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::OnQtnWidgetStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "OnQtnWidgetStopped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.ArmoryRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::ArmoryRemoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "ArmoryRemoved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.VO_EnterRangedWeaponTab
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::VO_EnterRangedWeaponTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "VO_EnterRangedWeaponTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.VO_TrainingMoment_PowersEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::VO_TrainingMoment_PowersEntry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "VO_TrainingMoment_PowersEntry");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.VO_TrainingMoment_PowerTabEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::VO_TrainingMoment_PowerTabEntry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "VO_TrainingMoment_PowerTabEntry");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.VO_PowersTrainingMoment_OnPowerSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::VO_PowersTrainingMoment_OnPowerSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "VO_PowersTrainingMoment_OnPowerSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.FTUXNewPowerEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::FTUXNewPowerEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "FTUXNewPowerEquipped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.HandleLootHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LootIcon_C*              ThisIcon                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Hovering                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::HandleLootHover(class UBP_LootIcon_C* ThisIcon, bool Hovering)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "HandleLootHover");

	Params::UMenuEquipment_Widget_C_HandleLootHover_Params Parms{};

	Parms.ThisIcon = ThisIcon;
	Parms.Hovering = Hovering;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.HandleLootSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LootIcon_C*              ThisIcon                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::HandleLootSelect(class UBP_LootIcon_C* ThisIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "HandleLootSelect");

	Params::UMenuEquipment_Widget_C_HandleLootSelect_Params Parms{};

	Parms.ThisIcon = ThisIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.UpdateGlobalNavAffordances
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, class FText>   Affordances                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass*                      MyClass                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::UpdateGlobalNavAffordances(TMap<class FString, class FText> Affordances, class UClass* MyClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "UpdateGlobalNavAffordances");

	Params::UMenuEquipment_Widget_C_UpdateGlobalNavAffordances_Params Parms{};

	Parms.Affordances = Affordances;
	Parms.MyClass = MyClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.FTUX_Armory_BindWeaponCardClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Found_Staff                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArmoryItem_Widget_C*        StaffWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::FTUX_Armory_BindWeaponCardClick(bool Found_Staff, class UArmoryItem_Widget_C* StaffWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "FTUX_Armory_BindWeaponCardClick");

	Params::UMenuEquipment_Widget_C_FTUX_Armory_BindWeaponCardClick_Params Parms{};

	Parms.Found_Staff = Found_Staff;
	Parms.StaffWidget = StaffWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.FTUX_Powers_BindCardClickEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmoryItem_Widget_C*        PowerWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::FTUX_Powers_BindCardClickEvents(class UArmoryItem_Widget_C* PowerWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "FTUX_Powers_BindCardClickEvents");

	Params::UMenuEquipment_Widget_C_FTUX_Powers_BindCardClickEvents_Params Parms{};

	Parms.PowerWidget = PowerWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.bindCardClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWeaponPowerCard_Widget_C*   WeaponCard                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::bindCardClicked(class UWeaponPowerCard_Widget_C* WeaponCard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "bindCardClicked");

	Params::UMenuEquipment_Widget_C_bindCardClicked_Params Parms{};

	Parms.WeaponCard = WeaponCard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.TrackWeaponSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::TrackWeaponSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "TrackWeaponSelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.OnQtnWidgetShown
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::OnQtnWidgetShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "OnQtnWidgetShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.PowersFTUX_CheckForPreternaturalSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::PowersFTUX_CheckForPreternaturalSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "PowersFTUX_CheckForPreternaturalSelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.bindPowerCardClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCardArmory_Widget_C*        PowerCard                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::bindPowerCardClicked(class UCardArmory_Widget_C* PowerCard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "bindPowerCardClicked");

	Params::UMenuEquipment_Widget_C_bindPowerCardClicked_Params Parms{};

	Parms.PowerCard = PowerCard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.TrackPowerSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::TrackPowerSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "TrackPowerSelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.EquipSelectedGear
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmoryItem_Widget_C*        SelectedGear                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WasAlreadyEquipped                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::EquipSelectedGear(class UArmoryItem_Widget_C* SelectedGear, bool WasAlreadyEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "EquipSelectedGear");

	Params::UMenuEquipment_Widget_C_EquipSelectedGear_Params Parms{};

	Parms.SelectedGear = SelectedGear;
	Parms.WasAlreadyEquipped = WasAlreadyEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.GearFocused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmoryItem_Widget_C*        FocusedGear                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::GearFocused(class UArmoryItem_Widget_C* FocusedGear, bool IsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "GearFocused");

	Params::UMenuEquipment_Widget_C_GearFocused_Params Parms{};

	Parms.FocusedGear = FocusedGear;
	Parms.IsHovered = IsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.FTUX_StaffSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmoryItem_Widget_C*        SelectedGear                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WasAlreadyEquipped                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::FTUX_StaffSelected(class UArmoryItem_Widget_C* SelectedGear, bool WasAlreadyEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "FTUX_StaffSelected");

	Params::UMenuEquipment_Widget_C_FTUX_StaffSelected_Params Parms{};

	Parms.SelectedGear = SelectedGear;
	Parms.WasAlreadyEquipped = WasAlreadyEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.FTUX_PowerSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmoryItem_Widget_C*        SelectedGear                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WasAlreadyEquipped                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::FTUX_PowerSelected(class UArmoryItem_Widget_C* SelectedGear, bool WasAlreadyEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "FTUX_PowerSelected");

	Params::UMenuEquipment_Widget_C_FTUX_PowerSelected_Params Parms{};

	Parms.SelectedGear = SelectedGear;
	Parms.WasAlreadyEquipped = WasAlreadyEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.CategoryButton_Focused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmory_CategoryButton_Widget_C*HoveredButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::CategoryButton_Focused(class UArmory_CategoryButton_Widget_C* HoveredButton, bool IsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "CategoryButton_Focused");

	Params::UMenuEquipment_Widget_C_CategoryButton_Focused_Params Parms{};

	Parms.HoveredButton = HoveredButton;
	Parms.IsHovered = IsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.CategoryButton_Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmory_CategoryButton_Widget_C*SelectedWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::CategoryButton_Selected(class UArmory_CategoryButton_Widget_C* SelectedWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "CategoryButton_Selected");

	Params::UMenuEquipment_Widget_C_CategoryButton_Selected_Params Parms{};

	Parms.SelectedWidget = SelectedWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.RefreshTooltipCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmoryItem_Widget_C*        FocusedGearItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::RefreshTooltipCard(class UArmoryItem_Widget_C* FocusedGearItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "RefreshTooltipCard");

	Params::UMenuEquipment_Widget_C_RefreshTooltipCard_Params Parms{};

	Parms.FocusedGearItem = FocusedGearItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.OnPowersChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::OnPowersChangedEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "OnPowersChangedEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.OnQtnWidgetOccupied
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FirstTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::OnQtnWidgetOccupied(class AQtnBodyPawn* OccupiedBodyPawn, bool FirstTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "OnQtnWidgetOccupied");

	Params::UMenuEquipment_Widget_C_OnQtnWidgetOccupied_Params Parms{};

	Parms.OccupiedBodyPawn = OccupiedBodyPawn;
	Parms.FirstTime = FirstTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.OnMeleeChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnItem*                    Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::OnMeleeChangedEvent(class AQtnItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "OnMeleeChangedEvent");

	Params::UMenuEquipment_Widget_C_OnMeleeChangedEvent_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.OnRangedChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnItem*                    Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::OnRangedChangedEvent(class AQtnItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "OnRangedChangedEvent");

	Params::UMenuEquipment_Widget_C_OnRangedChangedEvent_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.OnQtnWidgetHidden
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMenuEquipment_Widget_C::OnQtnWidgetHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "OnQtnWidgetHidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.OnGearRightClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmoryItem_Widget_C*        SelectedGear                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuEquipment_Widget_C::OnGearRightClick(class UArmoryItem_Widget_C* SelectedGear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "OnGearRightClick");

	Params::UMenuEquipment_Widget_C_OnGearRightClick_Params Parms{};

	Parms.SelectedGear = SelectedGear;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuEquipment_Widget.MenuEquipment_Widget_C.ExecuteUbergraph_MenuEquipment_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUI_ArmoryCategory_Enum Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_FTUX_Archetype_Widget_C* CallFunc_GetUserWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_LootIcon_C*              K2Node_Event_LootObject                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_itemIndex                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_WantShown_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_2                                             (None)
// class UAffordance_Widget_C*        Temp_object_Variable_2                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class UUI_ArmoryCardTooltip_Widget_C*K2Node_CustomEvent_CardToRefresh                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                K2Node_CustomEvent_QtnItemData                                   (ConstParm)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnItemStatSettings        CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UQtnVerb>        CallFunc_SyncLoadVerbClass_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnVerb*                    CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb_Archetype_C*        K2Node_DynamicCast_AsQtn_Verb_Archetype                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetIconForUI_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1          (UObjectWrapper, HasGetValueTypeHash)
// struct FUI_Card_Struct             K2Node_MakeStruct_UI_Card_Struct                                 (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Pressed_                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtn_EquipmentCategory  K2Node_CustomEvent_CategoryToSwap                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArmoryItem_Widget_C*        K2Node_CustomEvent_SelectedGearWidget                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArmoryItem_Widget_C*        K2Node_CustomEvent_SelectedGear_4                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_WasAlreadyEquipped_                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Check_if_Power_Already_Equipped_CurrentlyEquipped       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_5                                             (None)
// enum class EQtn_EquipmentCategory  Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Hovered_                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtn_EquipmentCategory  K2Node_CustomEvent_MySlot                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FQtnItemData                CallFunc_GetPower2ItemData_ReturnValue                           (ConstParm)
// struct FQtnItemData                CallFunc_GetPower1ItemData_ReturnValue                           (ConstParm)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnUIBodyActionEnum    K2Node_Event_bodyAction                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class UAffordance_Widget_C*        Temp_object_Variable_3                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_WantShown_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  CallFunc_GetOwningScreen_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_WantShown                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  K2Node_Event_previousScreen                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isUsingMouseAndKeyboard                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnUIScreenActionEnum  K2Node_Event_screenAction                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_scrollDelta                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_fromStick                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffsetOfEnd_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnScreen*                  CallFunc_GetOwningScreen_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalNav_Widget_C*         CallFunc_GetUserWidget_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtn_EquipmentCategory  Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAffordance_Widget_C*        K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_CardHovered                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArmoryItem_Widget_C*        K2Node_CustomEvent_FocusedGear_1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Check_if_Power_Already_Equipped_CurrentlyEquipped_1     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class UBP_LootIcon_C*              K2Node_CustomEvent_HoveredButton_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtn_EquipmentCategory  K2Node_CustomEvent_Category                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_CategoryHovered                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Armory_Training_Check_And_Update_If_Player_Trained_menu_unlocked(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Armory_Training_Check_And_Update_If_Player_Trained_bypassThisTraining(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnStruct_VOLine           CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnStruct_VOLine           CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningPlayerInfo_occupiedBodyPawn                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetOwningPlayerInfo_playerPawn                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetOwningPlayerInfo_playerController                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerInfo_playerUI                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetOwningPlayerInfo_qtnPlayerState                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetOwningPlayerInfo_isHosting                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerUI_ReturnValue_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_FTUX_TrainingMoment_Screen_C*CallFunc_Get_FTUX_Training_Moment_Screen_ftuxTrainingMomentScreen(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnStruct_VOLine           CallFunc_Array_Get_Item_2                                        (NoDestructor, HasGetValueTypeHash)
// class ATrainingMoment_Powers_C*    CallFunc_CheckForPowersTrainingMoment_PowersTrainingMoment       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningPlayerInfo_occupiedBodyPawn_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              CallFunc_GetOwningPlayerInfo_playerPawn_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetOwningPlayerInfo_playerController_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetOwningPlayerInfo_playerUI_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetOwningPlayerInfo_qtnPlayerState_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetOwningPlayerInfo_isHosting_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LootIcon_C*              K2Node_Event_thisIcon_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_hovering                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_LootIcon_C*              K2Node_Event_thisIcon                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class FText>   K2Node_Event_Affordances                                         (ConstParm)
// class UClass*                      K2Node_Event_myClass                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// bool                               K2Node_CustomEvent_Found_Staff                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArmoryItem_Widget_C*        K2Node_CustomEvent_StaffWidget                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArmoryItem_Widget_C*        K2Node_CustomEvent_PowerWidget                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_2                                          (None)
// TSubclassOf<class UQtnVerb>        CallFunc_GetPowerVerbClass_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnVerb*                    CallFunc_GetClassDefaultObject_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnVerbUI_Interface_C>K2Node_DynamicCast_AsQtn_Verb_UI_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnVerbUI_Interface_C>K2Node_DynamicCast_AsQtn_Verb_UI_Interface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVerbAPower_isPower                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUnlockData_Locked                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetUnlockData_LockText                                  (None)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_8                                             (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_9                                             (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_4                                          (None)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_10                                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ITolkien_ArmoryVendor_Interface_C>K2Node_DynamicCast_AsTolkien_Armory_Vendor_Interface             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWeaponPowerCard_Widget_C*   K2Node_CustomEvent_weaponCard                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_5                                          (None)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_6                                          (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_4                                         (ReferenceParm)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_4                                    (None)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_11                                            (None)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_12                                            (None)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTutorialBoolValue_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetTutorialBoolValue_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCardArmory_Widget_C*        K2Node_CustomEvent_PowerCard                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class FText                        Temp_text_Variable_13                                            (None)
// enum class EQtn_EquipmentCategory  Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_7                                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_8                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_5                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_5                                    (None)
// bool                               CallFunc_Should_PIEBypass_Tutorials___ShouldBypass               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Should_PIEBypass_Tutorials___ShouldBypass_1             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Should_PIEBypass_Tutorials___ShouldBypass_2             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArmoryItem_Widget_C*        K2Node_CustomEvent_SelectedGear_3                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_wasAlreadyEquipped_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArmoryItem_Widget_C*        K2Node_CustomEvent_FocusedGear                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsHovered_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_8                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_1                    (None)
// class UArmoryItem_Widget_C*        K2Node_CustomEvent_SelectedGear_2                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_wasAlreadyEquipped_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArmoryItem_Widget_C*        K2Node_CustomEvent_SelectedGear_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_wasAlreadyEquipped                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class UArmory_CategoryButton_Widget_C*K2Node_CustomEvent_HoveredButton                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsHovered                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class FText                        K2Node_Select_Default_9                                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_9                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_6                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_6                                    (None)
// class UArmory_CategoryButton_Widget_C*K2Node_CustomEvent_SelectedWidget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_8                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_10                                         (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FText                        K2Node_Select_Default_11                                         (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Ease_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArmoryItem_Widget_C*        K2Node_CustomEvent_FocusedGearItem                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetWeaponCardArt_TextureToUse                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_2          (UObjectWrapper, HasGetValueTypeHash)
// class FName                        CallFunc_GetTagName_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default_12                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_3          (UObjectWrapper, HasGetValueTypeHash)
// struct FUI_Card_Struct             K2Node_MakeStruct_UI_Card_Struct_1                               (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_10                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemStatSettings        CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UQtnVerb>        CallFunc_SyncLoadVerbClass_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnVerb*                    CallFunc_GetClassDefaultObject_ReturnValue_2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb_Archetype_C*        K2Node_DynamicCast_AsQtn_Verb_Archetype_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_4          (UObjectWrapper, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_11                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUI_Card_Struct             K2Node_MakeStruct_UI_Card_Struct_2                               (HasGetValueTypeHash)
// bool                               Temp_bool_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_13                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnStruct_VOLine           CallFunc_Array_Get_Item_3                                        (NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_14                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_Event_occupiedBodyPawn                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_firstTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnItem*                    K2Node_CustomEvent_Item_1                                        (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnItem*                    K2Node_CustomEvent_Item                                          (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_14                                            (None)
// class FText                        Temp_text_Variable_15                                            (None)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_9                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue_10                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_15                                         (None)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_16                                         (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UArmoryItem_Widget_C*        K2Node_CustomEvent_SelectedGear                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVariationsMenuUnlockedByDLC_OutResult                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_17                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_18                                         (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UQtnScreen*                  CallFunc_GetScreenThatOwnsThisWidget_ReturnValue                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuEquipment_Widget_C::ExecuteUbergraph_MenuEquipment_Widget(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, enum class EUI_ArmoryCategory_Enum Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, bool Temp_bool_Variable_2, int32 K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_3, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, bool Temp_bool_Variable_4, class UUI_FTUX_Archetype_Widget_C* CallFunc_GetUserWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_5, class UBP_LootIcon_C* K2Node_Event_LootObject, int32 K2Node_Event_itemIndex, bool K2Node_CustomEvent_WantShown_2, class FText Temp_text_Variable_2, class UAffordance_Widget_C* Temp_object_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class UUI_ArmoryCardTooltip_Widget_C* K2Node_CustomEvent_CardToRefresh, const struct FQtnItemData& K2Node_CustomEvent_QtnItemData, bool CallFunc_IsHovered_ReturnValue, const struct FQtnItemStatSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TSubclassOf<class UQtnVerb> CallFunc_SyncLoadVerbClass_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UQtnVerb* CallFunc_GetClassDefaultObject_ReturnValue, class UQtnVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Verb_Archetype, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class UTexture2D* CallFunc_GetIconForUI_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1, const struct FUI_Card_Struct& K2Node_MakeStruct_UI_Card_Struct, bool K2Node_CustomEvent_Pressed_, enum class EQtn_EquipmentCategory K2Node_CustomEvent_CategoryToSwap, class UArmoryItem_Widget_C* K2Node_CustomEvent_SelectedGearWidget, class UArmoryItem_Widget_C* K2Node_CustomEvent_SelectedGear_4, bool K2Node_CustomEvent_WasAlreadyEquipped_, bool CallFunc_Check_if_Power_Already_Equipped_CurrentlyEquipped, class FText Temp_text_Variable_5, enum class EQtn_EquipmentCategory Temp_byte_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_CustomEvent_Hovered_, enum class EQtn_EquipmentCategory K2Node_CustomEvent_MySlot, float CallFunc_Conv_BoolToFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FQtnItemData& CallFunc_GetPower2ItemData_ReturnValue, const struct FQtnItemData& CallFunc_GetPower1ItemData_ReturnValue, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_IsHovered_ReturnValue_2, enum class EQtnUIBodyActionEnum K2Node_Event_bodyAction, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class UAffordance_Widget_C* Temp_object_Variable_3, bool K2Node_CustomEvent_WantShown_1, bool CallFunc_IsAnimationPlayingForward_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float CallFunc_GetStartTime_ReturnValue, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable_6, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, bool K2Node_CustomEvent_WantShown, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, bool Temp_bool_Variable_7, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_IsAnimationPlayingForward_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UQtnScreen* K2Node_Event_previousScreen, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool K2Node_CustomEvent_isUsingMouseAndKeyboard, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, bool K2Node_SwitchEnum_CmpSuccess_2, float K2Node_Event_scrollDelta, bool K2Node_Event_fromStick, float CallFunc_SelectFloat_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue_1, class UGlobalNav_Widget_C* CallFunc_GetUserWidget_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_3, bool K2Node_Event_IsDesignTime, enum class EQtn_EquipmentCategory Temp_byte_Variable_4, class UAffordance_Widget_C* K2Node_Select_Default_1, bool K2Node_CustomEvent_CardHovered, class UArmoryItem_Widget_C* K2Node_CustomEvent_FocusedGear_1, bool CallFunc_Check_if_Power_Already_Equipped_CurrentlyEquipped_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, bool CallFunc_IsValid_ReturnValue_3, class FText CallFunc_Format_ReturnValue_2, class UBP_LootIcon_C* K2Node_CustomEvent_HoveredButton_1, enum class EQtn_EquipmentCategory K2Node_CustomEvent_Category, bool K2Node_CustomEvent_CategoryHovered, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_4, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Armory_Training_Check_And_Update_If_Player_Trained_menu_unlocked, bool CallFunc_Armory_Training_Check_And_Update_If_Player_Trained_bypassThisTraining, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_1, class AQtnBodyPawn* CallFunc_GetOwningPlayerInfo_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetOwningPlayerInfo_playerPawn, class AQtnPlayerController* CallFunc_GetOwningPlayerInfo_playerController, class AQtnPlayerUI* CallFunc_GetOwningPlayerInfo_playerUI, class AQtnPlayerState* CallFunc_GetOwningPlayerInfo_qtnPlayerState, bool CallFunc_GetOwningPlayerInfo_isHosting, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_1, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_2, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess_1, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype_1, bool K2Node_DynamicCast_bSuccess_2, class UUI_FTUX_TrainingMoment_Screen_C* CallFunc_Get_FTUX_Training_Moment_Screen_ftuxTrainingMomentScreen, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_2, class ATrainingMoment_Powers_C* CallFunc_CheckForPowersTrainingMoment_PowersTrainingMoment, enum class ESlateVisibility Temp_byte_Variable_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningPlayerInfo_occupiedBodyPawn_1, class AQtnPlayerPawn* CallFunc_GetOwningPlayerInfo_playerPawn_1, class AQtnPlayerController* CallFunc_GetOwningPlayerInfo_playerController_1, class AQtnPlayerUI* CallFunc_GetOwningPlayerInfo_playerUI_1, class AQtnPlayerState* CallFunc_GetOwningPlayerInfo_qtnPlayerState_1, bool CallFunc_GetOwningPlayerInfo_isHosting_1, enum class ESlateVisibility Temp_byte_Variable_6, class UBP_LootIcon_C* K2Node_Event_thisIcon_1, bool K2Node_Event_hovering, class UBP_LootIcon_C* K2Node_Event_thisIcon, TMap<class FString, class FText> K2Node_Event_Affordances, class UClass* K2Node_Event_myClass, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, bool K2Node_CustomEvent_Found_Staff, class UArmoryItem_Widget_C* K2Node_CustomEvent_StaffWidget, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_8, class UArmoryItem_Widget_C* K2Node_CustomEvent_PowerWidget, class FText K2Node_Select_Default_2, TSubclassOf<class UQtnVerb> CallFunc_GetPowerVerbClass_ReturnValue, class UQtnVerb* CallFunc_GetClassDefaultObject_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue, TScriptInterface<class IQtnVerbUI_Interface_C> K2Node_DynamicCast_AsQtn_Verb_UI_Interface, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IQtnVerbUI_Interface_C> K2Node_DynamicCast_AsQtn_Verb_UI_Interface_1, bool K2Node_DynamicCast_bSuccess_4, bool Temp_bool_Variable_9, bool CallFunc_IsVerbAPower_isPower, enum class ESlateVisibility K2Node_Select_Default_3, bool CallFunc_GetUnlockData_Locked, class FText CallFunc_GetUnlockData_LockText, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_5, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class UClass* CallFunc_SyncLoadClass_ReturnValue, class UClass* CallFunc_SyncLoadClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, class FText Temp_text_Variable_8, bool CallFunc_BooleanOR_ReturnValue, class FText Temp_text_Variable_9, bool CallFunc_Not_PreBool_ReturnValue_1, bool Temp_bool_Variable_10, class FText K2Node_Select_Default_4, bool CallFunc_MakeLiteralBool_ReturnValue, class FText Temp_text_Variable_10, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, enum class ESlateVisibility Temp_byte_Variable_7, TScriptInterface<class ITolkien_ArmoryVendor_Interface_C> K2Node_DynamicCast_AsTolkien_Armory_Vendor_Interface, bool K2Node_DynamicCast_bSuccess_7, class UWeaponPowerCard_Widget_C* K2Node_CustomEvent_weaponCard, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_6, class FText K2Node_Select_Default_5, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_7, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, class FText K2Node_Select_Default_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, class FText CallFunc_Format_ReturnValue_4, bool CallFunc_NotEqual_ByteByte_ReturnValue, class FText Temp_text_Variable_11, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue_1, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class FText Temp_text_Variable_12, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_GetTutorialBoolValue_ReturnValue, bool CallFunc_GetTutorialBoolValue_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, class UCardArmory_Widget_C* K2Node_CustomEvent_PowerCard, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FText Temp_text_Variable_13, enum class EQtn_EquipmentCategory Temp_byte_Variable_8, class FText K2Node_Select_Default_7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_5, class FText CallFunc_Format_ReturnValue_5, bool CallFunc_Should_PIEBypass_Tutorials___ShouldBypass, bool CallFunc_Should_PIEBypass_Tutorials___ShouldBypass_1, bool CallFunc_Should_PIEBypass_Tutorials___ShouldBypass_2, class UArmoryItem_Widget_C* K2Node_CustomEvent_SelectedGear_3, bool K2Node_CustomEvent_wasAlreadyEquipped_2, class UArmoryItem_Widget_C* K2Node_CustomEvent_FocusedGear, bool K2Node_CustomEvent_IsHovered_1, enum class ESlateVisibility K2Node_Select_Default_8, enum class ESlateVisibility Temp_byte_Variable_9, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_1, bool CallFunc_MakeLiteralBool_ReturnValue_1, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1, class UArmoryItem_Widget_C* K2Node_CustomEvent_SelectedGear_2, bool K2Node_CustomEvent_wasAlreadyEquipped_1, class UArmoryItem_Widget_C* K2Node_CustomEvent_SelectedGear_1, bool K2Node_CustomEvent_wasAlreadyEquipped, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UArmory_CategoryButton_Widget_C* K2Node_CustomEvent_HoveredButton, bool K2Node_CustomEvent_IsHovered, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FText K2Node_Select_Default_9, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_9, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_6, class FText CallFunc_Format_ReturnValue_6, class UArmory_CategoryButton_Widget_C* K2Node_CustomEvent_SelectedWidget, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_8, class FText K2Node_Select_Default_10, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText K2Node_Select_Default_11, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float CallFunc_Ease_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, float CallFunc_Ease_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, class UArmoryItem_Widget_C* K2Node_CustomEvent_FocusedGearItem, class UTexture2D* CallFunc_GetWeaponCardArt_TextureToUse, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_2, class FName CallFunc_GetTagName_ReturnValue, class UTexture2D* K2Node_Select_Default_12, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_3, const struct FUI_Card_Struct& K2Node_MakeStruct_UI_Card_Struct_1, bool K2Node_SwitchEnum_CmpSuccess_5, enum class ESlateVisibility Temp_byte_Variable_10, const struct FQtnItemStatSettings& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, TSubclassOf<class UQtnVerb> CallFunc_SyncLoadVerbClass_ReturnValue_1, class UQtnVerb* CallFunc_GetClassDefaultObject_ReturnValue_2, class UQtnVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Verb_Archetype_1, bool K2Node_DynamicCast_bSuccess_8, TSoftObjectPtr<class UTexture2D> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_4, enum class ESlateVisibility Temp_byte_Variable_11, const struct FUI_Card_Struct& K2Node_MakeStruct_UI_Card_Struct_2, bool Temp_bool_Variable_11, enum class ESlateVisibility K2Node_Select_Default_13, int32 Temp_int_Array_Index_Variable, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_3, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_12, float K2Node_Select_Default_14, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class AQtnBodyPawn* K2Node_Event_occupiedBodyPawn, bool K2Node_Event_firstTime, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_9, class AQtnItem* K2Node_CustomEvent_Item_1, bool CallFunc_IsValid_ReturnValue_7, class AQtnItem* K2Node_CustomEvent_Item, bool CallFunc_IsValid_ReturnValue_8, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_9, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_10, class FText K2Node_Select_Default_15, int32 Temp_int_Variable_3, class FText K2Node_Select_Default_16, bool CallFunc_Not_PreBool_ReturnValue_3, class UArmoryItem_Widget_C* K2Node_CustomEvent_SelectedGear, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_IsVariationsMenuUnlockedByDLC_OutResult, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, enum class ESlateVisibility K2Node_Select_Default_17, class FText K2Node_Select_Default_18, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_4, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UQtnScreen* CallFunc_GetScreenThatOwnsThisWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuEquipment_Widget_C", "ExecuteUbergraph_MenuEquipment_Widget");

	Params::UMenuEquipment_Widget_C_ExecuteUbergraph_MenuEquipment_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_GetUserWidget_ReturnValue = CallFunc_GetUserWidget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_Event_LootObject = K2Node_Event_LootObject;
	Parms.K2Node_Event_itemIndex = K2Node_Event_itemIndex;
	Parms.K2Node_CustomEvent_WantShown_2 = K2Node_CustomEvent_WantShown_2;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.K2Node_CustomEvent_CardToRefresh = K2Node_CustomEvent_CardToRefresh;
	Parms.K2Node_CustomEvent_QtnItemData = K2Node_CustomEvent_QtnItemData;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_SyncLoadVerbClass_ReturnValue = CallFunc_SyncLoadVerbClass_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Verb_Archetype = K2Node_DynamicCast_AsQtn_Verb_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_GetIconForUI_ReturnValue = CallFunc_GetIconForUI_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1 = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1;
	Parms.K2Node_MakeStruct_UI_Card_Struct = K2Node_MakeStruct_UI_Card_Struct;
	Parms.K2Node_CustomEvent_Pressed_ = K2Node_CustomEvent_Pressed_;
	Parms.K2Node_CustomEvent_CategoryToSwap = K2Node_CustomEvent_CategoryToSwap;
	Parms.K2Node_CustomEvent_SelectedGearWidget = K2Node_CustomEvent_SelectedGearWidget;
	Parms.K2Node_CustomEvent_SelectedGear_4 = K2Node_CustomEvent_SelectedGear_4;
	Parms.K2Node_CustomEvent_WasAlreadyEquipped_ = K2Node_CustomEvent_WasAlreadyEquipped_;
	Parms.CallFunc_Check_if_Power_Already_Equipped_CurrentlyEquipped = CallFunc_Check_if_Power_Already_Equipped_CurrentlyEquipped;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Hovered_ = K2Node_CustomEvent_Hovered_;
	Parms.K2Node_CustomEvent_MySlot = K2Node_CustomEvent_MySlot;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetPower2ItemData_ReturnValue = CallFunc_GetPower2ItemData_ReturnValue;
	Parms.CallFunc_GetPower1ItemData_ReturnValue = CallFunc_GetPower1ItemData_ReturnValue;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue_1 = CallFunc_IsHovered_ReturnValue_1;
	Parms.CallFunc_IsHovered_ReturnValue_2 = CallFunc_IsHovered_ReturnValue_2;
	Parms.K2Node_Event_bodyAction = K2Node_Event_bodyAction;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_CustomEvent_WantShown_1 = K2Node_CustomEvent_WantShown_1;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_GetStartTime_ReturnValue = CallFunc_GetStartTime_ReturnValue;
	Parms.CallFunc_GetOwningScreen_ReturnValue = CallFunc_GetOwningScreen_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.K2Node_CustomEvent_WantShown = K2Node_CustomEvent_WantShown;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.CallFunc_GetViewportSize_ReturnValue_1 = CallFunc_GetViewportSize_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue_1 = CallFunc_IsAnimationPlayingForward_ReturnValue_1;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue_1 = CallFunc_GetAnimationCurrentTime_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.K2Node_Event_previousScreen = K2Node_Event_previousScreen;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.K2Node_CustomEvent_isUsingMouseAndKeyboard = K2Node_CustomEvent_isUsingMouseAndKeyboard;
	Parms.K2Node_Event_screenAction = K2Node_Event_screenAction;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_Event_scrollDelta = K2Node_Event_scrollDelta;
	Parms.K2Node_Event_fromStick = K2Node_Event_fromStick;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetScrollOffsetOfEnd_ReturnValue = CallFunc_GetScrollOffsetOfEnd_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetOwningScreen_ReturnValue_1 = CallFunc_GetOwningScreen_ReturnValue_1;
	Parms.CallFunc_GetUserWidget_ReturnValue_1 = CallFunc_GetUserWidget_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue = CallFunc_GetOwningPlayerUI_ReturnValue;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_3 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CustomEvent_CardHovered = K2Node_CustomEvent_CardHovered;
	Parms.K2Node_CustomEvent_FocusedGear_1 = K2Node_CustomEvent_FocusedGear_1;
	Parms.CallFunc_Check_if_Power_Already_Equipped_CurrentlyEquipped_1 = CallFunc_Check_if_Power_Already_Equipped_CurrentlyEquipped_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_CustomEvent_HoveredButton_1 = K2Node_CustomEvent_HoveredButton_1;
	Parms.K2Node_CustomEvent_Category = K2Node_CustomEvent_Category;
	Parms.K2Node_CustomEvent_CategoryHovered = K2Node_CustomEvent_CategoryHovered;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_4 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_4;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_5 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Armory_Training_Check_And_Update_If_Player_Trained_menu_unlocked = CallFunc_Armory_Training_Check_And_Update_If_Player_Trained_menu_unlocked;
	Parms.CallFunc_Armory_Training_Check_And_Update_If_Player_Trained_bypassThisTraining = CallFunc_Armory_Training_Check_And_Update_If_Player_Trained_bypassThisTraining;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetOwningPlayerInfo_occupiedBodyPawn = CallFunc_GetOwningPlayerInfo_occupiedBodyPawn;
	Parms.CallFunc_GetOwningPlayerInfo_playerPawn = CallFunc_GetOwningPlayerInfo_playerPawn;
	Parms.CallFunc_GetOwningPlayerInfo_playerController = CallFunc_GetOwningPlayerInfo_playerController;
	Parms.CallFunc_GetOwningPlayerInfo_playerUI = CallFunc_GetOwningPlayerInfo_playerUI;
	Parms.CallFunc_GetOwningPlayerInfo_qtnPlayerState = CallFunc_GetOwningPlayerInfo_qtnPlayerState;
	Parms.CallFunc_GetOwningPlayerInfo_isHosting = CallFunc_GetOwningPlayerInfo_isHosting;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_1 = CallFunc_GetOwningPlayerUI_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerUI_ReturnValue_2 = CallFunc_GetOwningPlayerUI_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype = K2Node_DynamicCast_AsQtn_Player_UIArchetype;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype_1 = K2Node_DynamicCast_AsQtn_Player_UIArchetype_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Get_FTUX_Training_Moment_Screen_ftuxTrainingMomentScreen = CallFunc_Get_FTUX_Training_Moment_Screen_ftuxTrainingMomentScreen;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_CheckForPowersTrainingMoment_PowersTrainingMoment = CallFunc_CheckForPowersTrainingMoment_PowersTrainingMoment;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetOwningPlayerInfo_occupiedBodyPawn_1 = CallFunc_GetOwningPlayerInfo_occupiedBodyPawn_1;
	Parms.CallFunc_GetOwningPlayerInfo_playerPawn_1 = CallFunc_GetOwningPlayerInfo_playerPawn_1;
	Parms.CallFunc_GetOwningPlayerInfo_playerController_1 = CallFunc_GetOwningPlayerInfo_playerController_1;
	Parms.CallFunc_GetOwningPlayerInfo_playerUI_1 = CallFunc_GetOwningPlayerInfo_playerUI_1;
	Parms.CallFunc_GetOwningPlayerInfo_qtnPlayerState_1 = CallFunc_GetOwningPlayerInfo_qtnPlayerState_1;
	Parms.CallFunc_GetOwningPlayerInfo_isHosting_1 = CallFunc_GetOwningPlayerInfo_isHosting_1;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.K2Node_Event_thisIcon_1 = K2Node_Event_thisIcon_1;
	Parms.K2Node_Event_hovering = K2Node_Event_hovering;
	Parms.K2Node_Event_thisIcon = K2Node_Event_thisIcon;
	Parms.K2Node_Event_Affordances = K2Node_Event_Affordances;
	Parms.K2Node_Event_myClass = K2Node_Event_myClass;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.K2Node_CustomEvent_Found_Staff = K2Node_CustomEvent_Found_Staff;
	Parms.K2Node_CustomEvent_StaffWidget = K2Node_CustomEvent_StaffWidget;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.K2Node_CustomEvent_PowerWidget = K2Node_CustomEvent_PowerWidget;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetPowerVerbClass_ReturnValue = CallFunc_GetPowerVerbClass_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue_1 = CallFunc_GetClassDefaultObject_ReturnValue_1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Verb_UI_Interface = K2Node_DynamicCast_AsQtn_Verb_UI_Interface;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsQtn_Verb_UI_Interface_1 = K2Node_DynamicCast_AsQtn_Verb_UI_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.CallFunc_IsVerbAPower_isPower = CallFunc_IsVerbAPower_isPower;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_GetUnlockData_Locked = CallFunc_GetUnlockData_Locked;
	Parms.CallFunc_GetUnlockData_LockText = CallFunc_GetUnlockData_LockText;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_1 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_SyncLoadClass_ReturnValue = CallFunc_SyncLoadClass_ReturnValue;
	Parms.CallFunc_SyncLoadClass_ReturnValue_1 = CallFunc_SyncLoadClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.K2Node_DynamicCast_AsTolkien_Armory_Vendor_Interface = K2Node_DynamicCast_AsTolkien_Armory_Vendor_Interface;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_CustomEvent_weaponCard = K2Node_CustomEvent_weaponCard;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_6 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_6;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_7 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_7;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_GetTutorialState_ReturnValue = CallFunc_GetTutorialState_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_4 = CallFunc_Format_ReturnValue_4;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.CallFunc_GetTutorialState_ReturnValue_1 = CallFunc_GetTutorialState_ReturnValue_1;
	Parms.CallFunc_GetTutorialState_ReturnValue_2 = CallFunc_GetTutorialState_ReturnValue_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_GetTutorialBoolValue_ReturnValue = CallFunc_GetTutorialBoolValue_ReturnValue;
	Parms.CallFunc_GetTutorialBoolValue_ReturnValue_1 = CallFunc_GetTutorialBoolValue_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_CustomEvent_PowerCard = K2Node_CustomEvent_PowerCard;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.Temp_text_Variable_13 = Temp_text_Variable_13;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.K2Node_MakeStruct_FormatArgumentData_8 = K2Node_MakeStruct_FormatArgumentData_8;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.CallFunc_Format_ReturnValue_5 = CallFunc_Format_ReturnValue_5;
	Parms.CallFunc_Should_PIEBypass_Tutorials___ShouldBypass = CallFunc_Should_PIEBypass_Tutorials___ShouldBypass;
	Parms.CallFunc_Should_PIEBypass_Tutorials___ShouldBypass_1 = CallFunc_Should_PIEBypass_Tutorials___ShouldBypass_1;
	Parms.CallFunc_Should_PIEBypass_Tutorials___ShouldBypass_2 = CallFunc_Should_PIEBypass_Tutorials___ShouldBypass_2;
	Parms.K2Node_CustomEvent_SelectedGear_3 = K2Node_CustomEvent_SelectedGear_3;
	Parms.K2Node_CustomEvent_wasAlreadyEquipped_2 = K2Node_CustomEvent_wasAlreadyEquipped_2;
	Parms.K2Node_CustomEvent_FocusedGear = K2Node_CustomEvent_FocusedGear;
	Parms.K2Node_CustomEvent_IsHovered_1 = K2Node_CustomEvent_IsHovered_1;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue_1 = CallFunc_GetOccupiedBodyPawn_ReturnValue_1;
	Parms.CallFunc_MakeLiteralBool_ReturnValue_1 = CallFunc_MakeLiteralBool_ReturnValue_1;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_1 = CallFunc_StaticMakeEventMessage_ReturnValue_1;
	Parms.K2Node_CustomEvent_SelectedGear_2 = K2Node_CustomEvent_SelectedGear_2;
	Parms.K2Node_CustomEvent_wasAlreadyEquipped_1 = K2Node_CustomEvent_wasAlreadyEquipped_1;
	Parms.K2Node_CustomEvent_SelectedGear_1 = K2Node_CustomEvent_SelectedGear_1;
	Parms.K2Node_CustomEvent_wasAlreadyEquipped = K2Node_CustomEvent_wasAlreadyEquipped;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_HoveredButton = K2Node_CustomEvent_HoveredButton;
	Parms.K2Node_CustomEvent_IsHovered = K2Node_CustomEvent_IsHovered;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.K2Node_MakeStruct_FormatArgumentData_9 = K2Node_MakeStruct_FormatArgumentData_9;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_Format_ReturnValue_6 = CallFunc_Format_ReturnValue_6;
	Parms.K2Node_CustomEvent_SelectedWidget = K2Node_CustomEvent_SelectedWidget;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_8 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_8;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_Ease_ReturnValue_1 = CallFunc_Ease_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.K2Node_CustomEvent_FocusedGearItem = K2Node_CustomEvent_FocusedGearItem;
	Parms.CallFunc_GetWeaponCardArt_TextureToUse = CallFunc_GetWeaponCardArt_TextureToUse;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_2 = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_2;
	Parms.CallFunc_GetTagName_ReturnValue = CallFunc_GetTagName_ReturnValue;
	Parms.K2Node_Select_Default_12 = K2Node_Select_Default_12;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_3 = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_3;
	Parms.K2Node_MakeStruct_UI_Card_Struct_1 = K2Node_MakeStruct_UI_Card_Struct_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_SyncLoadVerbClass_ReturnValue_1 = CallFunc_SyncLoadVerbClass_ReturnValue_1;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue_2 = CallFunc_GetClassDefaultObject_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsQtn_Verb_Archetype_1 = K2Node_DynamicCast_AsQtn_Verb_Archetype_1;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_4 = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_4;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.K2Node_MakeStruct_UI_Card_Struct_2 = K2Node_MakeStruct_UI_Card_Struct_2;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.K2Node_Select_Default_13 = K2Node_Select_Default_13;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable_12 = Temp_bool_Variable_12;
	Parms.K2Node_Select_Default_14 = K2Node_Select_Default_14;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_Event_occupiedBodyPawn = K2Node_Event_occupiedBodyPawn;
	Parms.K2Node_Event_firstTime = K2Node_Event_firstTime;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_CustomEvent_Item_1 = K2Node_CustomEvent_Item_1;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.Temp_text_Variable_14 = Temp_text_Variable_14;
	Parms.Temp_text_Variable_15 = Temp_text_Variable_15;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_9 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_9;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue_10 = CallFunc_IsUsingMouseAndKeyboard_ReturnValue_10;
	Parms.K2Node_Select_Default_15 = K2Node_Select_Default_15;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.K2Node_Select_Default_16 = K2Node_Select_Default_16;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_CustomEvent_SelectedGear = K2Node_CustomEvent_SelectedGear;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_IsVariationsMenuUnlockedByDLC_OutResult = CallFunc_IsVariationsMenuUnlockedByDLC_OutResult;
	Parms.Temp_bool_Variable_13 = Temp_bool_Variable_13;
	Parms.Temp_bool_Variable_14 = Temp_bool_Variable_14;
	Parms.K2Node_Select_Default_17 = K2Node_Select_Default_17;
	Parms.K2Node_Select_Default_18 = K2Node_Select_Default_18;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetScreenThatOwnsThisWidget_ReturnValue = CallFunc_GetScreenThatOwnsThisWidget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;

	UObject::ProcessEvent(Func, &Parms);

}

}


