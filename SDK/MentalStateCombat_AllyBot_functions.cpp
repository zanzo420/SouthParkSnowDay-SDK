#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalStateCombat_AllyBot.MentalStateCombat_AllyBot_C
// (None)

class UClass* UMentalStateCombat_AllyBot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalStateCombat_AllyBot_C");

	return Clss;
}


// MentalStateCombat_AllyBot_C MentalStateCombat_AllyBot.Default__MentalStateCombat_AllyBot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalStateCombat_AllyBot_C* UMentalStateCombat_AllyBot_C::GetDefaultObj()
{
	static class UMentalStateCombat_AllyBot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalStateCombat_AllyBot_C*>(UMentalStateCombat_AllyBot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MentalStateCombat_AllyBot.MentalStateCombat_AllyBot_C.ThinkAboutIntroTaunt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                L_selfBody                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    L_relevantEnemy                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnVerbRequest             K2Node_MakeStruct_QtnVerbRequest                                 (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UQtnTeam>        CallFunc_GetTeam_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetRelevantEnemy_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetBodyPawn_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateCombat_AllyBot_C::ThinkAboutIntroTaunt(class AQtnBodyPawn* L_selfBody, class AQtnPawn* L_relevantEnemy, const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest, bool CallFunc_IsValid_ReturnValue, TSubclassOf<class UQtnTeam> CallFunc_GetTeam_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AQtnPawn* CallFunc_GetRelevantEnemy_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_AllyBot_C", "ThinkAboutIntroTaunt");

	Params::UMentalStateCombat_AllyBot_C_ThinkAboutIntroTaunt_Params Parms{};

	Parms.L_selfBody = L_selfBody;
	Parms.L_relevantEnemy = L_relevantEnemy;
	Parms.K2Node_MakeStruct_QtnVerbRequest = K2Node_MakeStruct_QtnVerbRequest;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTeam_ReturnValue = CallFunc_GetTeam_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetRelevantEnemy_ReturnValue = CallFunc_GetRelevantEnemy_ReturnValue;
	Parms.CallFunc_GetBodyPawn_ReturnValue = CallFunc_GetBodyPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalStateCombat_AllyBot.MentalStateCombat_AllyBot_C.OnThinkMentalState
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              TimeSinceLastThought                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateCombat_AllyBot_C::OnThinkMentalState(float TimeSinceLastThought)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_AllyBot_C", "OnThinkMentalState");

	Params::UMentalStateCombat_AllyBot_C_OnThinkMentalState_Params Parms{};

	Parms.TimeSinceLastThought = TimeSinceLastThought;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalStateCombat_AllyBot.MentalStateCombat_AllyBot_C.OnEnterMentalState
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnMentalState*             PreviousMentalState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalStateCombat_AllyBot_C::OnEnterMentalState(class UQtnMentalState* PreviousMentalState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_AllyBot_C", "OnEnterMentalState");

	Params::UMentalStateCombat_AllyBot_C_OnEnterMentalState_Params Parms{};

	Parms.PreviousMentalState = PreviousMentalState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalStateCombat_AllyBot.MentalStateCombat_AllyBot_C.ExecuteUbergraph_MentalStateCombat_AllyBot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyControllerAllyBot_C*    K2Node_DynamicCast_AsBody_Controller_Ally_Bot                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_timeSinceLastThought                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnMentalState*             K2Node_Event_previousMentalState                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyControllerAllyBot_C*    K2Node_DynamicCast_AsBody_Controller_Ally_Bot_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMentalStateCombat_AllyBot_C::ExecuteUbergraph_MentalStateCombat_AllyBot(int32 EntryPoint, class ABodyControllerAllyBot_C* K2Node_DynamicCast_AsBody_Controller_Ally_Bot, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_timeSinceLastThought, class UQtnMentalState* K2Node_Event_previousMentalState, class ABodyControllerAllyBot_C* K2Node_DynamicCast_AsBody_Controller_Ally_Bot_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalStateCombat_AllyBot_C", "ExecuteUbergraph_MentalStateCombat_AllyBot");

	Params::UMentalStateCombat_AllyBot_C_ExecuteUbergraph_MentalStateCombat_AllyBot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBody_Controller_Ally_Bot = K2Node_DynamicCast_AsBody_Controller_Ally_Bot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_timeSinceLastThought = K2Node_Event_timeSinceLastThought;
	Parms.K2Node_Event_previousMentalState = K2Node_Event_previousMentalState;
	Parms.K2Node_DynamicCast_AsBody_Controller_Ally_Bot_1 = K2Node_DynamicCast_AsBody_Controller_Ally_Bot_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


