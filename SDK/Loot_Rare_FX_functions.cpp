#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Loot_Rare_FX.Loot_Rare_FX_C
// (Actor)

class UClass* ALoot_Rare_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Loot_Rare_FX_C");

	return Clss;
}


// Loot_Rare_FX_C Loot_Rare_FX.Default__Loot_Rare_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALoot_Rare_FX_C* ALoot_Rare_FX_C::GetDefaultObj()
{
	static class ALoot_Rare_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALoot_Rare_FX_C*>(ALoot_Rare_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


