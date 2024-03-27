#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DayToggleInterface.DayToggleInterface_C
// (None)

class UClass* IDayToggleInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DayToggleInterface_C");

	return Clss;
}


// DayToggleInterface_C DayToggleInterface.Default__DayToggleInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IDayToggleInterface_C* IDayToggleInterface_C::GetDefaultObj()
{
	static class IDayToggleInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IDayToggleInterface_C*>(IDayToggleInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DayToggleInterface.DayToggleInterface_C.ToggleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantOn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IDayToggleInterface_C::ToggleEvent(bool WantOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DayToggleInterface_C", "ToggleEvent");

	Params::IDayToggleInterface_C_ToggleEvent_Params Parms{};

	Parms.WantOn = WantOn;

	UObject::ProcessEvent(Func, &Parms);

}

}


