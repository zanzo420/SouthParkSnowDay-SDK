#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MentalSubStateHealTactics_AllyBot.MentalSubStateHealTactics_AllyBot_C
// (None)

class UClass* UMentalSubStateHealTactics_AllyBot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MentalSubStateHealTactics_AllyBot_C");

	return Clss;
}


// MentalSubStateHealTactics_AllyBot_C MentalSubStateHealTactics_AllyBot.Default__MentalSubStateHealTactics_AllyBot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMentalSubStateHealTactics_AllyBot_C* UMentalSubStateHealTactics_AllyBot_C::GetDefaultObj()
{
	static class UMentalSubStateHealTactics_AllyBot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMentalSubStateHealTactics_AllyBot_C*>(UMentalSubStateHealTactics_AllyBot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MentalSubStateHealTactics_AllyBot.MentalSubStateHealTactics_AllyBot_C.ThinkAboutPlacingHealingTotem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnVerb*                    L_healingVerb                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnAIAllyBot_C*        L_selfBody                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAllyBotManager*          CallFunc_GetAllyBotManager_ServerOnly_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAllyBotManager_C*           K2Node_DynamicCast_AsAlly_Bot_Manager                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanAllyBotThinkAboutHealing_yes                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyControllerAllyBot_C*    K2Node_DynamicCast_AsBody_Controller_Ally_Bot                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetBodyPawn_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnAIAllyBot_C*        K2Node_DynamicCast_AsBody_Pawn_AIAlly_Bot                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetAllyInNeedOfHelp_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WillVerbSucceed_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnVerbRequest             K2Node_MakeStruct_QtnVerbRequest                                 (NoDestructor)

void UMentalSubStateHealTactics_AllyBot_C::ThinkAboutPlacingHealingTotem(class UQtnVerb* L_healingVerb, class ABodyPawnAIAllyBot_C* L_selfBody, class UQtnAllyBotManager* CallFunc_GetAllyBotManager_ServerOnly_ReturnValue, class UAllyBotManager_C* K2Node_DynamicCast_AsAlly_Bot_Manager, bool K2Node_DynamicCast_bSuccess, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CanAllyBotThinkAboutHealing_yes, class UClass* CallFunc_GetObjectClass_ReturnValue, class ABodyControllerAllyBot_C* K2Node_DynamicCast_AsBody_Controller_Ally_Bot, bool K2Node_DynamicCast_bSuccess_2, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, class ABodyPawnAIAllyBot_C* K2Node_DynamicCast_AsBody_Pawn_AIAlly_Bot, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Length_ReturnValue, class AQtnBodyPawn* CallFunc_GetAllyInNeedOfHelp_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_WillVerbSucceed_ReturnValue, const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalSubStateHealTactics_AllyBot_C", "ThinkAboutPlacingHealingTotem");

	Params::UMentalSubStateHealTactics_AllyBot_C_ThinkAboutPlacingHealingTotem_Params Parms{};

	Parms.L_healingVerb = L_healingVerb;
	Parms.L_selfBody = L_selfBody;
	Parms.CallFunc_GetAllyBotManager_ServerOnly_ReturnValue = CallFunc_GetAllyBotManager_ServerOnly_ReturnValue;
	Parms.K2Node_DynamicCast_AsAlly_Bot_Manager = K2Node_DynamicCast_AsAlly_Bot_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_CanAllyBotThinkAboutHealing_yes = CallFunc_CanAllyBotThinkAboutHealing_yes;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Controller_Ally_Bot = K2Node_DynamicCast_AsBody_Controller_Ally_Bot;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetBodyPawn_ReturnValue = CallFunc_GetBodyPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_AIAlly_Bot = K2Node_DynamicCast_AsBody_Pawn_AIAlly_Bot;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetAllyInNeedOfHelp_ReturnValue = CallFunc_GetAllyInNeedOfHelp_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_WillVerbSucceed_ReturnValue = CallFunc_WillVerbSucceed_ReturnValue;
	Parms.K2Node_MakeStruct_QtnVerbRequest = K2Node_MakeStruct_QtnVerbRequest;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalSubStateHealTactics_AllyBot.MentalSubStateHealTactics_AllyBot_C.OnThinkMentalSubState
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              TimeSinceLastThought                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalSubStateHealTactics_AllyBot_C::OnThinkMentalSubState(float TimeSinceLastThought)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalSubStateHealTactics_AllyBot_C", "OnThinkMentalSubState");

	Params::UMentalSubStateHealTactics_AllyBot_C_OnThinkMentalSubState_Params Parms{};

	Parms.TimeSinceLastThought = TimeSinceLastThought;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalSubStateHealTactics_AllyBot.MentalSubStateHealTactics_AllyBot_C.OnEnterMentalSubState
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnMentalSubState*          PreviousMentalSubState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMentalSubStateHealTactics_AllyBot_C::OnEnterMentalSubState(class UQtnMentalSubState* PreviousMentalSubState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalSubStateHealTactics_AllyBot_C", "OnEnterMentalSubState");

	Params::UMentalSubStateHealTactics_AllyBot_C_OnEnterMentalSubState_Params Parms{};

	Parms.PreviousMentalSubState = PreviousMentalSubState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalSubStateHealTactics_AllyBot.MentalSubStateHealTactics_AllyBot_C.OnExitMentalSubState
// (Event, Public, BlueprintEvent)
// Parameters:
// TSubclassOf<class UQtnMentalSubState>NextMentalSubStateClass                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UMentalSubStateHealTactics_AllyBot_C::OnExitMentalSubState(TSubclassOf<class UQtnMentalSubState> NextMentalSubStateClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalSubStateHealTactics_AllyBot_C", "OnExitMentalSubState");

	Params::UMentalSubStateHealTactics_AllyBot_C_OnExitMentalSubState_Params Parms{};

	Parms.NextMentalSubStateClass = NextMentalSubStateClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MentalSubStateHealTactics_AllyBot.MentalSubStateHealTactics_AllyBot_C.ExecuteUbergraph_MentalSubStateHealTactics_AllyBot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAllyBotManager*          CallFunc_GetAllyBotManager_ServerOnly_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAllyBotManager_C*           K2Node_DynamicCast_AsAlly_Bot_Manager                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_timeSinceLastThought                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnMentalSubState*          K2Node_Event_previousMentalSubState                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnMentalSubState>K2Node_Event_nextMentalSubStateClass                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UQtnAllyBotManager*          CallFunc_GetAllyBotManager_ServerOnly_ReturnValue_1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAllyBotManager_C*           K2Node_DynamicCast_AsAlly_Bot_Manager_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMentalSubStateHealTactics_AllyBot_C::ExecuteUbergraph_MentalSubStateHealTactics_AllyBot(int32 EntryPoint, class UQtnAllyBotManager* CallFunc_GetAllyBotManager_ServerOnly_ReturnValue, class UAllyBotManager_C* K2Node_DynamicCast_AsAlly_Bot_Manager, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_timeSinceLastThought, class UQtnMentalSubState* K2Node_Event_previousMentalSubState, TSubclassOf<class UQtnMentalSubState> K2Node_Event_nextMentalSubStateClass, class UQtnAllyBotManager* CallFunc_GetAllyBotManager_ServerOnly_ReturnValue_1, class UAllyBotManager_C* K2Node_DynamicCast_AsAlly_Bot_Manager_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MentalSubStateHealTactics_AllyBot_C", "ExecuteUbergraph_MentalSubStateHealTactics_AllyBot");

	Params::UMentalSubStateHealTactics_AllyBot_C_ExecuteUbergraph_MentalSubStateHealTactics_AllyBot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllyBotManager_ServerOnly_ReturnValue = CallFunc_GetAllyBotManager_ServerOnly_ReturnValue;
	Parms.K2Node_DynamicCast_AsAlly_Bot_Manager = K2Node_DynamicCast_AsAlly_Bot_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_timeSinceLastThought = K2Node_Event_timeSinceLastThought;
	Parms.K2Node_Event_previousMentalSubState = K2Node_Event_previousMentalSubState;
	Parms.K2Node_Event_nextMentalSubStateClass = K2Node_Event_nextMentalSubStateClass;
	Parms.CallFunc_GetAllyBotManager_ServerOnly_ReturnValue_1 = CallFunc_GetAllyBotManager_ServerOnly_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAlly_Bot_Manager_1 = K2Node_DynamicCast_AsAlly_Bot_Manager_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


