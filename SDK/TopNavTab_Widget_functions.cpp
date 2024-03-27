#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TopNavTab_Widget.TopNavTab_Widget_C
// (None)

class UClass* UTopNavTab_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TopNavTab_Widget_C");

	return Clss;
}


// TopNavTab_Widget_C TopNavTab_Widget.Default__TopNavTab_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTopNavTab_Widget_C* UTopNavTab_Widget_C::GetDefaultObj()
{
	static class UTopNavTab_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTopNavTab_Widget_C*>(UTopNavTab_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TopNavTab_Widget.TopNavTab_Widget_C.SetTextImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    Imge                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CategoryText                                                     (Edit, BlueprintVisible)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopNavTab_Widget_C::SetTextImage(class UTexture* Imge, class FText CategoryText, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopNavTab_Widget_C", "SetTextImage");

	Params::UTopNavTab_Widget_C_SetTextImage_Params Parms{};

	Parms.Imge = Imge;
	Parms.CategoryText = CategoryText;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopNavTab_Widget.TopNavTab_Widget_C.InitTopNavTab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnSubCategories       Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Inventory_Grid_Widget_C* InventoryGrid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopNavTab_Widget_C::InitTopNavTab(enum class EQtnSubCategories Category, class UBP_Inventory_Grid_Widget_C* InventoryGrid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopNavTab_Widget_C", "InitTopNavTab");

	Params::UTopNavTab_Widget_C_InitTopNavTab_Params Parms{};

	Parms.Category = Category;
	Parms.InventoryGrid = InventoryGrid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopNavTab_Widget.TopNavTab_Widget_C.BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTopNavTab_Widget_C::BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopNavTab_Widget_C", "BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TopNavTab_Widget.TopNavTab_Widget_C.ToggleSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTopNavTab_Widget_C::ToggleSelected(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopNavTab_Widget_C", "ToggleSelected");

	Params::UTopNavTab_Widget_C_ToggleSelected_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopNavTab_Widget.TopNavTab_Widget_C.BndEvt__Button_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTopNavTab_Widget_C::BndEvt__Button_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopNavTab_Widget_C", "BndEvt__Button_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TopNavTab_Widget.TopNavTab_Widget_C.BndEvt__Button_Category_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTopNavTab_Widget_C::BndEvt__Button_Category_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopNavTab_Widget_C", "BndEvt__Button_Category_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TopNavTab_Widget.TopNavTab_Widget_C.ExecuteUbergraph_TopNavTab_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnSubCategories       K2Node_CustomEvent_Category                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Inventory_Grid_Widget_C* K2Node_CustomEvent_inventoryGrid                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Selected                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopNavTab_Widget_C::ExecuteUbergraph_TopNavTab_Widget(int32 EntryPoint, enum class EQtnSubCategories K2Node_CustomEvent_Category, class UBP_Inventory_Grid_Widget_C* K2Node_CustomEvent_inventoryGrid, bool K2Node_CustomEvent_Selected, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopNavTab_Widget_C", "ExecuteUbergraph_TopNavTab_Widget");

	Params::UTopNavTab_Widget_C_ExecuteUbergraph_TopNavTab_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Category = K2Node_CustomEvent_Category;
	Parms.K2Node_CustomEvent_inventoryGrid = K2Node_CustomEvent_inventoryGrid;
	Parms.K2Node_CustomEvent_Selected = K2Node_CustomEvent_Selected;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TopNavTab_Widget.TopNavTab_Widget_C.CategorySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnSubCategories       Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTopNavTab_Widget_C::CategorySelected__DelegateSignature(enum class EQtnSubCategories Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TopNavTab_Widget_C", "CategorySelected__DelegateSignature");

	Params::UTopNavTab_Widget_C_CategorySelected__DelegateSignature_Params Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

}

}


