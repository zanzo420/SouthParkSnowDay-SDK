#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass OptionsCheckboxWidget.OptionsCheckboxWidget_C
// (None)

class UClass* UOptionsCheckboxWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptionsCheckboxWidget_C");

	return Clss;
}


// OptionsCheckboxWidget_C OptionsCheckboxWidget.Default__OptionsCheckboxWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOptionsCheckboxWidget_C* UOptionsCheckboxWidget_C::GetDefaultObj()
{
	static class UOptionsCheckboxWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptionsCheckboxWidget_C*>(UOptionsCheckboxWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OptionsCheckboxWidget.OptionsCheckboxWidget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UOptionsCheckboxWidget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsCheckboxWidget_C", "OnFocusReceived");

	Params::UOptionsCheckboxWidget_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsCheckboxWidget.OptionsCheckboxWidget_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsCheckboxWidget_C::SetSelected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsCheckboxWidget_C", "SetSelected");

	Params::UOptionsCheckboxWidget_C_SetSelected_Params Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsCheckboxWidget.OptionsCheckboxWidget_C.Event_SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsCheckboxWidget_C::Event_SetSelected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsCheckboxWidget_C", "Event_SetSelected");

	Params::UOptionsCheckboxWidget_C_Event_SetSelected_Params Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsCheckboxWidget.OptionsCheckboxWidget_C.Event_ToggleCheckbox
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsCheckboxWidget_C::Event_ToggleCheckbox()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsCheckboxWidget_C", "Event_ToggleCheckbox");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsCheckboxWidget.OptionsCheckboxWidget_C.SetValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TURR                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsCheckboxWidget_C::SetValue(bool TURR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsCheckboxWidget_C", "SetValue");

	Params::UOptionsCheckboxWidget_C_SetValue_Params Parms{};

	Parms.TURR = TURR;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsCheckboxWidget.OptionsCheckboxWidget_C.InitCheckboxWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsCheckboxWidget_C::InitCheckboxWidget(class FText Title, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsCheckboxWidget_C", "InitCheckboxWidget");

	Params::UOptionsCheckboxWidget_C_InitCheckboxWidget_Params Parms{};

	Parms.Title = Title;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsCheckboxWidget.OptionsCheckboxWidget_C.BndEvt__CheckboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsCheckboxWidget_C::BndEvt__CheckboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsCheckboxWidget_C", "BndEvt__CheckboxButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsCheckboxWidget.OptionsCheckboxWidget_C.Event_SetInactive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Inactive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsCheckboxWidget_C::Event_SetInactive(bool Inactive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsCheckboxWidget_C", "Event_SetInactive");

	Params::UOptionsCheckboxWidget_C_Event_SetInactive_Params Parms{};

	Parms.Inactive = Inactive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsCheckboxWidget.OptionsCheckboxWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsCheckboxWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsCheckboxWidget_C", "PreConstruct");

	Params::UOptionsCheckboxWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsCheckboxWidget.OptionsCheckboxWidget_C.SetValueWithoutSideEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TURR                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsCheckboxWidget_C::SetValueWithoutSideEffects(bool TURR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsCheckboxWidget_C", "SetValueWithoutSideEffects");

	Params::UOptionsCheckboxWidget_C_SetValueWithoutSideEffects_Params Parms{};

	Parms.TURR = TURR;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsCheckboxWidget.OptionsCheckboxWidget_C.ExecuteUbergraph_OptionsCheckboxWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_true_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_Title                                         (None)
// bool                               K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_isSelected                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isSelected                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               K2Node_CustomEvent_inactive                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// bool                               K2Node_CustomEvent_true                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)

void UOptionsCheckboxWidget_C::ExecuteUbergraph_OptionsCheckboxWidget(int32 EntryPoint, bool K2Node_CustomEvent_true_1, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_CustomEvent_Title, bool K2Node_CustomEvent_Value, bool K2Node_CustomEvent_isSelected, bool K2Node_Event_isSelected, float CallFunc_Conv_BoolToFloat_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_CustomEvent_inactive, bool K2Node_Event_IsDesignTime, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool K2Node_CustomEvent_true, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsCheckboxWidget_C", "ExecuteUbergraph_OptionsCheckboxWidget");

	Params::UOptionsCheckboxWidget_C_ExecuteUbergraph_OptionsCheckboxWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_true_1 = K2Node_CustomEvent_true_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_Title = K2Node_CustomEvent_Title;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_CustomEvent_isSelected = K2Node_CustomEvent_isSelected;
	Parms.K2Node_Event_isSelected = K2Node_Event_isSelected;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_CustomEvent_inactive = K2Node_CustomEvent_inactive;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_CustomEvent_true = K2Node_CustomEvent_true;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsCheckboxWidget.OptionsCheckboxWidget_C.CheckboxValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsCheckboxWidget_C::CheckboxValueChanged__DelegateSignature(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsCheckboxWidget_C", "CheckboxValueChanged__DelegateSignature");

	Params::UOptionsCheckboxWidget_C_CheckboxValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


