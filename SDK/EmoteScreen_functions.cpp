#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmoteScreen.EmoteScreen_C
// (None)

class UClass* UEmoteScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmoteScreen_C");

	return Clss;
}


// EmoteScreen_C EmoteScreen.Default__EmoteScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmoteScreen_C* UEmoteScreen_C::GetDefaultObj()
{
	static class UEmoteScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmoteScreen_C*>(UEmoteScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EmoteScreen.EmoteScreen_C.CanEmote
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOccupiedBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnVerb*                    CallFunc_GetCurrentActiveVerb_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnEmoteVerb_Archetype_C*   K2Node_DynamicCast_AsQtn_Emote_Verb_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBodyIdle_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEmoteScreen_C::CanEmote(bool* Result, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnVerb* CallFunc_GetCurrentActiveVerb_ReturnValue, class UQtnEmoteVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Emote_Verb_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsBodyIdle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EmoteScreen_C", "CanEmote");

	Params::UEmoteScreen_C_CanEmote_Params Parms{};

	Parms.CallFunc_GetOccupiedBodyPawn_ReturnValue = CallFunc_GetOccupiedBodyPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentActiveVerb_ReturnValue = CallFunc_GetCurrentActiveVerb_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Emote_Verb_Archetype = K2Node_DynamicCast_AsQtn_Emote_Verb_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsBodyIdle_ReturnValue = CallFunc_IsBodyIdle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function EmoteScreen.EmoteScreen_C.OnUIScreenActionPressed
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIScreenActionEnum  ScreenAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmoteScreen_C::OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EmoteScreen_C", "OnUIScreenActionPressed");

	Params::UEmoteScreen_C_OnUIScreenActionPressed_Params Parms{};

	Parms.ScreenAction = ScreenAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EmoteScreen.EmoteScreen_C.OnUIScreenActionReleased
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQtnUIScreenActionEnum  ScreenAction                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmoteScreen_C::OnUIScreenActionReleased(enum class EQtnUIScreenActionEnum ScreenAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EmoteScreen_C", "OnUIScreenActionReleased");

	Params::UEmoteScreen_C_OnUIScreenActionReleased_Params Parms{};

	Parms.ScreenAction = ScreenAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EmoteScreen.EmoteScreen_C.OnScreenPaused
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEmoteScreen_C::OnScreenPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EmoteScreen_C", "OnScreenPaused");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EmoteScreen.EmoteScreen_C.OnScreenTicked
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmoteScreen_C::OnScreenTicked(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EmoteScreen_C", "OnScreenTicked");

	Params::UEmoteScreen_C_OnScreenTicked_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EmoteScreen.EmoteScreen_C.ExecuteUbergraph_EmoteScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingMouseAndKeyboard_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnUIScreenActionEnum  K2Node_Event_screenAction                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEmoteWidget_C*              K2Node_DynamicCast_AsEmote_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnUIScreenActionEnum  K2Node_Event_screenAction_1                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEmoteWidget_C*              K2Node_DynamicCast_AsEmote_Widget_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanEmote_result                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEmoteScreen_C::ExecuteUbergraph_EmoteScreen(int32 EntryPoint, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, bool K2Node_SwitchEnum_CmpSuccess, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UEmoteWidget_C* K2Node_DynamicCast_AsEmote_Widget, bool K2Node_DynamicCast_bSuccess, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction_1, bool K2Node_SwitchEnum_CmpSuccess_1, class UUserWidget* CallFunc_GetMainWidget_ReturnValue_1, float K2Node_Event_DeltaSeconds, class UEmoteWidget_C* K2Node_DynamicCast_AsEmote_Widget_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CanEmote_result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EmoteScreen_C", "ExecuteUbergraph_EmoteScreen");

	Params::UEmoteScreen_C_ExecuteUbergraph_EmoteScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsUsingMouseAndKeyboard_ReturnValue = CallFunc_IsUsingMouseAndKeyboard_ReturnValue;
	Parms.K2Node_Event_screenAction = K2Node_Event_screenAction;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsEmote_Widget = K2Node_DynamicCast_AsEmote_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_screenAction_1 = K2Node_Event_screenAction_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetMainWidget_ReturnValue_1 = CallFunc_GetMainWidget_ReturnValue_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_DynamicCast_AsEmote_Widget_1 = K2Node_DynamicCast_AsEmote_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_CanEmote_result = CallFunc_CanEmote_result;

	UObject::ProcessEvent(Func, &Parms);

}

}


