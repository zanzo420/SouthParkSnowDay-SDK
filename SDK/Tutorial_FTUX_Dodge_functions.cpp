#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tutorial_FTUX_Dodge.Tutorial_FTUX_Dodge_C
// (None)

class UClass* UTutorial_FTUX_Dodge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tutorial_FTUX_Dodge_C");

	return Clss;
}


// Tutorial_FTUX_Dodge_C Tutorial_FTUX_Dodge.Default__Tutorial_FTUX_Dodge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTutorial_FTUX_Dodge_C* UTutorial_FTUX_Dodge_C::GetDefaultObj()
{
	static class UTutorial_FTUX_Dodge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTutorial_FTUX_Dodge_C*>(UTutorial_FTUX_Dodge_C::StaticClass()->DefaultObject);

	return Default;
}

}


