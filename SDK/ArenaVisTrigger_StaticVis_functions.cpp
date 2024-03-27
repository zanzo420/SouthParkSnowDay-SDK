#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArenaVisTrigger_StaticVis.ArenaVisTrigger_StaticVis_C
// (Actor)

class UClass* AArenaVisTrigger_StaticVis_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArenaVisTrigger_StaticVis_C");

	return Clss;
}


// ArenaVisTrigger_StaticVis_C ArenaVisTrigger_StaticVis.Default__ArenaVisTrigger_StaticVis_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AArenaVisTrigger_StaticVis_C* AArenaVisTrigger_StaticVis_C::GetDefaultObj()
{
	static class AArenaVisTrigger_StaticVis_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AArenaVisTrigger_StaticVis_C*>(AArenaVisTrigger_StaticVis_C::StaticClass()->DefaultObject);

	return Default;
}

}


