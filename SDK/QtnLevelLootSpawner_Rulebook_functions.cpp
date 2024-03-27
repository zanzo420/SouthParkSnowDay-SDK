#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnLevelLootSpawner_Rulebook.QtnLevelLootSpawner_Rulebook_C
// (Actor)

class UClass* AQtnLevelLootSpawner_Rulebook_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnLevelLootSpawner_Rulebook_C");

	return Clss;
}


// QtnLevelLootSpawner_Rulebook_C QtnLevelLootSpawner_Rulebook.Default__QtnLevelLootSpawner_Rulebook_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQtnLevelLootSpawner_Rulebook_C* AQtnLevelLootSpawner_Rulebook_C::GetDefaultObj()
{
	static class AQtnLevelLootSpawner_Rulebook_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQtnLevelLootSpawner_Rulebook_C*>(AQtnLevelLootSpawner_Rulebook_C::StaticClass()->DefaultObject);

	return Default;
}

}


