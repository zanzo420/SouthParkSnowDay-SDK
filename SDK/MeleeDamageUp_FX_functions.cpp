#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MeleeDamageUp_FX.MeleeDamageUp_FX_C
// (Actor)

class UClass* AMeleeDamageUp_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeleeDamageUp_FX_C");

	return Clss;
}


// MeleeDamageUp_FX_C MeleeDamageUp_FX.Default__MeleeDamageUp_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMeleeDamageUp_FX_C* AMeleeDamageUp_FX_C::GetDefaultObj()
{
	static class AMeleeDamageUp_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMeleeDamageUp_FX_C*>(AMeleeDamageUp_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


