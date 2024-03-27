#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LevelSequencingExit.LevelSequencingExit_C
// (Actor)

class UClass* ALevelSequencingExit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequencingExit_C");

	return Clss;
}


// LevelSequencingExit_C LevelSequencingExit.Default__LevelSequencingExit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALevelSequencingExit_C* ALevelSequencingExit_C::GetDefaultObj()
{
	static class ALevelSequencingExit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALevelSequencingExit_C*>(ALevelSequencingExit_C::StaticClass()->DefaultObject);

	return Default;
}

}


