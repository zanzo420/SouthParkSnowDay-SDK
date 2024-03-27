#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GateLockInterface.GateLockInterface_C
// (None)

class UClass* IGateLockInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GateLockInterface_C");

	return Clss;
}


// GateLockInterface_C GateLockInterface.Default__GateLockInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IGateLockInterface_C* IGateLockInterface_C::GetDefaultObj()
{
	static class IGateLockInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IGateLockInterface_C*>(IGateLockInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GateLockInterface.GateLockInterface_C.TogglePickablePresetation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantPickable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Lock                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGateLockInterface_C::TogglePickablePresetation(bool WantPickable, class UObject* Lock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GateLockInterface_C", "TogglePickablePresetation");

	Params::IGateLockInterface_C_TogglePickablePresetation_Params Parms{};

	Parms.WantPickable = WantPickable;
	Parms.Lock = Lock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GateLockInterface.GateLockInterface_C.Toggle Lock Open Presentation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Want_locked                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Lock                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IGateLockInterface_C::Toggle_Lock_Open_Presentation(bool Want_locked, class UObject* Lock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GateLockInterface_C", "Toggle Lock Open Presentation");

	Params::IGateLockInterface_C_Toggle_Lock_Open_Presentation_Params Parms{};

	Parms.Want_locked = Want_locked;
	Parms.Lock = Lock;

	UObject::ProcessEvent(Func, &Parms);

}

}


