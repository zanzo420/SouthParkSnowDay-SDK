#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tutorial_FTUX_FrobLoot.Tutorial_FTUX_FrobLoot_C
// (None)

class UClass* UTutorial_FTUX_FrobLoot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tutorial_FTUX_FrobLoot_C");

	return Clss;
}


// Tutorial_FTUX_FrobLoot_C Tutorial_FTUX_FrobLoot.Default__Tutorial_FTUX_FrobLoot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTutorial_FTUX_FrobLoot_C* UTutorial_FTUX_FrobLoot_C::GetDefaultObj()
{
	static class UTutorial_FTUX_FrobLoot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTutorial_FTUX_FrobLoot_C*>(UTutorial_FTUX_FrobLoot_C::StaticClass()->DefaultObject);

	return Default;
}

}


