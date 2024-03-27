#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RicochetHit_FX.RicochetHit_FX_C
// (Actor)

class UClass* ARicochetHit_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RicochetHit_FX_C");

	return Clss;
}


// RicochetHit_FX_C RicochetHit_FX.Default__RicochetHit_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARicochetHit_FX_C* ARicochetHit_FX_C::GetDefaultObj()
{
	static class ARicochetHit_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARicochetHit_FX_C*>(ARicochetHit_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


