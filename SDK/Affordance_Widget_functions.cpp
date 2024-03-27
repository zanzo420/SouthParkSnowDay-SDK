#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Affordance_Widget.Affordance_Widget_C
// (None)

class UClass* UAffordance_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Affordance_Widget_C");

	return Clss;
}


// Affordance_Widget_C Affordance_Widget.Default__Affordance_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAffordance_Widget_C* UAffordance_Widget_C::GetDefaultObj()
{
	static class UAffordance_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAffordance_Widget_C*>(UAffordance_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Affordance_Widget.Affordance_Widget_C.InputChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        QtnInput                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAffordance_Widget_C::InputChange(class FText QtnInput, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Affordance_Widget_C", "InputChange");

	Params::UAffordance_Widget_C_InputChange_Params Parms{};

	Parms.QtnInput = QtnInput;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Affordance_Widget.Affordance_Widget_C.FormatIfDisabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Affordance                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

void UAffordance_Widget_C::FormatIfDisabled(class FText Affordance, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Affordance_Widget_C", "FormatIfDisabled");

	Params::UAffordance_Widget_C_FormatIfDisabled_Params Parms{};

	Parms.Affordance = Affordance;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Affordance_Widget.Affordance_Widget_C.ToggleDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantDisabled                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAffordance_Widget_C::ToggleDisabled(bool WantDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Affordance_Widget_C", "ToggleDisabled");

	Params::UAffordance_Widget_C_ToggleDisabled_Params Parms{};

	Parms.WantDisabled = WantDisabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Affordance_Widget.Affordance_Widget_C.SetAffordanceText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PreInput                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               HasPreInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        QtnInput                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               HasInput                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Signifier                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAffordance_Widget_C::SetAffordanceText(class FText PreInput, bool HasPreInput, class FText QtnInput, bool HasInput, class FText Signifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Affordance_Widget_C", "SetAffordanceText");

	Params::UAffordance_Widget_C_SetAffordanceText_Params Parms{};

	Parms.PreInput = PreInput;
	Parms.HasPreInput = HasPreInput;
	Parms.QtnInput = QtnInput;
	Parms.HasInput = HasInput;
	Parms.Signifier = Signifier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Affordance_Widget.Affordance_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAffordance_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Affordance_Widget_C", "PreConstruct");

	Params::UAffordance_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Affordance_Widget.Affordance_Widget_C.ExecuteUbergraph_Affordance_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_PreInput                                      (None)
// bool                               K2Node_CustomEvent_HasPreInput                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_QtnInput                                      (None)
// bool                               K2Node_CustomEvent_HasInput                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_Signifier                                     (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_StaticParseInputText_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)

void UAffordance_Widget_C::ExecuteUbergraph_Affordance_Widget(int32 EntryPoint, class FText K2Node_CustomEvent_PreInput, bool K2Node_CustomEvent_HasPreInput, class FText K2Node_CustomEvent_QtnInput, bool K2Node_CustomEvent_HasInput, class FText K2Node_CustomEvent_Signifier, bool K2Node_Event_IsDesignTime, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const class FString& CallFunc_StaticParseInputText_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, class FText CallFunc_Format_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Affordance_Widget_C", "ExecuteUbergraph_Affordance_Widget");

	Params::UAffordance_Widget_C_ExecuteUbergraph_Affordance_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_PreInput = K2Node_CustomEvent_PreInput;
	Parms.K2Node_CustomEvent_HasPreInput = K2Node_CustomEvent_HasPreInput;
	Parms.K2Node_CustomEvent_QtnInput = K2Node_CustomEvent_QtnInput;
	Parms.K2Node_CustomEvent_HasInput = K2Node_CustomEvent_HasInput;
	Parms.K2Node_CustomEvent_Signifier = K2Node_CustomEvent_Signifier;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_StaticParseInputText_ReturnValue = CallFunc_StaticParseInputText_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


