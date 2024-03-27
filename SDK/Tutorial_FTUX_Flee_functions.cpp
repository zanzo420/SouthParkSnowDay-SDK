#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tutorial_FTUX_Flee.Tutorial_FTUX_Flee_C
// (None)

class UClass* UTutorial_FTUX_Flee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tutorial_FTUX_Flee_C");

	return Clss;
}


// Tutorial_FTUX_Flee_C Tutorial_FTUX_Flee.Default__Tutorial_FTUX_Flee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTutorial_FTUX_Flee_C* UTutorial_FTUX_Flee_C::GetDefaultObj()
{
	static class UTutorial_FTUX_Flee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTutorial_FTUX_Flee_C*>(UTutorial_FTUX_Flee_C::StaticClass()->DefaultObject);

	return Default;
}

}


