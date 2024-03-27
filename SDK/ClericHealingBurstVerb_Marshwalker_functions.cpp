#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ClericHealingBurstVerb_Marshwalker.ClericHealingBurstVerb_Marshwalker_C
// (None)

class UClass* UClericHealingBurstVerb_Marshwalker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClericHealingBurstVerb_Marshwalker_C");

	return Clss;
}


// ClericHealingBurstVerb_Marshwalker_C ClericHealingBurstVerb_Marshwalker.Default__ClericHealingBurstVerb_Marshwalker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UClericHealingBurstVerb_Marshwalker_C* UClericHealingBurstVerb_Marshwalker_C::GetDefaultObj()
{
	static class UClericHealingBurstVerb_Marshwalker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UClericHealingBurstVerb_Marshwalker_C*>(UClericHealingBurstVerb_Marshwalker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ClericHealingBurstVerb_Marshwalker.ClericHealingBurstVerb_Marshwalker_C.Apply Cleric Healing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnBase_C*             bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               StillNeedsHealing                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Apply_Cleric_Healing_stillNeedsHealing                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UClericHealingBurstVerb_Marshwalker_C::Apply_Cleric_Healing(class ABodyPawnBase_C* bodyPawn, bool* StillNeedsHealing, bool CallFunc_Apply_Cleric_Healing_stillNeedsHealing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClericHealingBurstVerb_Marshwalker_C", "Apply Cleric Healing");

	Params::UClericHealingBurstVerb_Marshwalker_C_Apply_Cleric_Healing_Params Parms{};

	Parms.bodyPawn = bodyPawn;
	Parms.CallFunc_Apply_Cleric_Healing_stillNeedsHealing = CallFunc_Apply_Cleric_Healing_stillNeedsHealing;

	UObject::ProcessEvent(Func, &Parms);

	if (StillNeedsHealing != nullptr)
		*StillNeedsHealing = Parms.StillNeedsHealing;

}

}


