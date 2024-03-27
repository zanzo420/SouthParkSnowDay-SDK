#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_TopNav_Widget.BP_TopNav_Widget_C
// (None)

class UClass* UBP_TopNav_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TopNav_Widget_C");

	return Clss;
}


// BP_TopNav_Widget_C BP_TopNav_Widget.Default__BP_TopNav_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TopNav_Widget_C* UBP_TopNav_Widget_C::GetDefaultObj()
{
	static class UBP_TopNav_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TopNav_Widget_C*>(UBP_TopNav_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TopNav_Widget.BP_TopNav_Widget_C.InitTopNav
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EQtnSubCategories>Categories                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBP_Inventory_Grid_Widget_C* InventoryGrid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TopNav_Widget_C::InitTopNav(TArray<enum class EQtnSubCategories>& Categories, class UBP_Inventory_Grid_Widget_C* InventoryGrid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TopNav_Widget_C", "InitTopNav");

	Params::UBP_TopNav_Widget_C_InitTopNav_Params Parms{};

	Parms.Categories = Categories;
	Parms.InventoryGrid = InventoryGrid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TopNav_Widget.BP_TopNav_Widget_C.TabSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTopNavTab_Widget_C*         SelectedTab                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TopNav_Widget_C::TabSelected(class UTopNavTab_Widget_C* SelectedTab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TopNav_Widget_C", "TabSelected");

	Params::UBP_TopNav_Widget_C_TabSelected_Params Parms{};

	Parms.SelectedTab = SelectedTab;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TopNav_Widget.BP_TopNav_Widget_C.ExecuteUbergraph_BP_TopNav_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EQtnSubCategories>K2Node_CustomEvent_Categories                                    (ConstParm, ReferenceParm)
// class UBP_Inventory_Grid_Widget_C* K2Node_CustomEvent_inventoryGrid                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnSubCategories       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTopNavTab_Widget_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTopNavTab_Widget_C*         K2Node_CustomEvent_SelectedTab                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTopNavTab_Widget_C*         K2Node_DynamicCast_AsTop_Nav_Tab_Widget                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TopNav_Widget_C::ExecuteUbergraph_BP_TopNav_Widget(int32 EntryPoint, TArray<enum class EQtnSubCategories>& K2Node_CustomEvent_Categories, class UBP_Inventory_Grid_Widget_C* K2Node_CustomEvent_inventoryGrid, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnSubCategories CallFunc_Array_Get_Item, class UTopNavTab_Widget_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UTopNavTab_Widget_C* K2Node_CustomEvent_SelectedTab, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UTopNavTab_Widget_C* K2Node_DynamicCast_AsTop_Nav_Tab_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TopNav_Widget_C", "ExecuteUbergraph_BP_TopNav_Widget");

	Params::UBP_TopNav_Widget_C_ExecuteUbergraph_BP_TopNav_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Categories = K2Node_CustomEvent_Categories;
	Parms.K2Node_CustomEvent_inventoryGrid = K2Node_CustomEvent_inventoryGrid;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.K2Node_CustomEvent_SelectedTab = K2Node_CustomEvent_SelectedTab;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsTop_Nav_Tab_Widget = K2Node_DynamicCast_AsTop_Nav_Tab_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


