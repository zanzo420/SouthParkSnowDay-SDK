#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Loot_Rulebook_Triple.Loot_Rulebook_Triple_C
// (Actor)

class UClass* ALoot_Rulebook_Triple_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Loot_Rulebook_Triple_C");

	return Clss;
}


// Loot_Rulebook_Triple_C Loot_Rulebook_Triple.Default__Loot_Rulebook_Triple_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALoot_Rulebook_Triple_C* ALoot_Rulebook_Triple_C::GetDefaultObj()
{
	static class ALoot_Rulebook_Triple_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALoot_Rulebook_Triple_C*>(ALoot_Rulebook_Triple_C::StaticClass()->DefaultObject);

	return Default;
}

}


