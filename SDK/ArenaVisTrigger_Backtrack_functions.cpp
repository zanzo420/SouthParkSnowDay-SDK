#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArenaVisTrigger_Backtrack.ArenaVisTrigger_Backtrack_C
// (Actor)

class UClass* AArenaVisTrigger_Backtrack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArenaVisTrigger_Backtrack_C");

	return Clss;
}


// ArenaVisTrigger_Backtrack_C ArenaVisTrigger_Backtrack.Default__ArenaVisTrigger_Backtrack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AArenaVisTrigger_Backtrack_C* AArenaVisTrigger_Backtrack_C::GetDefaultObj()
{
	static class AArenaVisTrigger_Backtrack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AArenaVisTrigger_Backtrack_C*>(AArenaVisTrigger_Backtrack_C::StaticClass()->DefaultObject);

	return Default;
}

}


