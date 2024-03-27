#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SniperBeamFire_FX.SniperBeamFire_FX_C
// (Actor)

class UClass* ASniperBeamFire_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SniperBeamFire_FX_C");

	return Clss;
}


// SniperBeamFire_FX_C SniperBeamFire_FX.Default__SniperBeamFire_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASniperBeamFire_FX_C* ASniperBeamFire_FX_C::GetDefaultObj()
{
	static class ASniperBeamFire_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASniperBeamFire_FX_C*>(ASniperBeamFire_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


