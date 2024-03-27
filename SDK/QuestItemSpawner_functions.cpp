#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QuestItemSpawner.QuestItemSpawner_C
// (Actor)

class UClass* AQuestItemSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestItemSpawner_C");

	return Clss;
}


// QuestItemSpawner_C QuestItemSpawner.Default__QuestItemSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQuestItemSpawner_C* AQuestItemSpawner_C::GetDefaultObj()
{
	static class AQuestItemSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQuestItemSpawner_C*>(AQuestItemSpawner_C::StaticClass()->DefaultObject);

	return Default;
}

}


