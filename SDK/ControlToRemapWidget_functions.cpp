#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ControlToRemapWidget.ControlToRemapWidget_C
// (None)

class UClass* UControlToRemapWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlToRemapWidget_C");

	return Clss;
}


// ControlToRemapWidget_C ControlToRemapWidget.Default__ControlToRemapWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UControlToRemapWidget_C* UControlToRemapWidget_C::GetDefaultObj()
{
	static class UControlToRemapWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlToRemapWidget_C*>(UControlToRemapWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlToRemapWidget.ControlToRemapWidget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UControlToRemapWidget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlToRemapWidget_C", "OnFocusReceived");

	Params::UControlToRemapWidget_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ControlToRemapWidget.ControlToRemapWidget_C.NameToText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        InName                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        OutText                                                          (Parm, OutParm)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_StaticParseInputText_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UControlToRemapWidget_C::NameToText(class FName InName, class FText* OutText, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_StaticParseInputText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlToRemapWidget_C", "NameToText");

	Params::UControlToRemapWidget_C_NameToText_Params Parms{};

	Parms.InName = InName;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_StaticParseInputText_ReturnValue = CallFunc_StaticParseInputText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

}


// Function ControlToRemapWidget.ControlToRemapWidget_C.BndEvt__OptionsMenuButtonWidget_K2Node_ComponentBoundEvent_1_OptionsButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UControlToRemapWidget_C::BndEvt__OptionsMenuButtonWidget_K2Node_ComponentBoundEvent_1_OptionsButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlToRemapWidget_C", "BndEvt__OptionsMenuButtonWidget_K2Node_ComponentBoundEvent_1_OptionsButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ControlToRemapWidget.ControlToRemapWidget_C.InitControlRemapItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnRebindableInput         RebindableInput                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UControlRemappingWidget_C*   MyRemapWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UControlToRemapWidget_C::InitControlRemapItem(const struct FQtnRebindableInput& RebindableInput, class UControlRemappingWidget_C* MyRemapWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlToRemapWidget_C", "InitControlRemapItem");

	Params::UControlToRemapWidget_C_InitControlRemapItem_Params Parms{};

	Parms.RebindableInput = RebindableInput;
	Parms.MyRemapWidget = MyRemapWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlToRemapWidget.ControlToRemapWidget_C.SetRemapEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UControlToRemapWidget_C::SetRemapEnabled(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlToRemapWidget_C", "SetRemapEnabled");

	Params::UControlToRemapWidget_C_SetRemapEnabled_Params Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlToRemapWidget.ControlToRemapWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UControlToRemapWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlToRemapWidget_C", "PreConstruct");

	Params::UControlToRemapWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlToRemapWidget.ControlToRemapWidget_C.ExecuteUbergraph_ControlToRemapWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnRebindableInput         K2Node_CustomEvent_RebindableInput                               (None)
// class UControlRemappingWidget_C*   K2Node_CustomEvent_myRemapWidget                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_NameToText_OutText                                      (None)
// bool                               K2Node_CustomEvent_isEnabled                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_NameToText_OutText_1                                    (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UControlToRemapWidget_C::ExecuteUbergraph_ControlToRemapWidget(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FQtnRebindableInput& K2Node_CustomEvent_RebindableInput, class UControlRemappingWidget_C* K2Node_CustomEvent_myRemapWidget, class FText CallFunc_NameToText_OutText, bool K2Node_CustomEvent_isEnabled, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_NameToText_OutText_1, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlToRemapWidget_C", "ExecuteUbergraph_ControlToRemapWidget");

	Params::UControlToRemapWidget_C_ExecuteUbergraph_ControlToRemapWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_RebindableInput = K2Node_CustomEvent_RebindableInput;
	Parms.K2Node_CustomEvent_myRemapWidget = K2Node_CustomEvent_myRemapWidget;
	Parms.CallFunc_NameToText_OutText = CallFunc_NameToText_OutText;
	Parms.K2Node_CustomEvent_isEnabled = K2Node_CustomEvent_isEnabled;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_NameToText_OutText_1 = CallFunc_NameToText_OutText_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


