#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BtnClose_Widget.BtnClose_Widget_C
// (None)

class UClass* UBtnClose_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BtnClose_Widget_C");

	return Clss;
}


// BtnClose_Widget_C BtnClose_Widget.Default__BtnClose_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBtnClose_Widget_C* UBtnClose_Widget_C::GetDefaultObj()
{
	static class UBtnClose_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBtnClose_Widget_C*>(UBtnClose_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BtnClose_Widget.BtnClose_Widget_C.SequenceEvent__ENTRYPOINTBtnClose_Widget_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBtnClose_Widget_C::SequenceEvent__ENTRYPOINTBtnClose_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BtnClose_Widget_C", "SequenceEvent__ENTRYPOINTBtnClose_Widget_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BtnClose_Widget.BtnClose_Widget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UBtnClose_Widget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BtnClose_Widget_C", "OnFocusReceived");

	Params::UBtnClose_Widget_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BtnClose_Widget.BtnClose_Widget_C.Check for Input String
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

class FText UBtnClose_Widget_C::Check_for_Input_String(class FText InputText, const class FString& CallFunc_StaticParseInputText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BtnClose_Widget_C", "Check for Input String");

	Params::UBtnClose_Widget_C_Check_for_Input_String_Params Parms{};

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


// Function BtnClose_Widget.BtnClose_Widget_C.Get EQtn Button State
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EQtn_UI_States_Enum     ButtonState                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBtnClose_Widget_C::Get_EQtn_Button_State(enum class EQtn_UI_States_Enum* ButtonState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BtnClose_Widget_C", "Get EQtn Button State");

	Params::UBtnClose_Widget_C_Get_EQtn_Button_State_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ButtonState != nullptr)
		*ButtonState = Parms.ButtonState;

}


// Function BtnClose_Widget.BtnClose_Widget_C.HoverRepeater
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBtnClose_Widget_C::HoverRepeater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BtnClose_Widget_C", "HoverRepeater");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BtnClose_Widget.BtnClose_Widget_C.AnimSeq_ButtonHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBtnClose_Widget_C::AnimSeq_ButtonHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BtnClose_Widget_C", "AnimSeq_ButtonHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BtnClose_Widget.BtnClose_Widget_C.AnimSeq_ButtonUnhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBtnClose_Widget_C::AnimSeq_ButtonUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BtnClose_Widget_C", "AnimSeq_ButtonUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BtnClose_Widget.BtnClose_Widget_C.InitCloseButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBtnClose_Widget_C::InitCloseButton(bool Disabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BtnClose_Widget_C", "InitCloseButton");

	Params::UBtnClose_Widget_C_InitCloseButton_Params Parms{};

	Parms.Disabled = Disabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BtnClose_Widget.BtnClose_Widget_C.BndEvt__Button_Btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBtnClose_Widget_C::BndEvt__Button_Btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BtnClose_Widget_C", "BndEvt__Button_Btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BtnClose_Widget.BtnClose_Widget_C.BndEvt__Button_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBtnClose_Widget_C::BndEvt__Button_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BtnClose_Widget_C", "BndEvt__Button_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BtnClose_Widget.BtnClose_Widget_C.BndEvt__Button_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBtnClose_Widget_C::BndEvt__Button_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BtnClose_Widget_C", "BndEvt__Button_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BtnClose_Widget.BtnClose_Widget_C.ToggleDisabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDisabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBtnClose_Widget_C::ToggleDisabled(bool IsDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BtnClose_Widget_C", "ToggleDisabled");

	Params::UBtnClose_Widget_C_ToggleDisabled_Params Parms{};

	Parms.IsDisabled = IsDisabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BtnClose_Widget.BtnClose_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBtnClose_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BtnClose_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BtnClose_Widget.BtnClose_Widget_C.RefreshHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBtnClose_Widget_C::RefreshHover(bool Hovered_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BtnClose_Widget_C", "RefreshHover");

	Params::UBtnClose_Widget_C_RefreshHover_Params Parms{};

	Parms.Hovered_ = Hovered_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BtnClose_Widget.BtnClose_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBtnClose_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BtnClose_Widget_C", "PreConstruct");

	Params::UBtnClose_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BtnClose_Widget.BtnClose_Widget_C.StartTrainingHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBtnClose_Widget_C::StartTrainingHighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BtnClose_Widget_C", "StartTrainingHighlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BtnClose_Widget.BtnClose_Widget_C.PauseTrainingHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBtnClose_Widget_C::PauseTrainingHighlight(bool Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BtnClose_Widget_C", "PauseTrainingHighlight");

	Params::UBtnClose_Widget_C_PauseTrainingHighlight_Params Parms{};

	Parms.Hovered = Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BtnClose_Widget.BtnClose_Widget_C.UnbindTrainingEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBtnClose_Widget_C::UnbindTrainingEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BtnClose_Widget_C", "UnbindTrainingEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BtnClose_Widget.BtnClose_Widget_C.ExecuteUbergraph_BtnClose_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Disabled                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isDisabled                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Hovered_                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Hovered                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBtnClose_Widget_C::ExecuteUbergraph_BtnClose_Widget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_CustomEvent_Disabled, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, bool K2Node_CustomEvent_isDisabled, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_Hovered_, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_Hovered, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BtnClose_Widget_C", "ExecuteUbergraph_BtnClose_Widget");

	Params::UBtnClose_Widget_C_ExecuteUbergraph_BtnClose_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_CustomEvent_Disabled = K2Node_CustomEvent_Disabled;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.K2Node_CustomEvent_isDisabled = K2Node_CustomEvent_isDisabled;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_Hovered_ = K2Node_CustomEvent_Hovered_;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Hovered = K2Node_CustomEvent_Hovered;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BtnClose_Widget.BtnClose_Widget_C.ButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBtnClose_Widget_C::ButtonHovered__DelegateSignature(bool Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BtnClose_Widget_C", "ButtonHovered__DelegateSignature");

	Params::UBtnClose_Widget_C_ButtonHovered__DelegateSignature_Params Parms{};

	Parms.Hovered = Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BtnClose_Widget.BtnClose_Widget_C.ButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBtnClose_Widget_C::ButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BtnClose_Widget_C", "ButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


