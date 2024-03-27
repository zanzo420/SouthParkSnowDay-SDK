#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WeaponPowerCard_Widget.WeaponPowerCard_Widget_C
// (None)

class UClass* UWeaponPowerCard_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeaponPowerCard_Widget_C");

	return Clss;
}


// WeaponPowerCard_Widget_C WeaponPowerCard_Widget.Default__WeaponPowerCard_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWeaponPowerCard_Widget_C* UWeaponPowerCard_Widget_C::GetDefaultObj()
{
	static class UWeaponPowerCard_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeaponPowerCard_Widget_C*>(UWeaponPowerCard_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.SequenceEvent__ENTRYPOINTWeaponPowerCard_Widget_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWeaponPowerCard_Widget_C::SequenceEvent__ENTRYPOINTWeaponPowerCard_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "SequenceEvent__ENTRYPOINTWeaponPowerCard_Widget_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.SelectButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWeaponPowerCard_Widget_C::SelectButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "SelectButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.FTUX_Unlock Staff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWeaponPowerCard_Widget_C::FTUX_Unlock_Staff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "FTUX_Unlock Staff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.GetVerbClass
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      VerbClass                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
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

void UWeaponPowerCard_Widget_C::GetVerbClass(class UClass** VerbClass, bool CallFunc_IsValidClass_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FQtnItemStatSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TSubclassOf<class UQtnVerb> CallFunc_SyncLoadVerbClass_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "GetVerbClass");

	Params::UWeaponPowerCard_Widget_C_GetVerbClass_Params Parms{};

	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
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


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.IsWeaponOrPowerEquipped
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEquipped                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        LOCAL_RowName                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                CallFunc_GetPower2ItemData_ReturnValue                           (ConstParm)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnItemData                CallFunc_GetPower1ItemData_ReturnValue                           (ConstParm)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapons_rangedWeapon                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapons_meleeWeapon                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCombatSettings*          CallFunc_GetCombatSettings_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                CallFunc_GetItemData_ReturnValue                                 (None)
// struct FQtnItemData                CallFunc_GetItemData_ReturnValue_1                               (None)
// struct FQtnWeaponConfiguration     CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnWeaponConfiguration     CallFunc_Map_Find_Value_1                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponPowerCard_Widget_C::IsWeaponOrPowerEquipped(bool* IsEquipped, class FName LOCAL_RowName, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, class UClass* CallFunc_SyncLoadClass_ReturnValue, const struct FQtnItemData& CallFunc_GetPower2ItemData_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FQtnItemData& CallFunc_GetPower1ItemData_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_rangedWeapon, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_meleeWeapon, class UQtnCombatSettings* CallFunc_GetCombatSettings_ReturnValue, const struct FQtnItemData& CallFunc_GetItemData_ReturnValue, const struct FQtnItemData& CallFunc_GetItemData_ReturnValue_1, const struct FQtnWeaponConfiguration& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FQtnWeaponConfiguration& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UClass* CallFunc_SyncLoadClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UClass* CallFunc_SyncLoadClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "IsWeaponOrPowerEquipped");

	Params::UWeaponPowerCard_Widget_C_IsWeaponOrPowerEquipped_Params Parms{};

	Parms.LOCAL_RowName = LOCAL_RowName;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.CallFunc_SyncLoadClass_ReturnValue = CallFunc_SyncLoadClass_ReturnValue;
	Parms.CallFunc_GetPower2ItemData_ReturnValue = CallFunc_GetPower2ItemData_ReturnValue;
	Parms.CallFunc_GetBodyInventory_ReturnValue_1 = CallFunc_GetBodyInventory_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetPower1ItemData_ReturnValue = CallFunc_GetPower1ItemData_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.CallFunc_GetIntendedEquippedWeapons_rangedWeapon = CallFunc_GetIntendedEquippedWeapons_rangedWeapon;
	Parms.CallFunc_GetIntendedEquippedWeapons_meleeWeapon = CallFunc_GetIntendedEquippedWeapons_meleeWeapon;
	Parms.CallFunc_GetCombatSettings_ReturnValue = CallFunc_GetCombatSettings_ReturnValue;
	Parms.CallFunc_GetItemData_ReturnValue = CallFunc_GetItemData_ReturnValue;
	Parms.CallFunc_GetItemData_ReturnValue_1 = CallFunc_GetItemData_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_SyncLoadClass_ReturnValue_1 = CallFunc_SyncLoadClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_SyncLoadClass_ReturnValue_2 = CallFunc_SyncLoadClass_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEquipped != nullptr)
		*IsEquipped = Parms.IsEquipped;

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.SetEquipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Equipped_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponPowerCard_Widget_C::SetEquipped(bool Equipped_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "SetEquipped");

	Params::UWeaponPowerCard_Widget_C_SetEquipped_Params Parms{};

	Parms.Equipped_ = Equipped_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.AddPowerPips
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumPips                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBox*              Hbox                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCheatPip_Widget_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponPowerCard_Widget_C::AddPowerPips(int32 NumPips, class UHorizontalBox* Hbox, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, class UCheatPip_Widget_C* CallFunc_Create_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "AddPowerPips");

	Params::UWeaponPowerCard_Widget_C_AddPowerPips_Params Parms{};

	Parms.NumPips = NumPips;
	Parms.Hbox = Hbox;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.GetTitleText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)

