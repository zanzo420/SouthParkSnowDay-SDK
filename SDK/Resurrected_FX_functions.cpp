#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Resurrected_FX.Resurrected_FX_C
// (Actor)

class UClass* AResurrected_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Resurrected_FX_C");

	return Clss;
}


// Resurrected_FX_C Resurrected_FX.Default__Resurrected_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AResurrected_FX_C* AResurrected_FX_C::GetDefaultObj()
{
	static class AResurrected_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AResurrected_FX_C*>(AResurrected_FX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Resurrected_FX.Resurrected_FX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQtnUtilitiesSwitchQualityCallFunc_BranchUseSwitchQuality_Branch                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AResurrected_FX_C::UserConstructionScript(enum class EQtnUtilitiesSwitchQuality CallFunc_BranchUseSwitchQuality_Branch, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Resurrected_FX_C", "UserConstructionScript");

	Params::AResurrected_FX_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_BranchUseSwitchQuality_Branch = CallFunc_BranchUseSwitchQuality_Branch;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


