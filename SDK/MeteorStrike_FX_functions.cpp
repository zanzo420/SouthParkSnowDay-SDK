#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MeteorStrike_FX.MeteorStrike_FX_C
// (Actor)

class UClass* AMeteorStrike_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeteorStrike_FX_C");

	return Clss;
}


// MeteorStrike_FX_C MeteorStrike_FX.Default__MeteorStrike_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMeteorStrike_FX_C* AMeteorStrike_FX_C::GetDefaultObj()
{
	static class AMeteorStrike_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMeteorStrike_FX_C*>(AMeteorStrike_FX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MeteorStrike_FX.MeteorStrike_FX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsPlatform_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMeteorStrike_FX_C::UserConstructionScript(bool CallFunc_IsPlatform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeteorStrike_FX_C", "UserConstructionScript");

	Params::AMeteorStrike_FX_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_IsPlatform_ReturnValue = CallFunc_IsPlatform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


