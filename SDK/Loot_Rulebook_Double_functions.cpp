#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Loot_Rulebook_Double.Loot_Rulebook_Double_C
// (Actor)

class UClass* ALoot_Rulebook_Double_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Loot_Rulebook_Double_C");

	return Clss;
}


// Loot_Rulebook_Double_C Loot_Rulebook_Double.Default__Loot_Rulebook_Double_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALoot_Rulebook_Double_C* ALoot_Rulebook_Double_C::GetDefaultObj()
{
	static class ALoot_Rulebook_Double_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALoot_Rulebook_Double_C*>(ALoot_Rulebook_Double_C::StaticClass()->DefaultObject);

	return Default;
}

}


