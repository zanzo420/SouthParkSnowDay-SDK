#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MeleeVerbNerfedMeleeCombo.MeleeVerbNerfedMeleeCombo_C
// (None)

class UClass* UMeleeVerbNerfedMeleeCombo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeleeVerbNerfedMeleeCombo_C");

	return Clss;
}


// MeleeVerbNerfedMeleeCombo_C MeleeVerbNerfedMeleeCombo.Default__MeleeVerbNerfedMeleeCombo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMeleeVerbNerfedMeleeCombo_C* UMeleeVerbNerfedMeleeCombo_C::GetDefaultObj()
{
	static class UMeleeVerbNerfedMeleeCombo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeleeVerbNerfedMeleeCombo_C*>(UMeleeVerbNerfedMeleeCombo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MeleeVerbNerfedMeleeCombo.MeleeVerbNerfedMeleeCombo_C.CanVerbStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     PotentialTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanVerbStart_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UMeleeVerbNerfedMeleeCombo_C::CanVerbStart(class UObject* PotentialTarget, bool CallFunc_CanVerbStart_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeleeVerbNerfedMeleeCombo_C", "CanVerbStart");

	Params::UMeleeVerbNerfedMeleeCombo_C_CanVerbStart_Params Parms{};

	Parms.PotentialTarget = PotentialTarget;
	Parms.CallFunc_CanVerbStart_ReturnValue = CallFunc_CanVerbStart_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


