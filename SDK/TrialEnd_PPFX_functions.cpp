#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrialEnd_PPFX.TrialEnd_PPFX_C
// (None)

class UClass* UTrialEnd_PPFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrialEnd_PPFX_C");

	return Clss;
}


// TrialEnd_PPFX_C TrialEnd_PPFX.Default__TrialEnd_PPFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTrialEnd_PPFX_C* UTrialEnd_PPFX_C::GetDefaultObj()
{
	static class UTrialEnd_PPFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTrialEnd_PPFX_C*>(UTrialEnd_PPFX_C::StaticClass()->DefaultObject);

	return Default;
}

}


