#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Loot_CommonFX.Loot_CommonFX_C
// (Actor)

class UClass* ALoot_CommonFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Loot_CommonFX_C");

	return Clss;
}


// Loot_CommonFX_C Loot_CommonFX.Default__Loot_CommonFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALoot_CommonFX_C* ALoot_CommonFX_C::GetDefaultObj()
{
	static class ALoot_CommonFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALoot_CommonFX_C*>(ALoot_CommonFX_C::StaticClass()->DefaultObject);

	return Default;
}

}


