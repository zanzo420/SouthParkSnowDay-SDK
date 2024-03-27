#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frozen_FX.Frozen_FX_C
// (Actor)

class UClass* AFrozen_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frozen_FX_C");

	return Clss;
}


// Frozen_FX_C Frozen_FX.Default__Frozen_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrozen_FX_C* AFrozen_FX_C::GetDefaultObj()
{
	static class AFrozen_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrozen_FX_C*>(AFrozen_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


