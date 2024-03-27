#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrialEnd_FX.TrialEnd_FX_C
// (Actor)

class UClass* ATrialEnd_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrialEnd_FX_C");

	return Clss;
}


// TrialEnd_FX_C TrialEnd_FX.Default__TrialEnd_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrialEnd_FX_C* ATrialEnd_FX_C::GetDefaultObj()
{
	static class ATrialEnd_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrialEnd_FX_C*>(ATrialEnd_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


