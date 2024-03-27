#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CardLevel_Widget.CardLevel_Widget_C
// (None)

class UClass* UCardLevel_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CardLevel_Widget_C");

	return Clss;
}


// CardLevel_Widget_C CardLevel_Widget.Default__CardLevel_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCardLevel_Widget_C* UCardLevel_Widget_C::GetDefaultObj()
{
	static class UCardLevel_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCardLevel_Widget_C*>(UCardLevel_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CardLevel_Widget.CardLevel_Widget_C.InitTriialCredWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnBSChoice                Choice                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayerCard                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ModCard                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCardLevel_Widget_C::InitTriialCredWidget(const struct FQtnBSChoice& Choice, bool PlayerCard, bool ModCard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CardLevel_Widget_C", "InitTriialCredWidget");

	Params::UCardLevel_Widget_C_InitTriialCredWidget_Params Parms{};

	Parms.Choice = Choice;
	Parms.PlayerCard = PlayerCard;
	Parms.ModCard = ModCard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CardLevel_Widget.CardLevel_Widget_C.SetLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCardLevel_Widget_C::SetLevel(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CardLevel_Widget_C", "SetLevel");

	Params::UCardLevel_Widget_C_SetLevel_Params Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CardLevel_Widget.CardLevel_Widget_C.ExecuteUbergraph_CardLevel_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_level                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FQtnBSChoice                K2Node_CustomEvent_choice                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_playerCard                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_modCard                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnBullshitBPBaseArchetype_C*CallFunc_GetBullshitArchetype_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnBullshitBPBaseArchetype_C*K2Node_DynamicCast_AsQtn_Bullshit_BPBase_Archetype               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCardLevel_Widget_C::ExecuteUbergraph_CardLevel_Widget(int32 EntryPoint, int32 K2Node_CustomEvent_level, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FQtnBSChoice& K2Node_CustomEvent_choice, bool K2Node_CustomEvent_playerCard, bool K2Node_CustomEvent_modCard, class UQtnBullshitBPBaseArchetype_C* CallFunc_GetBullshitArchetype_ReturnValue, class UQtnBullshitBPBaseArchetype_C* K2Node_DynamicCast_AsQtn_Bullshit_BPBase_Archetype, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CardLevel_Widget_C", "ExecuteUbergraph_CardLevel_Widget");

	Params::UCardLevel_Widget_C_ExecuteUbergraph_CardLevel_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_level = K2Node_CustomEvent_level;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_CustomEvent_choice = K2Node_CustomEvent_choice;
	Parms.K2Node_CustomEvent_playerCard = K2Node_CustomEvent_playerCard;
	Parms.K2Node_CustomEvent_modCard = K2Node_CustomEvent_modCard;
	Parms.CallFunc_GetBullshitArchetype_ReturnValue = CallFunc_GetBullshitArchetype_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Bullshit_BPBase_Archetype = K2Node_DynamicCast_AsQtn_Bullshit_BPBase_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


