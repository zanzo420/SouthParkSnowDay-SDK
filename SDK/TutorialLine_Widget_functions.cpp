#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TutorialLine_Widget.TutorialLine_Widget_C
// (None)

class UClass* UTutorialLine_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TutorialLine_Widget_C");

	return Clss;
}


// TutorialLine_Widget_C TutorialLine_Widget.Default__TutorialLine_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTutorialLine_Widget_C* UTutorialLine_Widget_C::GetDefaultObj()
{
	static class UTutorialLine_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTutorialLine_Widget_C*>(UTutorialLine_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TutorialLine_Widget.TutorialLine_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTutorialLine_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialLine_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TutorialLine_Widget.TutorialLine_Widget_C.RefreshText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTutorialLine_Widget_C::RefreshText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialLine_Widget_C", "RefreshText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TutorialLine_Widget.TutorialLine_Widget_C.FormatText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsingMouseAndKeyboard                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTutorialLine_Widget_C::FormatText(bool IsUsingMouseAndKeyboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialLine_Widget_C", "FormatText");

	Params::UTutorialLine_Widget_C_FormatText_Params Parms{};

	Parms.IsUsingMouseAndKeyboard = IsUsingMouseAndKeyboard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialLine_Widget.TutorialLine_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTutorialLine_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialLine_Widget_C", "PreConstruct");

	Params::UTutorialLine_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialLine_Widget.TutorialLine_Widget_C.SetupFromTutorialSubgoal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnTutorialInstanceData    TutorialInstance                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FQtnTutorialSubAction       SubGoalInst                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UTutorialLine_Widget_C::SetupFromTutorialSubgoal(const struct FQtnTutorialInstanceData& TutorialInstance, const struct FQtnTutorialSubAction& SubGoalInst)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialLine_Widget_C", "SetupFromTutorialSubgoal");

	Params::UTutorialLine_Widget_C_SetupFromTutorialSubgoal_Params Parms{};

	Parms.TutorialInstance = TutorialInstance;
	Parms.SubGoalInst = SubGoalInst;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialLine_Widget.TutorialLine_Widget_C.UpdateTutorialSubgoal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnTutorialSubAction       SubGoal                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTutorialLine_Widget_C::UpdateTutorialSubgoal(const struct FQtnTutorialSubAction& SubGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialLine_Widget_C", "UpdateTutorialSubgoal");

	Params::UTutorialLine_Widget_C_UpdateTutorialSubgoal_Params Parms{};

	Parms.SubGoal = SubGoal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialLine_Widget.TutorialLine_Widget_C.OnCultureChangedEvent
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTutorialLine_Widget_C::OnCultureChangedEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialLine_Widget_C", "OnCultureChangedEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TutorialLine_Widget.TutorialLine_Widget_C.ExecuteUbergraph_TutorialLine_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isUsingMouseAndKeyboard                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_StaticParseInputText_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_DecorateWithRichTextStyle_ReturnValue                   (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnTutorialInstanceData    K2Node_CustomEvent_TutorialInstance                              (None)
// struct FQtnTutorialSubAction       K2Node_CustomEvent_SubGoalInst                                   (None)
// class FText                        CallFunc_GetTutorialSubGoalText_OutTitle                         (None)
// class FText                        CallFunc_GetTutorialSubGoalText_OutMessage                       (None)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_2                                          (None)
// struct FQtnTutorialSubAction       K2Node_CustomEvent_SubGoal                                       (None)
// class UQtnTutorial*                CallFunc_GetQtnTutorialObject_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_GetTutorialSubGoalText_OutTitle_1                       (None)
// class FText                        CallFunc_GetTutorialSubGoalText_OutMessage_1                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_FormatSubgoalText_ReturnValue                           (None)

void UTutorialLine_Widget_C::ExecuteUbergraph_TutorialLine_Widget(int32 EntryPoint, float Temp_float_Variable, bool CallFunc_IsValidClass_ReturnValue, float Temp_float_Variable_1, bool Temp_bool_Variable, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable_1, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_CustomEvent_isUsingMouseAndKeyboard, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_StaticParseInputText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool Temp_bool_IsClosed_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_DecorateWithRichTextStyle_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, float K2Node_Select_Default, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_Select_Default_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FQtnTutorialInstanceData& K2Node_CustomEvent_TutorialInstance, const struct FQtnTutorialSubAction& K2Node_CustomEvent_SubGoalInst, class FText CallFunc_GetTutorialSubGoalText_OutTitle, class FText CallFunc_GetTutorialSubGoalText_OutMessage, bool K2Node_SwitchEnum_CmpSuccess_2, bool Temp_bool_Variable_2, class FText K2Node_Select_Default_2, const struct FQtnTutorialSubAction& K2Node_CustomEvent_SubGoal, class UQtnTutorial* CallFunc_GetQtnTutorialObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetTutorialSubGoalText_OutTitle_1, class FText CallFunc_GetTutorialSubGoalText_OutMessage_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_FormatSubgoalText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialLine_Widget_C", "ExecuteUbergraph_TutorialLine_Widget");

	Params::UTutorialLine_Widget_C_ExecuteUbergraph_TutorialLine_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_CustomEvent_isUsingMouseAndKeyboard = K2Node_CustomEvent_isUsingMouseAndKeyboard;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_StaticParseInputText_ReturnValue = CallFunc_StaticParseInputText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_DecorateWithRichTextStyle_ReturnValue = CallFunc_DecorateWithRichTextStyle_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_CustomEvent_TutorialInstance = K2Node_CustomEvent_TutorialInstance;
	Parms.K2Node_CustomEvent_SubGoalInst = K2Node_CustomEvent_SubGoalInst;
	Parms.CallFunc_GetTutorialSubGoalText_OutTitle = CallFunc_GetTutorialSubGoalText_OutTitle;
	Parms.CallFunc_GetTutorialSubGoalText_OutMessage = CallFunc_GetTutorialSubGoalText_OutMessage;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_CustomEvent_SubGoal = K2Node_CustomEvent_SubGoal;
	Parms.CallFunc_GetQtnTutorialObject_ReturnValue = CallFunc_GetQtnTutorialObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetTutorialSubGoalText_OutTitle_1 = CallFunc_GetTutorialSubGoalText_OutTitle_1;
	Parms.CallFunc_GetTutorialSubGoalText_OutMessage_1 = CallFunc_GetTutorialSubGoalText_OutMessage_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_FormatSubgoalText_ReturnValue = CallFunc_FormatSubgoalText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialLine_Widget.TutorialLine_Widget_C.MyGoalComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTutorialLine_Widget_C*      MyLine                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTutorialLine_Widget_C::MyGoalComplete__DelegateSignature(class UTutorialLine_Widget_C* MyLine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TutorialLine_Widget_C", "MyGoalComplete__DelegateSignature");

	Params::UTutorialLine_Widget_C_MyGoalComplete__DelegateSignature_Params Parms{};

	Parms.MyLine = MyLine;

	UObject::ProcessEvent(Func, &Parms);

}

}


