#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_Inventory_Grid_Widget.BP_Inventory_Grid_Widget_C
// (None)

class UClass* UBP_Inventory_Grid_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Inventory_Grid_Widget_C");

	return Clss;
}


// BP_Inventory_Grid_Widget_C BP_Inventory_Grid_Widget.Default__BP_Inventory_Grid_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Inventory_Grid_Widget_C* UBP_Inventory_Grid_Widget_C::GetDefaultObj()
{
	static class UBP_Inventory_Grid_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Inventory_Grid_Widget_C*>(UBP_Inventory_Grid_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Inventory_Grid_Widget.BP_Inventory_Grid_Widget_C.GetUnlockData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Requester                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Locked                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        LockText                                                         (Parm, OutParm)

void UBP_Inventory_Grid_Widget_C::GetUnlockData(class UObject* Requester, bool* Locked, class FText* LockText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Inventory_Grid_Widget_C", "GetUnlockData");

	Params::UBP_Inventory_Grid_Widget_C_GetUnlockData_Params Parms{};

	Parms.Requester = Requester;

	UObject::ProcessEvent(Func, &Parms);

	if (Locked != nullptr)
		*Locked = Parms.Locked;

	if (LockText != nullptr)
		*LockText = Parms.LockText;

}


// Function BP_Inventory_Grid_Widget.BP_Inventory_Grid_Widget_C.ScrollInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ScrollInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromStick                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Inventory_Grid_Widget_C::ScrollInput(float ScrollInput, bool FromStick, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Inventory_Grid_Widget_C", "ScrollInput");

	Params::UBP_Inventory_Grid_Widget_C_ScrollInput_Params Parms{};

	Parms.ScrollInput = ScrollInput;
	Parms.FromStick = FromStick;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Inventory_Grid_Widget.BP_Inventory_Grid_Widget_C.ShouldAddToList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FQtnItemData                ShouldAdd                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ShouldShow                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCombatSettings*          CallFunc_GetCombatSettings_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetWeaponConfigurationFromWeaponTypeGameplayType_FoundConfiguration(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnWeaponConfiguration     CallFunc_GetWeaponConfigurationFromWeaponTypeGameplayType_ReturnValue(None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Inventory_Grid_Widget_C::ShouldAddToList(const struct FQtnItemData& ShouldAdd, bool* ShouldShow, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnCombatSettings* CallFunc_GetCombatSettings_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetWeaponConfigurationFromWeaponTypeGameplayType_FoundConfiguration, const struct FQtnWeaponConfiguration& CallFunc_GetWeaponConfigurationFromWeaponTypeGameplayType_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Inventory_Grid_Widget_C", "ShouldAddToList");

	Params::UBP_Inventory_Grid_Widget_C_ShouldAddToList_Params Parms{};

	Parms.ShouldAdd = ShouldAdd;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.CallFunc_GetCombatSettings_ReturnValue = CallFunc_GetCombatSettings_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetWeaponConfigurationFromWeaponTypeGameplayType_FoundConfiguration = CallFunc_GetWeaponConfigurationFromWeaponTypeGameplayType_FoundConfiguration;
	Parms.CallFunc_GetWeaponConfigurationFromWeaponTypeGameplayType_ReturnValue = CallFunc_GetWeaponConfigurationFromWeaponTypeGameplayType_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldShow != nullptr)
		*ShouldShow = Parms.ShouldShow;

}


// Function BP_Inventory_Grid_Widget.BP_Inventory_Grid_Widget_C.FilterWeaponList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FQtnItemData>        ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EQtn_EquipmentCategory  EquipCategory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnItemData>        OutItems                                                         (Parm, OutParm)
// bool                               WantMelee                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FQtnItemData>        OutArray                                                         (Edit, BlueprintVisible)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnGameInstance*            CallFunc_GetQtnGameInstance_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCombatSettings*          CallFunc_GetCombatSettings_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWeaponConfigurationFromWeaponTypeGameplayType_FoundConfiguration(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnWeaponConfiguration     CallFunc_GetWeaponConfigurationFromWeaponTypeGameplayType_ReturnValue(None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Inventory_Grid_Widget_C::FilterWeaponList(TArray<struct FQtnItemData>& ItemData, enum class EQtn_EquipmentCategory EquipCategory, TArray<struct FQtnItemData>* OutItems, bool WantMelee, const TArray<struct FQtnItemData>& OutArray, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FQtnItemData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnCombatSettings* CallFunc_GetCombatSettings_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_GetWeaponConfigurationFromWeaponTypeGameplayType_FoundConfiguration, const struct FQtnWeaponConfiguration& CallFunc_GetWeaponConfigurationFromWeaponTypeGameplayType_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Inventory_Grid_Widget_C", "FilterWeaponList");

	Params::UBP_Inventory_Grid_Widget_C_FilterWeaponList_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.EquipCategory = EquipCategory;
	Parms.WantMelee = WantMelee;
	Parms.OutArray = OutArray;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetQtnGameInstance_ReturnValue = CallFunc_GetQtnGameInstance_ReturnValue;
	Parms.CallFunc_GetCombatSettings_ReturnValue = CallFunc_GetCombatSettings_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetWeaponConfigurationFromWeaponTypeGameplayType_FoundConfiguration = CallFunc_GetWeaponConfigurationFromWeaponTypeGameplayType_FoundConfiguration;
	Parms.CallFunc_GetWeaponConfigurationFromWeaponTypeGameplayType_ReturnValue = CallFunc_GetWeaponConfigurationFromWeaponTypeGameplayType_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutItems != nullptr)
		*OutItems = std::move(Parms.OutItems);

}


// Function BP_Inventory_Grid_Widget.BP_Inventory_Grid_Widget_C.CategoryFilter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnSubCategories       Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTopNavTab_Widget_C*         SelectedTab                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnSubCategories       SubCat                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UBP_LootIcon_C*>      FilteredIconList                                                 (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LootIcon_C*              CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_LootIcon_C*              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Inventory_Grid_Widget_C::CategoryFilter(enum class EQtnSubCategories Category, class UTopNavTab_Widget_C* SelectedTab, enum class EQtnSubCategories SubCat, const TArray<class UBP_LootIcon_C*>& FilteredIconList, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, class UBP_LootIcon_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UBP_LootIcon_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Inventory_Grid_Widget_C", "CategoryFilter");

	Params::UBP_Inventory_Grid_Widget_C_CategoryFilter_Params Parms{};

	Parms.Category = Category;
	Parms.SelectedTab = SelectedTab;
	Parms.SubCat = SubCat;
	Parms.FilteredIconList = FilteredIconList;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Inventory_Grid_Widget.BP_Inventory_Grid_Widget_C.GetIconFromDrawer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LootIcon_C*              Icon                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LootIcon_C*              CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Inventory_Grid_Widget_C::GetIconFromDrawer(int32 Index, class UBP_LootIcon_C** Icon, class UBP_LootIcon_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Inventory_Grid_Widget_C", "GetIconFromDrawer");

	Params::UBP_Inventory_Grid_Widget_C_GetIconFromDrawer_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function BP_Inventory_Grid_Widget.BP_Inventory_Grid_Widget_C.GetEQtnCategoryText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UBP_Inventory_Grid_Widget_C::GetEQtnCategoryText(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Inventory_Grid_Widget_C", "GetEQtnCategoryText");

	Params::UBP_Inventory_Grid_Widget_C_GetEQtnCategoryText_Params Parms{};

	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Inventory_Grid_Widget.BP_Inventory_Grid_Widget_C.Subnav Check
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtn_EquipmentCategory  EquipmentCategory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Inventory_Grid_Widget_C::Subnav_Check(enum class EQtn_EquipmentCategory EquipmentCategory, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Inventory_Grid_Widget_C", "Subnav Check");

	Params::UBP_Inventory_Grid_Widget_C_Subnav_Check_Params Parms{};

	Parms.EquipmentCategory = EquipmentCategory;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Inventory_Grid_Widget.BP_Inventory_Grid_Widget_C.GetItemDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LootIcon_C*              LootObject                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Inventory_Grid_Widget_C::GetItemDetail(class UBP_LootIcon_C* LootObject, int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Inventory_Grid_Widget_C", "GetItemDetail");

	Params::UBP_Inventory_Grid_Widget_C_GetItemDetail_Params Parms{};

	Parms.LootObject = LootObject;
	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Inventory_Grid_Widget.BP_Inventory_Grid_Widget_C.HandleSelectionItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LootIcon_C*              Item_Icon                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Inventory_Grid_Widget_C::HandleSelectionItem(class UBP_LootIcon_C* Item_Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Inventory_Grid_Widget_C", "HandleSelectionItem");

	Params::UBP_Inventory_Grid_Widget_C_HandleSelectionItem_Params Parms{};

	Parms.Item_Icon = Item_Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Inventory_Grid_Widget.BP_Inventory_Grid_Widget_C.Populate Grid
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQtnItemData>        ItemData                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<enum class EQtnSubCategories>Categories                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_Inventory_Grid_Widget_C::Populate_Grid(TArray<struct FQtnItemData>& ItemData, TArray<enum class EQtnSubCategories>& Categories)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Inventory_Grid_Widget_C", "Populate Grid");

	Params::UBP_Inventory_Grid_Widget_C_Populate_Grid_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.Categories = Categories;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Inventory_Grid_Widget.BP_Inventory_Grid_Widget_C.InitInventoryGrid
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtn_EquipmentCategory  EquipmentCategory                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 OwningMenu                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EQtnSubCategories>Subcategories                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_Inventory_Grid_Widget_C::InitInventoryGrid(enum class EQtn_EquipmentCategory EquipmentCategory, class UUserWidget* OwningMenu, TArray<enum class EQtnSubCategories>& Subcategories)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Inventory_Grid_Widget_C", "InitInventoryGrid");

	Params::UBP_Inventory_Grid_Widget_C_InitInventoryGrid_Params Parms{};

	Parms.EquipmentCategory = EquipmentCategory;
	Parms.OwningMenu = OwningMenu;
	Parms.Subcategories = Subcategories;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Inventory_Grid_Widget.BP_Inventory_Grid_Widget_C.HandleLootSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LootIcon_C*              ThisIcon                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Inventory_Grid_Widget_C::HandleLootSelect(class UBP_LootIcon_C* ThisIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Inventory_Grid_Widget_C", "HandleLootSelect");

	Params::UBP_Inventory_Grid_Widget_C_HandleLootSelect_Params Parms{};

	Parms.ThisIcon = ThisIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Inventory_Grid_Widget.BP_Inventory_Grid_Widget_C.HandleLootHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_LootIcon_C*              ThisIcon                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Hovering                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Inventory_Grid_Widget_C::HandleLootHover(class UBP_LootIcon_C* ThisIcon, bool Hovering)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Inventory_Grid_Widget_C", "HandleLootHover");

	Params::UBP_Inventory_Grid_Widget_C_HandleLootHover_Params Parms{};

	Parms.ThisIcon = ThisIcon;
	Parms.Hovering = Hovering;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Inventory_Grid_Widget.BP_Inventory_Grid_Widget_C.OverrideHeight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Height                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Width                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Inventory_Grid_Widget_C::OverrideHeight(float Height, float Width)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Inventory_Grid_Widget_C", "OverrideHeight");

	Params::UBP_Inventory_Grid_Widget_C_OverrideHeight_Params Parms{};

	Parms.Height = Height;
	Parms.Width = Width;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Inventory_Grid_Widget.BP_Inventory_Grid_Widget_C.SetForMediaBrain
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Inventory_Grid_Widget_C::SetForMediaBrain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Inventory_Grid_Widget_C", "SetForMediaBrain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Inventory_Grid_Widget.BP_Inventory_Grid_Widget_C.GenerateGrid
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Inventory_Grid_Widget_C::GenerateGrid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Inventory_Grid_Widget_C", "GenerateGrid");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Inventory_Grid_Widget.BP_Inventory_Grid_Widget_C.ExecuteUbergraph_BP_Inventory_Grid_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnItemData>        K2Node_CustomEvent_ItemData                                      (ConstParm, ReferenceParm)
// TArray<enum class EQtnSubCategories>K2Node_CustomEvent_Categories                                    (ConstParm, ReferenceParm)
// enum class EQtn_EquipmentCategory  Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_LootIcon_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtn_EquipmentCategory  K2Node_CustomEvent_EquipmentCategory                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_CustomEvent_OwningMenu                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EQtnSubCategories>K2Node_CustomEvent_Subcategories                                 (ConstParm, ReferenceParm)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnItemData>        Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// class UBP_LootIcon_C*              K2Node_CustomEvent_Item_Icon                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LootIcon_C*              K2Node_Event_LootObject                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_itemIndex                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOriginalBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnItemData>        CallFunc_GetVaultWeapons_ReturnValue                             (ConstParm, ReferenceParm)
// TScriptInterface<class IItemUIInterfaces_C>K2Node_DynamicCast_AsItem_UIInterfaces                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_LootIcon_C*              K2Node_Event_thisIcon_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController_2      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LootIcon_C*              K2Node_Event_thisIcon                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_hovering                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_height                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_width                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemUIInterfaces_C>K2Node_DynamicCast_AsItem_UIInterfaces_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IItemUIInterfaces_C>K2Node_DynamicCast_AsItem_UIInterfaces_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldAddToList_shouldShow                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FQtnItemData>        Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// TArray<struct FQtnItemData>        K2Node_Select_Default                                            (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Inventory_Grid_Widget_C::ExecuteUbergraph_BP_Inventory_Grid_Widget(int32 EntryPoint, TArray<struct FQtnItemData>& K2Node_CustomEvent_ItemData, TArray<enum class EQtnSubCategories>& K2Node_CustomEvent_Categories, enum class EQtn_EquipmentCategory Temp_byte_Variable, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UBP_LootIcon_C* CallFunc_Create_ReturnValue, enum class EQtn_EquipmentCategory K2Node_CustomEvent_EquipmentCategory, class UUserWidget* K2Node_CustomEvent_OwningMenu, TArray<enum class EQtnSubCategories>& K2Node_CustomEvent_Subcategories, class UPanelSlot* CallFunc_AddChild_ReturnValue, TArray<struct FQtnItemData>& Temp_struct_Variable, class UBP_LootIcon_C* K2Node_CustomEvent_Item_Icon, class UBP_LootIcon_C* K2Node_Event_LootObject, int32 K2Node_Event_itemIndex, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, class AQtnBodyPawn* CallFunc_GetOriginalBodyPawn_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, TArray<struct FQtnItemData>& CallFunc_GetVaultWeapons_ReturnValue, TScriptInterface<class IItemUIInterfaces_C> K2Node_DynamicCast_AsItem_UIInterfaces, bool K2Node_DynamicCast_bSuccess, class UBP_LootIcon_C* K2Node_Event_thisIcon_1, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController_2, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin_2, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class UBP_LootIcon_C* K2Node_Event_thisIcon, bool K2Node_Event_hovering, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float K2Node_CustomEvent_height, float K2Node_CustomEvent_width, TScriptInterface<class IItemUIInterfaces_C> K2Node_DynamicCast_AsItem_UIInterfaces_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TScriptInterface<class IItemUIInterfaces_C> K2Node_DynamicCast_AsItem_UIInterfaces_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_MatchesTag_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetChildIndex_ReturnValue, const struct FQtnItemData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_ShouldAddToList_shouldShow, TArray<struct FQtnItemData>& Temp_struct_Variable_1, TArray<struct FQtnItemData>& K2Node_Select_Default, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Inventory_Grid_Widget_C", "ExecuteUbergraph_BP_Inventory_Grid_Widget");

	Params::UBP_Inventory_Grid_Widget_C_ExecuteUbergraph_BP_Inventory_Grid_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ItemData = K2Node_CustomEvent_ItemData;
	Parms.K2Node_CustomEvent_Categories = K2Node_CustomEvent_Categories;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_EquipmentCategory = K2Node_CustomEvent_EquipmentCategory;
	Parms.K2Node_CustomEvent_OwningMenu = K2Node_CustomEvent_OwningMenu;
	Parms.K2Node_CustomEvent_Subcategories = K2Node_CustomEvent_Subcategories;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CustomEvent_Item_Icon = K2Node_CustomEvent_Item_Icon;
	Parms.K2Node_Event_LootObject = K2Node_Event_LootObject;
	Parms.K2Node_Event_itemIndex = K2Node_Event_itemIndex;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController_1 = CallFunc_GetLocalPlayerControllerBP_localPlayerController_1;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin_1 = CallFunc_GetLocalPlayerControllerBP_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetOriginalBodyPawn_ReturnValue = CallFunc_GetOriginalBodyPawn_ReturnValue;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.CallFunc_GetVaultWeapons_ReturnValue = CallFunc_GetVaultWeapons_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_UIInterfaces = K2Node_DynamicCast_AsItem_UIInterfaces;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_thisIcon_1 = K2Node_Event_thisIcon_1;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController_2 = CallFunc_GetLocalPlayerControllerBP_localPlayerController_2;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin_2 = CallFunc_GetLocalPlayerControllerBP_outputPin_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.K2Node_Event_thisIcon = K2Node_Event_thisIcon;
	Parms.K2Node_Event_hovering = K2Node_Event_hovering;
	Parms.CallFunc_GetBodyInventory_ReturnValue_1 = CallFunc_GetBodyInventory_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_height = K2Node_CustomEvent_height;
	Parms.K2Node_CustomEvent_width = K2Node_CustomEvent_width;
	Parms.K2Node_DynamicCast_AsItem_UIInterfaces_1 = K2Node_DynamicCast_AsItem_UIInterfaces_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_UIInterfaces_2 = K2Node_DynamicCast_AsItem_UIInterfaces_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetChildIndex_ReturnValue = CallFunc_GetChildIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_ShouldAddToList_shouldShow = CallFunc_ShouldAddToList_shouldShow;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


