#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArenaVisTrigger_Forward.ArenaVisTrigger_Forward_C
// (Actor)

class UClass* AArenaVisTrigger_Forward_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArenaVisTrigger_Forward_C");

	return Clss;
}


// ArenaVisTrigger_Forward_C ArenaVisTrigger_Forward.Default__ArenaVisTrigger_Forward_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AArenaVisTrigger_Forward_C* AArenaVisTrigger_Forward_C::GetDefaultObj()
{
	static class AArenaVisTrigger_Forward_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AArenaVisTrigger_Forward_C*>(AArenaVisTrigger_Forward_C::StaticClass()->DefaultObject);

	return Default;
}

}