class FText UWeaponPowerCard_Widget_C::GetTitleText(class FText CallFunc_GetText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "GetTitleText");

	Params::UWeaponPowerCard_Widget_C_GetTitleText_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.CheckLockedStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FTUXStaffOverride                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        LockText                                                         (Edit, BlueprintVisible)
// bool                               IsLocked                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnTutorialStatus      CallFunc_GetTutorialState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetVerbClass_VerbClass                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnVerbUI_Interface_C>K2Node_DynamicCast_AsQtn_Verb_UI_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUnlockData_Locked                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetUnlockData_LockText                                  (None)
// class UClass*                      CallFunc_SyncLoadClass_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsQtn_Item                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnItem*                    CallFunc_GetClassDefaultObject_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemUIInterfaces_C>K2Node_DynamicCast_AsItem_UIInterfaces                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUnlockData_Locked_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetUnlockData_LockText_1                                (None)

void UWeaponPowerCard_Widget_C::CheckLockedStatus(bool FTUXStaffOverride, class FText LockText, bool IsLocked, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UClass* CallFunc_GetVerbClass_VerbClass, class UQtnVerb* CallFunc_GetClassDefaultObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IQtnVerbUI_Interface_C> K2Node_DynamicCast_AsQtn_Verb_UI_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_GetUnlockData_Locked, class FText CallFunc_GetUnlockData_LockText, class UClass* CallFunc_SyncLoadClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Item, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class AQtnItem* CallFunc_GetClassDefaultObject_ReturnValue_1, TScriptInterface<class IItemUIInterfaces_C> K2Node_DynamicCast_AsItem_UIInterfaces, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetUnlockData_Locked_1, class FText CallFunc_GetUnlockData_LockText_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "CheckLockedStatus");

	Params::UWeaponPowerCard_Widget_C_CheckLockedStatus_Params Parms{};

	Parms.FTUXStaffOverride = FTUXStaffOverride;
	Parms.LockText = LockText;
	Parms.IsLocked = IsLocked;
	Parms.CallFunc_GetTutorialState_ReturnValue = CallFunc_GetTutorialState_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetVerbClass_VerbClass = CallFunc_GetVerbClass_VerbClass;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Verb_UI_Interface = K2Node_DynamicCast_AsQtn_Verb_UI_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetUnlockData_Locked = CallFunc_GetUnlockData_Locked;
	Parms.CallFunc_GetUnlockData_LockText = CallFunc_GetUnlockData_LockText;
	Parms.CallFunc_SyncLoadClass_ReturnValue = CallFunc_SyncLoadClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsQtn_Item = K2Node_ClassDynamicCast_AsQtn_Item;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_IsValidClass_ReturnValue_1 = CallFunc_IsValidClass_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue_1 = CallFunc_GetClassDefaultObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsItem_UIInterfaces = K2Node_DynamicCast_AsItem_UIInterfaces;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetUnlockData_Locked_1 = CallFunc_GetUnlockData_Locked_1;
	Parms.CallFunc_GetUnlockData_LockText_1 = CallFunc_GetUnlockData_LockText_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.SetAffordanceText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TMap<enum class EQtn_EquipmentCategory, class FString>TestAffordanceMap                                                (Edit, BlueprintVisible)
