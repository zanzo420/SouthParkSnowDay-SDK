#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HorizontalRadialbuttonWidget.HorizontalRadialbuttonWidget_C
// (None)

class UClass* UHorizontalRadialbuttonWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HorizontalRadialbuttonWidget_C");

	return Clss;
}


// HorizontalRadialbuttonWidget_C HorizontalRadialbuttonWidget.Default__HorizontalRadialbuttonWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHorizontalRadialbuttonWidget_C* UHorizontalRadialbuttonWidget_C::GetDefaultObj()
{
	static class UHorizontalRadialbuttonWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHorizontalRadialbuttonWidget_C*>(UHorizontalRadialbuttonWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HorizontalRadialbuttonWidget.HorizontalRadialbuttonWidget_C.SetHoveredState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallHoverEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHorizontalRadialbuttonWidget_C::SetHoveredState(bool IsHovered, bool CallHoverEvent, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalRadialbuttonWidget_C", "SetHoveredState");

	Params::UHorizontalRadialbuttonWidget_C_SetHoveredState_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.CallHoverEvent = CallHoverEvent;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizontalRadialbuttonWidget.HorizontalRadialbuttonWidget_C.SetRadialButtonSelectionState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallPressedEvent_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHorizontalRadialbuttonWidget_C::SetRadialButtonSelectionState(bool IsSelected_, bool CallPressedEvent_, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalRadialbuttonWidget_C", "SetRadialButtonSelectionState");

	Params::UHorizontalRadialbuttonWidget_C_SetRadialButtonSelectionState_Params Parms{};

	Parms.IsSelected_ = IsSelected_;
	Parms.CallPressedEvent_ = CallPressedEvent_;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HorizontalRadialbuttonWidget.HorizontalRadialbuttonWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHorizontalRadialbuttonWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalRadialbuttonWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HorizontalRadialbuttonWidget.HorizontalRadialbuttonWidget_C.BndEvt__HorizontalRadialbuttonWidget_Button_Primary_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHorizontalRadialbuttonWidget_C::BndEvt__HorizontalRadialbuttonWidget_Button_Primary_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalRadialbuttonWidget_C", "BndEvt__HorizontalRadialbuttonWidget_Button_Primary_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HorizontalRadialbuttonWidget.HorizontalRadialbuttonWidget_C.BndEvt__HorizontalRadialbuttonWidget_Button_Primary_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHorizontalRadialbuttonWidget_C::BndEvt__HorizontalRadialbuttonWidget_Button_Primary_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalRadialbuttonWidget_C", "BndEvt__HorizontalRadialbuttonWidget_Button_Primary_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HorizontalRadialbuttonWidget.HorizontalRadialbuttonWidget_C.BndEvt__HorizontalRadialbuttonWidget_Button_Primary_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHorizontalRadialbuttonWidget_C::BndEvt__HorizontalRadialbuttonWidget_Button_Primary_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalRadialbuttonWidget_C", "BndEvt__HorizontalRadialbuttonWidget_Button_Primary_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HorizontalRadialbuttonWidget.HorizontalRadialbuttonWidget_C.ExecuteUbergraph_HorizontalRadialbuttonWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHorizontalRadialbuttonWidget_C::ExecuteUbergraph_HorizontalRadialbuttonWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalRadialbuttonWidget_C", "ExecuteUbergraph_HorizontalRadialbuttonWidget");

	Params::UHorizontalRadialbuttonWidget_C_ExecuteUbergraph_HorizontalRadialbuttonWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


