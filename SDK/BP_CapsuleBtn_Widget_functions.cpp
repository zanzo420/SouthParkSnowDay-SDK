#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C
// (None)

class UClass* UBP_CapsuleBtn_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CapsuleBtn_Widget_C");

	return Clss;
}


// BP_CapsuleBtn_Widget_C BP_CapsuleBtn_Widget.Default__BP_CapsuleBtn_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CapsuleBtn_Widget_C* UBP_CapsuleBtn_Widget_C::GetDefaultObj()
{
	static class UBP_CapsuleBtn_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CapsuleBtn_Widget_C*>(UBP_CapsuleBtn_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.SequenceEvent__ENTRYPOINTBP_CapsuleBtn_Widget_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CapsuleBtn_Widget_C::SequenceEvent__ENTRYPOINTBP_CapsuleBtn_Widget_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "SequenceEvent__ENTRYPOINTBP_CapsuleBtn_Widget_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.SequenceEvent__ENTRYPOINTBP_CapsuleBtn_Widget_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CapsuleBtn_Widget_C::SequenceEvent__ENTRYPOINTBP_CapsuleBtn_Widget_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "SequenceEvent__ENTRYPOINTBP_CapsuleBtn_Widget_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.SequenceEvent__ENTRYPOINTBP_CapsuleBtn_Widget_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CapsuleBtn_Widget_C::SequenceEvent__ENTRYPOINTBP_CapsuleBtn_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "SequenceEvent__ENTRYPOINTBP_CapsuleBtn_Widget_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UBP_CapsuleBtn_Widget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "OnFocusReceived");

	Params::UBP_CapsuleBtn_Widget_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.Refresh Text State
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtn_UI_States_Enum     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ZeroConstructor, HasGetValueTypeHash)
// enum class EQtn_UI_States_Enum     CallFunc_Get_EQtn_Button_State_ButtonState                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_DecorateWithRichTextStyle_ReturnValue                   (None)

void UBP_CapsuleBtn_Widget_C::Refresh_Text_State(enum class EQtn_UI_States_Enum Temp_byte_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, enum class EQtn_UI_States_Enum CallFunc_Get_EQtn_Button_State_ButtonState, const class FString& K2Node_Select_Default, class FText CallFunc_DecorateWithRichTextStyle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "Refresh Text State");

	Params::UBP_CapsuleBtn_Widget_C_Refresh_Text_State_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.CallFunc_Get_EQtn_Button_State_ButtonState = CallFunc_Get_EQtn_Button_State_ButtonState;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_DecorateWithRichTextStyle_ReturnValue = CallFunc_DecorateWithRichTextStyle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.Check for Input String
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        InputText                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_StaticParseInputText_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UBP_CapsuleBtn_Widget_C::Check_for_Input_String(class FText InputText, const class FString& CallFunc_StaticParseInputText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "Check for Input String");

	Params::UBP_CapsuleBtn_Widget_C_Check_for_Input_String_Params Parms{};

	Parms.InputText = InputText;
	Parms.CallFunc_StaticParseInputText_ReturnValue = CallFunc_StaticParseInputText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.Get EQtn Button State
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EQtn_UI_States_Enum     ButtonState                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CapsuleBtn_Widget_C::Get_EQtn_Button_State(enum class EQtn_UI_States_Enum* ButtonState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "Get EQtn Button State");

	Params::UBP_CapsuleBtn_Widget_C_Get_EQtn_Button_State_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ButtonState != nullptr)
		*ButtonState = Parms.ButtonState;

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.Completed_A28CF2934C645C3633A7FE99F6461B83
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CapsuleBtn_Widget_C::Completed_A28CF2934C645C3633A7FE99F6461B83(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "Completed_A28CF2934C645C3633A7FE99F6461B83");

	Params::UBP_CapsuleBtn_Widget_C_Completed_A28CF2934C645C3633A7FE99F6461B83_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.Tick_A28CF2934C645C3633A7FE99F6461B83
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CapsuleBtn_Widget_C::Tick_A28CF2934C645C3633A7FE99F6461B83(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "Tick_A28CF2934C645C3633A7FE99F6461B83");

	Params::UBP_CapsuleBtn_Widget_C_Tick_A28CF2934C645C3633A7FE99F6461B83_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.Completed_F3740511400E1FA354CA359EE6227C64
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CapsuleBtn_Widget_C::Completed_F3740511400E1FA354CA359EE6227C64(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "Completed_F3740511400E1FA354CA359EE6227C64");

	Params::UBP_CapsuleBtn_Widget_C_Completed_F3740511400E1FA354CA359EE6227C64_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.Tick_F3740511400E1FA354CA359EE6227C64
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CapsuleBtn_Widget_C::Tick_F3740511400E1FA354CA359EE6227C64(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "Tick_F3740511400E1FA354CA359EE6227C64");

	Params::UBP_CapsuleBtn_Widget_C_Tick_F3740511400E1FA354CA359EE6227C64_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.Completed_7E5B829D4A8899BFB231C6B1870C2C35
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CapsuleBtn_Widget_C::Completed_7E5B829D4A8899BFB231C6B1870C2C35(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "Completed_7E5B829D4A8899BFB231C6B1870C2C35");

	Params::UBP_CapsuleBtn_Widget_C_Completed_7E5B829D4A8899BFB231C6B1870C2C35_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.Tick_7E5B829D4A8899BFB231C6B1870C2C35
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CapsuleBtn_Widget_C::Tick_7E5B829D4A8899BFB231C6B1870C2C35(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "Tick_7E5B829D4A8899BFB231C6B1870C2C35");

	Params::UBP_CapsuleBtn_Widget_C_Tick_7E5B829D4A8899BFB231C6B1870C2C35_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.Completed_732D043D4DC7103C51E7B886A5B84FBB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CapsuleBtn_Widget_C::Completed_732D043D4DC7103C51E7B886A5B84FBB(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "Completed_732D043D4DC7103C51E7B886A5B84FBB");

	Params::UBP_CapsuleBtn_Widget_C_Completed_732D043D4DC7103C51E7B886A5B84FBB_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.Tick_732D043D4DC7103C51E7B886A5B84FBB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CapsuleBtn_Widget_C::Tick_732D043D4DC7103C51E7B886A5B84FBB(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "Tick_732D043D4DC7103C51E7B886A5B84FBB");

	Params::UBP_CapsuleBtn_Widget_C_Tick_732D043D4DC7103C51E7B886A5B84FBB_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.AnimSeq_ButtonHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CapsuleBtn_Widget_C::AnimSeq_ButtonHover(bool IsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "AnimSeq_ButtonHover");

	Params::UBP_CapsuleBtn_Widget_C_AnimSeq_ButtonHover_Params Parms{};

	Parms.IsHovered = IsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.ShakeRepeater
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CapsuleBtn_Widget_C::ShakeRepeater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "ShakeRepeater");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.AnimSeq_Shake
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CapsuleBtn_Widget_C::AnimSeq_Shake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "AnimSeq_Shake");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.ShakeButtonLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CapsuleBtn_Widget_C::ShakeButtonLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "ShakeButtonLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.ChangeShakeRandomAngle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CapsuleBtn_Widget_C::ChangeShakeRandomAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "ChangeShakeRandomAngle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.ResetShakeAngle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CapsuleBtn_Widget_C::ResetShakeAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "ResetShakeAngle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.AnimSeq_Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPressed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CapsuleBtn_Widget_C::AnimSeq_Pressed(bool IsPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "AnimSeq_Pressed");

	Params::UBP_CapsuleBtn_Widget_C_AnimSeq_Pressed_Params Parms{};

	Parms.IsPressed = IsPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.ClearHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CapsuleBtn_Widget_C::ClearHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "ClearHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.InitButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InputContextLabel                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Negative                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HoldInput                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Disabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CapsuleBtn_Widget_C::InitButton(class FText InputContextLabel, class FText Label, bool Negative, bool HoldInput, bool Disabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "InitButton");

	Params::UBP_CapsuleBtn_Widget_C_InitButton_Params Parms{};

	Parms.InputContextLabel = InputContextLabel;
	Parms.Label = Label;
	Parms.Negative = Negative;
	Parms.HoldInput = HoldInput;
	Parms.Disabled = Disabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.BndEvt__Button_Btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_CapsuleBtn_Widget_C::BndEvt__Button_Btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "BndEvt__Button_Btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.BndEvt__Button_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_CapsuleBtn_Widget_C::BndEvt__Button_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "BndEvt__Button_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.BndEvt__Button_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_CapsuleBtn_Widget_C::BndEvt__Button_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "BndEvt__Button_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.BndEvt__BP_CapsuleBtn_Widget_Button_Btn_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_CapsuleBtn_Widget_C::BndEvt__BP_CapsuleBtn_Widget_Button_Btn_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "BndEvt__BP_CapsuleBtn_Widget_Button_Btn_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.BndEvt__BP_CapsuleBtn_Widget_Button_Btn_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_CapsuleBtn_Widget_C::BndEvt__BP_CapsuleBtn_Widget_Button_Btn_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "BndEvt__BP_CapsuleBtn_Widget_Button_Btn_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.TickHoldButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DTime                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CapsuleBtn_Widget_C::TickHoldButton(float DTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "TickHoldButton");

	Params::UBP_CapsuleBtn_Widget_C_TickHoldButton_Params Parms{};

	Parms.DTime = DTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.HoldButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CapsuleBtn_Widget_C::HoldButtonPressed(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "HoldButtonPressed");

	Params::UBP_CapsuleBtn_Widget_C_HoldButtonPressed_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.OnSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CapsuleBtn_Widget_C::OnSelected(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "OnSelected");

	Params::UBP_CapsuleBtn_Widget_C_OnSelected_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.ToggleDisabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDisabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CapsuleBtn_Widget_C::ToggleDisabled(bool IsDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "ToggleDisabled");

	Params::UBP_CapsuleBtn_Widget_C_ToggleDisabled_Params Parms{};

	Parms.IsDisabled = IsDisabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.SetNegative
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsNegative                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CapsuleBtn_Widget_C::SetNegative(bool IsNegative)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "SetNegative");

	Params::UBP_CapsuleBtn_Widget_C_SetNegative_Params Parms{};

	Parms.IsNegative = IsNegative;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.SetHoldInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHold                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CapsuleBtn_Widget_C::SetHoldInput(bool IsHold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "SetHoldInput");

	Params::UBP_CapsuleBtn_Widget_C_SetHoldInput_Params Parms{};

	Parms.IsHold = IsHold;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.Anim_Shake
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NegativeShake                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CapsuleBtn_Widget_C::Anim_Shake(bool NegativeShake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "Anim_Shake");

	Params::UBP_CapsuleBtn_Widget_C_Anim_Shake_Params Parms{};

	Parms.NegativeShake = NegativeShake;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.RefreshHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CapsuleBtn_Widget_C::RefreshHover(bool Hovered_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "RefreshHover");

	Params::UBP_CapsuleBtn_Widget_C_RefreshHover_Params Parms{};

	Parms.Hovered_ = Hovered_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.StartTrainingHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CapsuleBtn_Widget_C::StartTrainingHighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "StartTrainingHighlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.PauseTrainingHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CapsuleBtn_Widget_C::PauseTrainingHighlight(bool Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "PauseTrainingHighlight");

	Params::UBP_CapsuleBtn_Widget_C_PauseTrainingHighlight_Params Parms{};

	Parms.Hovered = Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.UnbindTrainingEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CapsuleBtn_Widget_C::UnbindTrainingEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "UnbindTrainingEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CapsuleBtn_Widget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "Tick");

	Params::UBP_CapsuleBtn_Widget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.TrainingHighlight_SetLoops
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumLoopsToPlay                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CapsuleBtn_Widget_C::TrainingHighlight_SetLoops(int32 NumLoopsToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "TrainingHighlight_SetLoops");

	Params::UBP_CapsuleBtn_Widget_C_TrainingHighlight_SetLoops_Params Parms{};

	Parms.NumLoopsToPlay = NumLoopsToPlay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.ExecuteUbergraph_BP_CapsuleBtn_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_Value_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_Value_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_Value_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsHovered                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsPressed                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAsyncInterpolateValueRealtime*CallFunc_AsyncInterpolateValueRealtime_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAsyncInterpolateValueRealtime*CallFunc_AsyncInterpolateValueRealtime_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UQtnAsyncInterpolateValueRealtime*CallFunc_AsyncInterpolateValueRealtime_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAsyncInterpolateValueRealtime*CallFunc_AsyncInterpolateValueRealtime_ReturnValue_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_InputContextLabel                             (None)
