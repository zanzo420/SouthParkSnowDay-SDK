#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LevelSequencingEntrance.LevelSequencingEntrance_C
// (Actor)

class UClass* ALevelSequencingEntrance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequencingEntrance_C");

	return Clss;
}


// LevelSequencingEntrance_C LevelSequencingEntrance.Default__LevelSequencingEntrance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALevelSequencingEntrance_C* ALevelSequencingEntrance_C::GetDefaultObj()
{
	static class ALevelSequencingEntrance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALevelSequencingEntrance_C*>(ALevelSequencingEntrance_C::StaticClass()->DefaultObject);

	return Default;
}

}


