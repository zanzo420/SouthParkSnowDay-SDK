#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Outcome_PlayerMeleeKills.Outcome_PlayerMeleeKills_C
// (None)

class UClass* UOutcome_PlayerMeleeKills_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Outcome_PlayerMeleeKills_C");

	return Clss;
}


// Outcome_PlayerMeleeKills_C Outcome_PlayerMeleeKills.Default__Outcome_PlayerMeleeKills_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOutcome_PlayerMeleeKills_C* UOutcome_PlayerMeleeKills_C::GetDefaultObj()
{
	static class UOutcome_PlayerMeleeKills_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOutcome_PlayerMeleeKills_C*>(UOutcome_PlayerMeleeKills_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Outcome_PlayerMeleeKills.Outcome_PlayerMeleeKills_C.K2_CalculateOutcome
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnEventMessage            EventMessage                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQtnPlayerOutcomeResult     ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FQtnPlayerOutcomeResult     K2Node_MakeStruct_QtnPlayerOutcomeResult                         (None)
// bool                               CallFunc_StaticGetEventContextBool_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_StaticGetEventWriter_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerState*             CallFunc_GetOccupyingPlayerState_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_QtnGetUniqueId_ReturnValue                              (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnPlayerOutcomeResult     K2Node_MakeStruct_QtnPlayerOutcomeResult_1                       (None)

struct FQtnPlayerOutcomeResult UOutcome_PlayerMeleeKills_C::K2_CalculateOutcome(struct FQtnEventMessage& EventMessage, const struct FQtnPlayerOutcomeResult& K2Node_MakeStruct_QtnPlayerOutcomeResult, bool CallFunc_StaticGetEventContextBool_ReturnValue, class UObject* CallFunc_StaticGetEventWriter_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerState* CallFunc_GetOccupyingPlayerState_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_QtnGetUniqueId_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FQtnPlayerOutcomeResult& K2Node_MakeStruct_QtnPlayerOutcomeResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Outcome_PlayerMeleeKills_C", "K2_CalculateOutcome");

	Params::UOutcome_PlayerMeleeKills_C_K2_CalculateOutcome_Params Parms{};

	Parms.EventMessage = EventMessage;
	Parms.K2Node_MakeStruct_QtnPlayerOutcomeResult = K2Node_MakeStruct_QtnPlayerOutcomeResult;
	Parms.CallFunc_StaticGetEventContextBool_ReturnValue = CallFunc_StaticGetEventContextBool_ReturnValue;
	Parms.CallFunc_StaticGetEventWriter_ReturnValue = CallFunc_StaticGetEventWriter_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOccupyingPlayerState_ReturnValue = CallFunc_GetOccupyingPlayerState_ReturnValue;
	Parms.CallFunc_QtnGetUniqueId_ReturnValue = CallFunc_QtnGetUniqueId_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_QtnPlayerOutcomeResult_1 = K2Node_MakeStruct_QtnPlayerOutcomeResult_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


