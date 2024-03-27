#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnOutcome_GainedBonusCurrency.QtnOutcome_GainedBonusCurrency_C
// (None)

class UClass* UQtnOutcome_GainedBonusCurrency_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnOutcome_GainedBonusCurrency_C");

	return Clss;
}


// QtnOutcome_GainedBonusCurrency_C QtnOutcome_GainedBonusCurrency.Default__QtnOutcome_GainedBonusCurrency_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnOutcome_GainedBonusCurrency_C* UQtnOutcome_GainedBonusCurrency_C::GetDefaultObj()
{
	static class UQtnOutcome_GainedBonusCurrency_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnOutcome_GainedBonusCurrency_C*>(UQtnOutcome_GainedBonusCurrency_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnOutcome_GainedBonusCurrency.QtnOutcome_GainedBonusCurrency_C.K2_CalculateOutcome
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnEventMessage            EventMessage                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FQtnPlayerOutcomeResult     ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UObject*                     CallFunc_StaticGetEventWriter_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_StaticGetEventContextInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             CallFunc_GetOccupyingPlayerState_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOccupiedByPlayer_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_QtnGetUniqueId_ReturnValue                              (ConstParm, HasGetValueTypeHash)
// struct FQtnPlayerOutcomeResult     K2Node_MakeStruct_QtnPlayerOutcomeResult                         (None)
// struct FQtnPlayerOutcomeResult     K2Node_MakeStruct_QtnPlayerOutcomeResult_1                       (None)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_StaticGetEventContextGameplayTag_ReturnValue            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FQtnPlayerOutcomeResult UQtnOutcome_GainedBonusCurrency_C::K2_CalculateOutcome(struct FQtnEventMessage& EventMessage, class UObject* CallFunc_StaticGetEventWriter_ReturnValue, int32 CallFunc_StaticGetEventContextInt_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, class AQtnPlayerState* CallFunc_GetOccupyingPlayerState_ReturnValue, bool CallFunc_IsOccupiedByPlayer_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_QtnGetUniqueId_ReturnValue, const struct FQtnPlayerOutcomeResult& K2Node_MakeStruct_QtnPlayerOutcomeResult, const struct FQtnPlayerOutcomeResult& K2Node_MakeStruct_QtnPlayerOutcomeResult_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayTag& CallFunc_StaticGetEventContextGameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnOutcome_GainedBonusCurrency_C", "K2_CalculateOutcome");

	Params::UQtnOutcome_GainedBonusCurrency_C_K2_CalculateOutcome_Params Parms{};

	Parms.EventMessage = EventMessage;
	Parms.CallFunc_StaticGetEventWriter_ReturnValue = CallFunc_StaticGetEventWriter_ReturnValue;
	Parms.CallFunc_StaticGetEventContextInt_ReturnValue = CallFunc_StaticGetEventContextInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetOccupyingPlayerState_ReturnValue = CallFunc_GetOccupyingPlayerState_ReturnValue;
	Parms.CallFunc_IsOccupiedByPlayer_ReturnValue = CallFunc_IsOccupiedByPlayer_ReturnValue;
	Parms.CallFunc_QtnGetUniqueId_ReturnValue = CallFunc_QtnGetUniqueId_ReturnValue;
	Parms.K2Node_MakeStruct_QtnPlayerOutcomeResult = K2Node_MakeStruct_QtnPlayerOutcomeResult;
	Parms.K2Node_MakeStruct_QtnPlayerOutcomeResult_1 = K2Node_MakeStruct_QtnPlayerOutcomeResult_1;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_StaticGetEventContextGameplayTag_ReturnValue = CallFunc_StaticGetEventContextGameplayTag_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


