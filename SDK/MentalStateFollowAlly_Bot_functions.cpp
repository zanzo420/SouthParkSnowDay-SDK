#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateFollowAlly_Bot.MentalStateFollowAlly_Bot_C
// (None)

class UClass* UMentalStateFollowAlly_Bot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateFollowAlly_Bot_C");

	return Clss;
}


// MentalStateFollowAlly_Bot_C MentalStateFollowAlly_Bot.Default__MentalStateFollowAlly_Bot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateFollowAlly_Bot_C* UMentalStateFollowAlly_Bot_C::GetDefaultObj()
{
	static class UMentalStateFollowAlly_Bot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateFollowAlly_Bot_C*>(UMentalStateFollowAlly_Bot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MentalStateFollowAlly_Bot.MentalStateFollowAlly_Bot_C.ThinkAboutEmoting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPawn*                    CallFunc_GetAlly_ReturnValue                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetAlly_ReturnValue_1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetBodyPawn_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnAIAllyBot_C*        K2Node_DynamicCast_AsBody_Pawn_AIAlly_Bot                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnVerb*                    CallFunc_GetCurrentActiveVerb_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnEmoteVerb_Archetype_C*   K2Node_DynamicCast_AsQtn_Emote_Verb_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnVerb*                    CallFunc_GetCurrentActiveVerb_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMentalStateFollowAlly_Bot_C::ThinkAboutEmoting(class AQtnPawn* CallFunc_GetAlly_ReturnValue, class AQtnPawn* CallFunc_GetAlly_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class ABodyPawnAIAllyBot_C* K2Node_DynamicCast_AsBody_Pawn_AIAlly_Bot, bool K2Node_DynamicCast_bSuccess_1, class UQtnVerb* CallFunc_GetCurrentActiveVerb_ReturnValue, class UQtnEmoteVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Emote_Verb_Archetype, bool K2Node_DynamicCast_bSuccess_2, class UQtnVerb* CallFunc_GetCurrentActiveVerb_ReturnValue_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateFollowAlly_Bot_C", "ThinkAboutEmoting");

	Params::UMentalStateFollowAlly_Bot_C_ThinkAboutEmoting_Params Parms{};

	Parms.CallFunc_GetAlly_ReturnValue = CallFunc_GetAlly_ReturnValue;
	Parms.CallFunc_GetAlly_ReturnValue_1 = CallFunc_GetAlly_ReturnValue_1;
	Parms.CallFunc_GetBodyPawn_ReturnValue = CallFunc_GetBodyPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBody_Pawn_AIAlly_Bot = K2Node_DynamicCast_AsBody_Pawn_AIAlly_Bot;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCurrentActiveVerb_ReturnValue = CallFunc_GetCurrentActiveVerb_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Emote_Verb_Archetype = K2Node_DynamicCast_AsQtn_Emote_Verb_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetCurrentActiveVerb_ReturnValue_1 = CallFunc_GetCurrentActiveVerb_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalStateFollowAlly_Bot.MentalStateFollowAlly_Bot_C.OnThinkMentalState
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              TimeSinceLastThought                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateFollowAlly_Bot_C::OnThinkMentalState(float TimeSinceLastThought)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateFollowAlly_Bot_C", "OnThinkMentalState");

	Params::UMentalStateFollowAlly_Bot_C_OnThinkMentalState_Params Parms{};

	Parms.TimeSinceLastThought = TimeSinceLastThought;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalStateFollowAlly_Bot.MentalStateFollowAlly_Bot_C.ExecuteUbergraph_MentalStateFollowAlly_Bot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_timeSinceLastThought                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateFollowAlly_Bot_C::ExecuteUbergraph_MentalStateFollowAlly_Bot(int32 EntryPoint, float K2Node_Event_timeSinceLastThought)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateFollowAlly_Bot_C", "ExecuteUbergraph_MentalStateFollowAlly_Bot");

	Params::UMentalStateFollowAlly_Bot_C_ExecuteUbergraph_MentalStateFollowAlly_Bot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_timeSinceLastThought = K2Node_Event_timeSinceLastThought;

	UObject::ProcessEvent(Func, &Parms);

}

}


