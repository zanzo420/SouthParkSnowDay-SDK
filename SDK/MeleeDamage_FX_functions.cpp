#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MeleeDamage_FX.MeleeDamage_FX_C
// (Actor)

class UClass* AMeleeDamage_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeleeDamage_FX_C");

	return Clss;
}


// MeleeDamage_FX_C MeleeDamage_FX.Default__MeleeDamage_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMeleeDamage_FX_C* AMeleeDamage_FX_C::GetDefaultObj()
{
	static class AMeleeDamage_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMeleeDamage_FX_C*>(AMeleeDamage_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


