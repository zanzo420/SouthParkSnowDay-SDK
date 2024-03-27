#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpeechBubble_Kenny_Widget.SpeechBubble_Kenny_Widget_C
// (None)

class UClass* USpeechBubble_Kenny_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpeechBubble_Kenny_Widget_C");

	return Clss;
}


// SpeechBubble_Kenny_Widget_C SpeechBubble_Kenny_Widget.Default__SpeechBubble_Kenny_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpeechBubble_Kenny_Widget_C* USpeechBubble_Kenny_Widget_C::GetDefaultObj()
{
	static class USpeechBubble_Kenny_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpeechBubble_Kenny_Widget_C*>(USpeechBubble_Kenny_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpeechBubble_Kenny_Widget.SpeechBubble_Kenny_Widget_C.SequenceEvent__ENTRYPOINTSpeechBubble_Kenny_Widget_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USpeechBubble_Kenny_Widget_C::SequenceEvent__ENTRYPOINTSpeechBubble_Kenny_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpeechBubble_Kenny_Widget_C", "SequenceEvent__ENTRYPOINTSpeechBubble_Kenny_Widget_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpeechBubble_Kenny_Widget.SpeechBubble_Kenny_Widget_C.CheckSubtitleInhibitorOfQtnUIArchetype
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Inhibited                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUIArchetype_C*     K2Node_DynamicCast_AsQtn_Player_UIArchetype                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Check_for_Subtitle_Inhibitors_Inhibited                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void USpeechBubble_Kenny_Widget_C::CheckSubtitleInhibitorOfQtnUIArchetype(bool* Inhibited, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Check_for_Subtitle_Inhibitors_Inhibited)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpeechBubble_Kenny_Widget_C", "CheckSubtitleInhibitorOfQtnUIArchetype");

	Params::USpeechBubble_Kenny_Widget_C_CheckSubtitleInhibitorOfQtnUIArchetype_Params Parms{};

	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_DynamicCast_AsQtn_Player_UIArchetype = K2Node_DynamicCast_AsQtn_Player_UIArchetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Check_for_Subtitle_Inhibitors_Inhibited = CallFunc_Check_for_Subtitle_Inhibitors_Inhibited;

	UObject::ProcessEvent(Func, &Parms);

	if (Inhibited != nullptr)
		*Inhibited = Parms.Inhibited;

}


// Function SpeechBubble_Kenny_Widget.SpeechBubble_Kenny_Widget_C.AddLetterToSpeech
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      FullText                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              TypeCounter                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpeechBubble_Kenny_Widget_C::AddLetterToSpeech(const class FString& FullText, int32 TypeCounter, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpeechBubble_Kenny_Widget_C", "AddLetterToSpeech");

	Params::USpeechBubble_Kenny_Widget_C_AddLetterToSpeech_Params Parms{};

	Parms.FullText = FullText;
	Parms.TypeCounter = TypeCounter;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpeechBubble_Kenny_Widget.SpeechBubble_Kenny_Widget_C.Finished_E7CC8E0247353D1ED9F731B05580E716
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USpeechBubble_Kenny_Widget_C::Finished_E7CC8E0247353D1ED9F731B05580E716()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpeechBubble_Kenny_Widget_C", "Finished_E7CC8E0247353D1ED9F731B05580E716");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpeechBubble_Kenny_Widget.SpeechBubble_Kenny_Widget_C.AddLetterToText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USpeechBubble_Kenny_Widget_C::AddLetterToText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpeechBubble_Kenny_Widget_C", "AddLetterToText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpeechBubble_Kenny_Widget.SpeechBubble_Kenny_Widget_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USpeechBubble_Kenny_Widget_C::SetText(const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpeechBubble_Kenny_Widget_C", "SetText");

	Params::USpeechBubble_Kenny_Widget_C_SetText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpeechBubble_Kenny_Widget.SpeechBubble_Kenny_Widget_C.Clear
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USpeechBubble_Kenny_Widget_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpeechBubble_Kenny_Widget_C", "Clear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpeechBubble_Kenny_Widget.SpeechBubble_Kenny_Widget_C.CloseGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USpeechBubble_Kenny_Widget_C::CloseGate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpeechBubble_Kenny_Widget_C", "CloseGate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpeechBubble_Kenny_Widget.SpeechBubble_Kenny_Widget_C.ExecuteUbergraph_SpeechBubble_Kenny_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      K2Node_CustomEvent_Text                                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void USpeechBubble_Kenny_Widget_C::ExecuteUbergraph_SpeechBubble_Kenny_Widget(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& K2Node_CustomEvent_Text, class FText CallFunc_Conv_StringToText_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpeechBubble_Kenny_Widget_C", "ExecuteUbergraph_SpeechBubble_Kenny_Widget");

	Params::USpeechBubble_Kenny_Widget_C_ExecuteUbergraph_SpeechBubble_Kenny_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