// class FText                        K2Node_CustomEvent_Label                                         (None)
// bool                               K2Node_CustomEvent_Negative                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_HoldInput                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Disabled                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_DTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Pressed                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Selected                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isDisabled                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Check_for_Input_String_ReturnValue                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsNegative                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               K2Node_CustomEvent_IsHold                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Value_6                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NegativeShake                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Hovered_                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Hovered                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Value_7                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NumLoopsToPlay                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CapsuleBtn_Widget_C::ExecuteUbergraph_BP_CapsuleBtn_Widget(int32 EntryPoint, float K2Node_CustomEvent_Value_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_Value_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_CustomEvent_Value_3, float K2Node_CustomEvent_Value_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float Temp_float_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float K2Node_CustomEvent_Value_1, float K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float Temp_float_Variable_2, float CallFunc_Conv_BoolToFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool Temp_bool_Has_Been_Initd_Variable_3, bool K2Node_CustomEvent_IsHovered, bool CallFunc_IsAnimationPlayingForward_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool Temp_bool_IsClosed_Variable_2, bool K2Node_CustomEvent_IsPressed, class UQtnAsyncInterpolateValueRealtime* CallFunc_AsyncInterpolateValueRealtime_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnAsyncInterpolateValueRealtime* CallFunc_AsyncInterpolateValueRealtime_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UQtnAsyncInterpolateValueRealtime* CallFunc_AsyncInterpolateValueRealtime_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class UQtnAsyncInterpolateValueRealtime* CallFunc_AsyncInterpolateValueRealtime_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float CallFunc_Ease_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class FText K2Node_CustomEvent_InputContextLabel, class FText K2Node_CustomEvent_Label, bool K2Node_CustomEvent_Negative, bool K2Node_CustomEvent_HoldInput, bool K2Node_CustomEvent_Disabled, float Temp_float_Variable_3, float K2Node_CustomEvent_DTime, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_CustomEvent_Pressed, bool K2Node_CustomEvent_Selected, bool CallFunc_IsHovered_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, bool K2Node_CustomEvent_isDisabled, class FText CallFunc_Check_for_Input_String_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool K2Node_CustomEvent_IsNegative, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool K2Node_CustomEvent_IsHold, float K2Node_CustomEvent_Value_6, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_5, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_6, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_7, bool K2Node_CustomEvent_NegativeShake, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_CustomEvent_Hovered_, bool CallFunc_Not_PreBool_ReturnValue_2, float CallFunc_Conv_BoolToFloat_ReturnValue_2, float CallFunc_Conv_BoolToFloat_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool K2Node_CustomEvent_Hovered, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool Temp_bool_IsClosed_Variable_3, float K2Node_CustomEvent_Value_7, class FName K2Node_Select_Default, int32 K2Node_CustomEvent_NumLoopsToPlay, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, float CallFunc_Lerp_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "ExecuteUbergraph_BP_CapsuleBtn_Widget");

	Params::UBP_CapsuleBtn_Widget_C_ExecuteUbergraph_BP_CapsuleBtn_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Value_5 = K2Node_CustomEvent_Value_5;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Value_4 = K2Node_CustomEvent_Value_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Value_3 = K2Node_CustomEvent_Value_3;
	Parms.K2Node_CustomEvent_Value_2 = K2Node_CustomEvent_Value_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_Value_1 = K2Node_CustomEvent_Value_1;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.K2Node_CustomEvent_IsHovered = K2Node_CustomEvent_IsHovered;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.K2Node_CustomEvent_IsPressed = K2Node_CustomEvent_IsPressed;
	Parms.CallFunc_AsyncInterpolateValueRealtime_ReturnValue = CallFunc_AsyncInterpolateValueRealtime_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AsyncInterpolateValueRealtime_ReturnValue_1 = CallFunc_AsyncInterpolateValueRealtime_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_AsyncInterpolateValueRealtime_ReturnValue_2 = CallFunc_AsyncInterpolateValueRealtime_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_AsyncInterpolateValueRealtime_ReturnValue_3 = CallFunc_AsyncInterpolateValueRealtime_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_CustomEvent_InputContextLabel = K2Node_CustomEvent_InputContextLabel;
	Parms.K2Node_CustomEvent_Label = K2Node_CustomEvent_Label;
	Parms.K2Node_CustomEvent_Negative = K2Node_CustomEvent_Negative;
	Parms.K2Node_CustomEvent_HoldInput = K2Node_CustomEvent_HoldInput;
	Parms.K2Node_CustomEvent_Disabled = K2Node_CustomEvent_Disabled;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.K2Node_CustomEvent_DTime = K2Node_CustomEvent_DTime;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_Pressed = K2Node_CustomEvent_Pressed;
	Parms.K2Node_CustomEvent_Selected = K2Node_CustomEvent_Selected;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_1 = CallFunc_Conv_BoolToFloat_ReturnValue_1;
	Parms.K2Node_CustomEvent_isDisabled = K2Node_CustomEvent_isDisabled;
	Parms.CallFunc_Check_for_Input_String_ReturnValue = CallFunc_Check_for_Input_String_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_CustomEvent_IsNegative = K2Node_CustomEvent_IsNegative;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CustomEvent_IsHold = K2Node_CustomEvent_IsHold;
	Parms.K2Node_CustomEvent_Value_6 = K2Node_CustomEvent_Value_6;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_3 = CallFunc_GetDynamicMaterial_ReturnValue_3;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_4 = CallFunc_GetDynamicMaterial_ReturnValue_4;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_5 = CallFunc_GetDynamicMaterial_ReturnValue_5;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_6 = CallFunc_GetDynamicMaterial_ReturnValue_6;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_7 = CallFunc_GetDynamicMaterial_ReturnValue_7;
	Parms.K2Node_CustomEvent_NegativeShake = K2Node_CustomEvent_NegativeShake;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue_1 = CallFunc_GetEndTime_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_Hovered_ = K2Node_CustomEvent_Hovered_;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_2 = CallFunc_Conv_BoolToFloat_ReturnValue_2;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_3 = CallFunc_Conv_BoolToFloat_ReturnValue_3;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_CustomEvent_Hovered = K2Node_CustomEvent_Hovered;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.K2Node_CustomEvent_Value_7 = K2Node_CustomEvent_Value_7;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_NumLoopsToPlay = K2Node_CustomEvent_NumLoopsToPlay;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.ButtonSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CapsuleBtn_Widget_C::ButtonSelected__DelegateSignature(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "ButtonSelected__DelegateSignature");

	Params::UBP_CapsuleBtn_Widget_C_ButtonSelected__DelegateSignature_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.ButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CapsuleBtn_Widget_C::ButtonHovered__DelegateSignature(bool Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "ButtonHovered__DelegateSignature");

	Params::UBP_CapsuleBtn_Widget_C_ButtonHovered__DelegateSignature_Params Parms{};

	Parms.Hovered = Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.ButtonHoldSuccess__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CapsuleBtn_Widget_C::ButtonHoldSuccess__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "ButtonHoldSuccess__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CapsuleBtn_Widget.BP_CapsuleBtn_Widget_C.ButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CapsuleBtn_Widget_C::ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CapsuleBtn_Widget_C", "ButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


