#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FTUXRoofBlockage.FTUXRoofBlockage_C
// (Actor)

class UClass* AFTUXRoofBlockage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FTUXRoofBlockage_C");

	return Clss;
}


// FTUXRoofBlockage_C FTUXRoofBlockage.Default__FTUXRoofBlockage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFTUXRoofBlockage_C* AFTUXRoofBlockage_C::GetDefaultObj()
{
	static class AFTUXRoofBlockage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFTUXRoofBlockage_C*>(AFTUXRoofBlockage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FTUXRoofBlockage.FTUXRoofBlockage_C.TurnOff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFTUXRoofBlockage_C::TurnOff(bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FTUXRoofBlockage_C", "TurnOff");

	Params::AFTUXRoofBlockage_C_TurnOff_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


