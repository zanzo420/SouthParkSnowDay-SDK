#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnUpgradePPRuleArchetype.QtnUpgradePPRuleArchetype_C
// (None)

class UClass* UQtnUpgradePPRuleArchetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnUpgradePPRuleArchetype_C");

	return Clss;
}


// QtnUpgradePPRuleArchetype_C QtnUpgradePPRuleArchetype.Default__QtnUpgradePPRuleArchetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnUpgradePPRuleArchetype_C* UQtnUpgradePPRuleArchetype_C::GetDefaultObj()
{
	static class UQtnUpgradePPRuleArchetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnUpgradePPRuleArchetype_C*>(UQtnUpgradePPRuleArchetype_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QtnUpgradePPRuleArchetype.QtnUpgradePPRuleArchetype_C.RunPostProcessingRule
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AQtnBodyPawn*                Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnRolledUpgradeResult>CurrentLootArray                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQtnUpgradePPRuleArchetype_C::RunPostProcessingRule(class AQtnBodyPawn* Pawn, TArray<struct FQtnRolledUpgradeResult>& CurrentLootArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QtnUpgradePPRuleArchetype_C", "RunPostProcessingRule");

	Params::UQtnUpgradePPRuleArchetype_C_RunPostProcessingRule_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.CurrentLootArray = CurrentLootArray;

	UObject::ProcessEvent(Func, &Parms);

}

}


