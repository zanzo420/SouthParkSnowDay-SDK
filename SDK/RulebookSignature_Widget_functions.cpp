#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RulebookSignature_Widget.RulebookSignature_Widget_C
// (None)

class UClass* URulebookSignature_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RulebookSignature_Widget_C");

	return Clss;
}


// RulebookSignature_Widget_C RulebookSignature_Widget.Default__RulebookSignature_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URulebookSignature_Widget_C* URulebookSignature_Widget_C::GetDefaultObj()
{
	static class URulebookSignature_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URulebookSignature_Widget_C*>(URulebookSignature_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RulebookSignature_Widget.RulebookSignature_Widget_C.SequenceEvent__ENTRYPOINTRulebookSignature_Widget_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URulebookSignature_Widget_C::SequenceEvent__ENTRYPOINTRulebookSignature_Widget_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookSignature_Widget_C", "SequenceEvent__ENTRYPOINTRulebookSignature_Widget_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RulebookSignature_Widget.RulebookSignature_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URulebookSignature_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookSignature_Widget_C", "PreConstruct");

	Params::URulebookSignature_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RulebookSignature_Widget.RulebookSignature_Widget_C.Anim_AddSignature
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URulebookSignature_Widget_C::Anim_AddSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookSignature_Widget_C", "Anim_AddSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RulebookSignature_Widget.RulebookSignature_Widget_C.RefreshNameBasedOnVoteCast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URulebookSignature_Widget_C::RefreshNameBasedOnVoteCast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookSignature_Widget_C", "RefreshNameBasedOnVoteCast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RulebookSignature_Widget.RulebookSignature_Widget_C.RulebookSigned
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URulebookSignature_Widget_C::RulebookSigned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookSignature_Widget_C", "RulebookSigned");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RulebookSignature_Widget.RulebookSignature_Widget_C.AddQtnPlayerState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerState*             MyQtnPlayerState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URulebookSignature_Widget_C::AddQtnPlayerState(class AQtnPlayerState* MyQtnPlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookSignature_Widget_C", "AddQtnPlayerState");

	Params::URulebookSignature_Widget_C_AddQtnPlayerState_Params Parms{};

	Parms.MyQtnPlayerState = MyQtnPlayerState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RulebookSignature_Widget.RulebookSignature_Widget_C.SignatureEmpty
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URulebookSignature_Widget_C::SignatureEmpty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookSignature_Widget_C", "SignatureEmpty");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RulebookSignature_Widget.RulebookSignature_Widget_C.CheckForAssignedPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URulebookSignature_Widget_C::CheckForAssignedPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookSignature_Widget_C", "CheckForAssignedPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RulebookSignature_Widget.RulebookSignature_Widget_C.ExecuteUbergraph_RulebookSignature_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerState*             K2Node_CustomEvent_MyQtnPlayerState                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URulebookSignature_Widget_C::ExecuteUbergraph_RulebookSignature_Widget(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AQtnPlayerState* K2Node_CustomEvent_MyQtnPlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookSignature_Widget_C", "ExecuteUbergraph_RulebookSignature_Widget");

	Params::URulebookSignature_Widget_C_ExecuteUbergraph_RulebookSignature_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue_1 = CallFunc_GetPlayerName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_MyQtnPlayerState = K2Node_CustomEvent_MyQtnPlayerState;

	UObject::ProcessEvent(Func, &Parms);

}

}


