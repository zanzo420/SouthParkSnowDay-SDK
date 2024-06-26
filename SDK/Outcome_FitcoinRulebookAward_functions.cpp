#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Outcome_FitcoinRulebookAward.Outcome_FitcoinRulebookAward_C
// (None)

class UClass* UOutcome_FitcoinRulebookAward_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Outcome_FitcoinRulebookAward_C");

	return Clss;
}


// Outcome_FitcoinRulebookAward_C Outcome_FitcoinRulebookAward.Default__Outcome_FitcoinRulebookAward_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOutcome_FitcoinRulebookAward_C* UOutcome_FitcoinRulebookAward_C::GetDefaultObj()
{
	static class UOutcome_FitcoinRulebookAward_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOutcome_FitcoinRulebookAward_C*>(UOutcome_FitcoinRulebookAward_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Outcome_FitcoinRulebookAward.Outcome_FitcoinRulebookAward_C.K2_CalculateOutcome
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnEventMessage            EventMessage                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQtnPlayerOutcomeResult     ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UObject*                     CallFunc_StaticGetEventWriter_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_StaticGetEventContextFloat_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerState*             CallFunc_GetOccupyingPlayerState_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_QtnGetUniqueId_ReturnValue                              (ConstParm, HasGetValueTypeHash)
// struct FQtnPlayerOutcomeResult     K2Node_MakeStruct_QtnPlayerOutcomeResult                         (None)

struct FQtnPlayerOutcomeResult UOutcome_FitcoinRulebookAward_C::K2_CalculateOutcome(struct FQtnEventMessage& EventMessage, class UObject* CallFunc_StaticGetEventWriter_ReturnValue, float CallFunc_StaticGetEventContextFloat_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerState* CallFunc_GetOccupyingPlayerState_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_QtnGetUniqueId_ReturnValue, const struct FQtnPlayerOutcomeResult& K2Node_MakeStruct_QtnPlayerOutcomeResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Outcome_FitcoinRulebookAward_C", "K2_CalculateOutcome");

	Params::UOutcome_FitcoinRulebookAward_C_K2_CalculateOutcome_Params Parms{};

	Parms.EventMessage = EventMessage;
	Parms.CallFunc_StaticGetEventWriter_ReturnValue = CallFunc_StaticGetEventWriter_ReturnValue;
	Parms.CallFunc_StaticGetEventContextFloat_ReturnValue = CallFunc_StaticGetEventContextFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOccupyingPlayerState_ReturnValue = CallFunc_GetOccupyingPlayerState_ReturnValue;
	Parms.CallFunc_QtnGetUniqueId_ReturnValue = CallFunc_QtnGetUniqueId_ReturnValue;
	Parms.K2Node_MakeStruct_QtnPlayerOutcomeResult = K2Node_MakeStruct_QtnPlayerOutcomeResult;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


