#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Loot_UncommonFX.Loot_UncommonFX_C
// (Actor)

class UClass* ALoot_UncommonFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Loot_UncommonFX_C");

	return Clss;
}


// Loot_UncommonFX_C Loot_UncommonFX.Default__Loot_UncommonFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALoot_UncommonFX_C* ALoot_UncommonFX_C::GetDefaultObj()
{
	static class ALoot_UncommonFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALoot_UncommonFX_C*>(ALoot_UncommonFX_C::StaticClass()->DefaultObject);

	return Default;
}

}


