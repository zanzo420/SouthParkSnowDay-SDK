#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnUpgradePPRule_JokerCards.QtnUpgradePPRule_JokerCards_C
// (None)

class UClass* UQtnUpgradePPRule_JokerCards_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnUpgradePPRule_JokerCards_C");

	return Clss;
}


// QtnUpgradePPRule_JokerCards_C QtnUpgradePPRule_JokerCards.Default__QtnUpgradePPRule_JokerCards_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnUpgradePPRule_JokerCards_C* UQtnUpgradePPRule_JokerCards_C::GetDefaultObj()
{
	static class UQtnUpgradePPRule_JokerCards_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnUpgradePPRule_JokerCards_C*>(UQtnUpgradePPRule_JokerCards_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnUpgradePPRule_JokerCards.QtnUpgradePPRule_JokerCards_C.RunPostProcessingRule
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AQtnBodyPawn*                Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnRolledUpgradeResult>CurrentLootArray                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQtnUpgradePPRule_JokerCards_C::RunPostProcessingRule(class AQtnBodyPawn* Pawn, TArray<struct FQtnRolledUpgradeResult>& CurrentLootArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnUpgradePPRule_JokerCards_C", "RunPostProcessingRule");

	Params::UQtnUpgradePPRule_JokerCards_C_RunPostProcessingRule_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.CurrentLootArray = CurrentLootArray;

	UObject::ProcessEvent(Func, &Parms);

}

}