// TMap<enum class EQtn_EquipmentCategory, class FString>AffordanceMap                                                    (Edit, BlueprintVisible)
// TMap<enum class EQtn_EquipmentCategory, class FString>K2Node_MakeVariable_MakeVariableOutput                           (None)
// TMap<enum class EQtn_EquipmentCategory, class FString>K2Node_MakeVariable_MakeVariableOutput_1                         (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Map_Find_Value                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UWeaponPowerCard_Widget_C::SetAffordanceText(TMap<enum class EQtn_EquipmentCategory, class FString> TestAffordanceMap, TMap<enum class EQtn_EquipmentCategory, class FString> AffordanceMap, TMap<enum class EQtn_EquipmentCategory, class FString> K2Node_MakeVariable_MakeVariableOutput, TMap<enum class EQtn_EquipmentCategory, class FString> K2Node_MakeVariable_MakeVariableOutput_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "SetAffordanceText");

	Params::UWeaponPowerCard_Widget_C_SetAffordanceText_Params Parms{};

	Parms.TestAffordanceMap = TestAffordanceMap;
	Parms.AffordanceMap = AffordanceMap;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.K2Node_MakeVariable_MakeVariableOutput_1 = K2Node_MakeVariable_MakeVariableOutput_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.Anim_EquippedHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponPowerCard_Widget_C::Anim_EquippedHover(bool Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "Anim_EquippedHover");

	Params::UWeaponPowerCard_Widget_C_Anim_EquippedHover_Params Parms{};

	Parms.Hovered = Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.InitCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuEquipment_Widget_C*     EquipmentMenu                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FTUX_Staff_Override                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponPowerCard_Widget_C::InitCard(class UMenuEquipment_Widget_C* EquipmentMenu, bool FTUX_Staff_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "InitCard");

	Params::UWeaponPowerCard_Widget_C_InitCard_Params Parms{};

	Parms.EquipmentMenu = EquipmentMenu;
	Parms.FTUX_Staff_Override = FTUX_Staff_Override;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.ItemEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Equipped                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponPowerCard_Widget_C::ItemEquipped(bool Equipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "ItemEquipped");

	Params::UWeaponPowerCard_Widget_C_ItemEquipped_Params Parms{};

	Parms.Equipped = Equipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.BndEvt__WeaponPowerCard_Widget_Button_210_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWeaponPowerCard_Widget_C::BndEvt__WeaponPowerCard_Widget_Button_210_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "BndEvt__WeaponPowerCard_Widget_Button_210_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.BndEvt__WeaponPowerCard_Widget_Button_210_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWeaponPowerCard_Widget_C::BndEvt__WeaponPowerCard_Widget_Button_210_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "BndEvt__WeaponPowerCard_Widget_Button_210_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.BndEvt__WeaponPowerCard_Widget_Button_210_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWeaponPowerCard_Widget_C::BndEvt__WeaponPowerCard_Widget_Button_210_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "BndEvt__WeaponPowerCard_Widget_Button_210_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponPowerCard_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "PreConstruct");

	Params::UWeaponPowerCard_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.StartTrainingHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWeaponPowerCard_Widget_C::StartTrainingHighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "StartTrainingHighlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.PauseTrainingHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CardHovered                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CardTitle                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponPowerCard_Widget_C::PauseTrainingHighlight(bool CardHovered, class FText CardTitle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "PauseTrainingHighlight");

	Params::UWeaponPowerCard_Widget_C_PauseTrainingHighlight_Params Parms{};

	Parms.CardHovered = CardHovered;
	Parms.CardTitle = CardTitle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.UnbindTrainingEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWeaponPowerCard_Widget_C::UnbindTrainingEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "UnbindTrainingEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.AnimSeq_Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponPowerCard_Widget_C::AnimSeq_Hover(bool Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "AnimSeq_Hover");

	Params::UWeaponPowerCard_Widget_C_AnimSeq_Hover_Params Parms{};

	Parms.Hovered = Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.HoverRepeater
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWeaponPowerCard_Widget_C::HoverRepeater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "HoverRepeater");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.ExecuteUbergraph_WeaponPowerCard_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Hovered_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMenuEquipment_Widget_C*     K2Node_CustomEvent_EquipmentMenu                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_FTUX_Staff_Override                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GenerateNameTextFromItemData_ReturnValue                (None)
// class UQtnCombatSettings*          CallFunc_GetCombatSettings_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Equipped                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IItemUIInterfaces_C>K2Node_DynamicCast_AsItem_UIInterfaces                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IItemUIInterfaces_C>K2Node_DynamicCast_AsItem_UIInterfaces_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_SetAffordanceText_ReturnValue                           (None)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapon_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                CallFunc_GetPower2ItemData_ReturnValue                           (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnItemData                CallFunc_GetItemData_ReturnValue                                 (None)
// struct FQtnItemData                CallFunc_GetPower1ItemData_ReturnValue                           (ConstParm)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetTitleText_ReturnValue                                (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_StaticParseInputText_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_StaticParseInputText_ReturnValue_1                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// bool                               K2Node_CustomEvent_CardHovered                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_CardTitle                                     (None)
// bool                               K2Node_CustomEvent_Hovered                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnWeaponConfiguration     CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUIWeaponInfo_Struct        CallFunc_Map_Find_Value_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponPowerCard_Widget_C::ExecuteUbergraph_WeaponPowerCard_Widget(int32 EntryPoint, bool K2Node_CustomEvent_Hovered_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMenuEquipment_Widget_C* K2Node_CustomEvent_EquipmentMenu, bool K2Node_CustomEvent_FTUX_Staff_Override, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class FText CallFunc_GenerateNameTextFromItemData_ReturnValue, class UQtnCombatSettings* CallFunc_GetCombatSettings_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_CustomEvent_Equipped, TScriptInterface<class IItemUIInterfaces_C> K2Node_DynamicCast_AsItem_UIInterfaces, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IItemUIInterfaces_C> K2Node_DynamicCast_AsItem_UIInterfaces_1, bool K2Node_DynamicCast_bSuccess_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class FText CallFunc_SetAffordanceText_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, class AQtnItem* CallFunc_GetIntendedEquippedWeapon_ReturnValue, const struct FQtnItemData& CallFunc_GetPower2ItemData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct FQtnItemData& CallFunc_GetItemData_ReturnValue, const struct FQtnItemData& CallFunc_GetPower1ItemData_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class FText CallFunc_GetTitleText_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const class FString& CallFunc_StaticParseInputText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_StaticParseInputText_ReturnValue_1, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool K2Node_CustomEvent_CardHovered, class FText K2Node_CustomEvent_CardTitle, bool K2Node_CustomEvent_Hovered, const struct FQtnWeaponConfiguration& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FUIWeaponInfo_Struct& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "ExecuteUbergraph_WeaponPowerCard_Widget");

	Params::UWeaponPowerCard_Widget_C_ExecuteUbergraph_WeaponPowerCard_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Hovered_1 = K2Node_CustomEvent_Hovered_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_EquipmentMenu = K2Node_CustomEvent_EquipmentMenu;
	Parms.K2Node_CustomEvent_FTUX_Staff_Override = K2Node_CustomEvent_FTUX_Staff_Override;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.CallFunc_GenerateNameTextFromItemData_ReturnValue = CallFunc_GenerateNameTextFromItemData_ReturnValue;
	Parms.CallFunc_GetCombatSettings_ReturnValue = CallFunc_GetCombatSettings_ReturnValue;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_Equipped = K2Node_CustomEvent_Equipped;
	Parms.K2Node_DynamicCast_AsItem_UIInterfaces = K2Node_DynamicCast_AsItem_UIInterfaces;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsItem_UIInterfaces_1 = K2Node_DynamicCast_AsItem_UIInterfaces_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_SetAffordanceText_ReturnValue = CallFunc_SetAffordanceText_ReturnValue;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.CallFunc_GetIntendedEquippedWeapon_ReturnValue = CallFunc_GetIntendedEquippedWeapon_ReturnValue;
	Parms.CallFunc_GetPower2ItemData_ReturnValue = CallFunc_GetPower2ItemData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetItemData_ReturnValue = CallFunc_GetItemData_ReturnValue;
	Parms.CallFunc_GetPower1ItemData_ReturnValue = CallFunc_GetPower1ItemData_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_GetTitleText_ReturnValue = CallFunc_GetTitleText_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_StaticParseInputText_ReturnValue = CallFunc_StaticParseInputText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_StaticParseInputText_ReturnValue_1 = CallFunc_StaticParseInputText_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_CustomEvent_CardHovered = K2Node_CustomEvent_CardHovered;
	Parms.K2Node_CustomEvent_CardTitle = K2Node_CustomEvent_CardTitle;
	Parms.K2Node_CustomEvent_Hovered = K2Node_CustomEvent_Hovered;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue_1 = CallFunc_IsHovered_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.OnCardClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWeaponPowerCard_Widget_C::OnCardClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "OnCardClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeaponPowerCard_Widget.WeaponPowerCard_Widget_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CardHovered                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CardTitle                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponPowerCard_Widget_C::OnHover__DelegateSignature(bool CardHovered, class FText CardTitle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeaponPowerCard_Widget_C", "OnHover__DelegateSignature");

	Params::UWeaponPowerCard_Widget_C_OnHover__DelegateSignature_Params Parms{};

	Parms.CardHovered = CardHovered;
	Parms.CardTitle = CardTitle;

	UObject::ProcessEvent(Func, &Parms);

}

}


