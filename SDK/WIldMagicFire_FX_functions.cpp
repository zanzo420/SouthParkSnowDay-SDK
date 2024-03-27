#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WIldMagicFire_FX.WIldMagicFire_FX_C
// (Actor)

class UClass* AWIldMagicFire_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WIldMagicFire_FX_C");

	return Clss;
}


// WIldMagicFire_FX_C WIldMagicFire_FX.Default__WIldMagicFire_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWIldMagicFire_FX_C* AWIldMagicFire_FX_C::GetDefaultObj()
{
	static class AWIldMagicFire_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWIldMagicFire_FX_C*>(AWIldMagicFire_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


