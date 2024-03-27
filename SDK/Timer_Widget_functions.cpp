#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Timer_Widget.Timer_Widget_C
// (None)

class UClass* UTimer_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Timer_Widget_C");

	return Clss;
}


// Timer_Widget_C Timer_Widget.Default__Timer_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTimer_Widget_C* UTimer_Widget_C::GetDefaultObj()
{
	static class UTimer_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimer_Widget_C*>(UTimer_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Timer_Widget.Timer_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTimer_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Timer_Widget_C", "PreConstruct");

	Params::UTimer_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Timer_Widget.Timer_Widget_C.UpdateTimestamp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Timestamp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTimer_Widget_C::UpdateTimestamp(int32 Timestamp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Timer_Widget_C", "UpdateTimestamp");

	Params::UTimer_Widget_C_UpdateTimestamp_Params Parms{};

	Parms.Timestamp = Timestamp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Timer_Widget.Timer_Widget_C.UpdateHeaderAndTimestamp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewHeader                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        NewTimestamp                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UTimer_Widget_C::UpdateHeaderAndTimestamp(class FText NewHeader, class FText NewTimestamp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Timer_Widget_C", "UpdateHeaderAndTimestamp");

	Params::UTimer_Widget_C_UpdateHeaderAndTimestamp_Params Parms{};

	Parms.NewHeader = NewHeader;
	Parms.NewTimestamp = NewTimestamp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Timer_Widget.Timer_Widget_C.ToggleDarkMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantWhite                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTimer_Widget_C::ToggleDarkMode(bool WantWhite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Timer_Widget_C", "ToggleDarkMode");

	Params::UTimer_Widget_C_ToggleDarkMode_Params Parms{};

	Parms.WantWhite = WantWhite;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Timer_Widget.Timer_Widget_C.ExecuteUbergraph_Timer_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Timestamp                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_NewHeader                                     (None)
// class FText                        K2Node_CustomEvent_NewTimestamp                                  (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// bool                               K2Node_CustomEvent_WantWhite                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTimer_Widget_C::ExecuteUbergraph_Timer_Widget(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_Timestamp, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, class FText K2Node_CustomEvent_NewHeader, class FText K2Node_CustomEvent_NewTimestamp, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool K2Node_CustomEvent_WantWhite, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Timer_Widget_C", "ExecuteUbergraph_Timer_Widget");

	Params::UTimer_Widget_C_ExecuteUbergraph_Timer_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Timestamp = K2Node_CustomEvent_Timestamp;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.K2Node_CustomEvent_NewHeader = K2Node_CustomEvent_NewHeader;
	Parms.K2Node_CustomEvent_NewTimestamp = K2Node_CustomEvent_NewTimestamp;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_CustomEvent_WantWhite = K2Node_CustomEvent_WantWhite;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


