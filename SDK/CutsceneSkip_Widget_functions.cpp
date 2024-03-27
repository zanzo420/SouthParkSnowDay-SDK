#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CutsceneSkip_Widget.CutsceneSkip_Widget_C
// (None)

class UClass* UCutsceneSkip_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CutsceneSkip_Widget_C");

	return Clss;
}


// CutsceneSkip_Widget_C CutsceneSkip_Widget.Default__CutsceneSkip_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCutsceneSkip_Widget_C* UCutsceneSkip_Widget_C::GetDefaultObj()
{
	static class UCutsceneSkip_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCutsceneSkip_Widget_C*>(UCutsceneSkip_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CutsceneSkip_Widget.CutsceneSkip_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCutsceneSkip_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneSkip_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneSkip_Widget.CutsceneSkip_Widget_C.UpdateSkipWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SkipRequested                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCutsceneSkip_Widget_C::UpdateSkipWidget(bool SkipRequested)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneSkip_Widget_C", "UpdateSkipWidget");

	Params::UCutsceneSkip_Widget_C_UpdateSkipWidget_Params Parms{};

	Parms.SkipRequested = SkipRequested;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneSkip_Widget.CutsceneSkip_Widget_C.HidePips
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCutsceneSkip_Widget_C::HidePips()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneSkip_Widget_C", "HidePips");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneSkip_Widget.CutsceneSkip_Widget_C.BndEvt__CutsceneSkip_Widget_BTN_Skip_K2Node_ComponentBoundEvent_0_ButtonHoldSuccess__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCutsceneSkip_Widget_C::BndEvt__CutsceneSkip_Widget_BTN_Skip_K2Node_ComponentBoundEvent_0_ButtonHoldSuccess__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneSkip_Widget_C", "BndEvt__CutsceneSkip_Widget_BTN_Skip_K2Node_ComponentBoundEvent_0_ButtonHoldSuccess__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneSkip_Widget.CutsceneSkip_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCutsceneSkip_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneSkip_Widget_C", "PreConstruct");

	Params::UCutsceneSkip_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneSkip_Widget.CutsceneSkip_Widget_C.ExecuteUbergraph_CutsceneSkip_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IOptionsSelectionInterface_C>K2Node_DynamicCast_AsOptions_Selection_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_SkipRequested                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UImage*>              K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// TScriptInterface<class IOptionsSelectionInterface_C>K2Node_DynamicCast_AsOptions_Selection_Interface_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_StaticParseInputText_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

void UCutsceneSkip_Widget_C::ExecuteUbergraph_CutsceneSkip_Widget(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IOptionsSelectionInterface_C> K2Node_DynamicCast_AsOptions_Selection_Interface, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_SkipRequested, enum class ESlateVisibility K2Node_Select_Default, TArray<class UImage*>& K2Node_MakeArray_Array, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, TScriptInterface<class IOptionsSelectionInterface_C> K2Node_DynamicCast_AsOptions_Selection_Interface_1, bool K2Node_DynamicCast_bSuccess_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_StaticParseInputText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneSkip_Widget_C", "ExecuteUbergraph_CutsceneSkip_Widget");

	Params::UCutsceneSkip_Widget_C_ExecuteUbergraph_CutsceneSkip_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsOptions_Selection_Interface = K2Node_DynamicCast_AsOptions_Selection_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_SkipRequested = K2Node_CustomEvent_SkipRequested;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsOptions_Selection_Interface_1 = K2Node_DynamicCast_AsOptions_Selection_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_StaticParseInputText_ReturnValue = CallFunc_StaticParseInputText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CutsceneSkip_Widget.CutsceneSkip_Widget_C.ButtonHoldSuccess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCutsceneSkip_Widget_C::ButtonHoldSuccess__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneSkip_Widget_C", "ButtonHoldSuccess__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CutsceneSkip_Widget.CutsceneSkip_Widget_C.ButtonAdded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCutsceneSkip_Widget_C::ButtonAdded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CutsceneSkip_Widget_C", "ButtonAdded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


