#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FTUXButtersHealingBurstVerb.FTUXButtersHealingBurstVerb_C
// (None)

class UClass* UFTUXButtersHealingBurstVerb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FTUXButtersHealingBurstVerb_C");

	return Clss;
}


// FTUXButtersHealingBurstVerb_C FTUXButtersHealingBurstVerb.Default__FTUXButtersHealingBurstVerb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFTUXButtersHealingBurstVerb_C* UFTUXButtersHealingBurstVerb_C::GetDefaultObj()
{
	static class UFTUXButtersHealingBurstVerb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFTUXButtersHealingBurstVerb_C*>(UFTUXButtersHealingBurstVerb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FTUXButtersHealingBurstVerb.FTUXButtersHealingBurstVerb_C.Play FTUX VO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFTUXButtersHealingBurstVerb_C::Play_FTUX_VO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUXButtersHealingBurstVerb_C", "Play FTUX VO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FTUXButtersHealingBurstVerb.FTUXButtersHealingBurstVerb_C.HealAllNearbyAllies
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FinishedHealing                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HealAllNearbyAllies_finishedHealing                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFTUXButtersHealingBurstVerb_C::HealAllNearbyAllies(bool* FinishedHealing, bool CallFunc_HealAllNearbyAllies_finishedHealing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUXButtersHealingBurstVerb_C", "HealAllNearbyAllies");

	Params::UFTUXButtersHealingBurstVerb_C_HealAllNearbyAllies_Params Parms{};

	Parms.CallFunc_HealAllNearbyAllies_finishedHealing = CallFunc_HealAllNearbyAllies_finishedHealing;

	UObject::ProcessEvent(Func, &Parms);

	if (FinishedHealing != nullptr)
		*FinishedHealing = Parms.FinishedHealing;

}

}


