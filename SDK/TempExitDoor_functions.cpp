#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TempExitDoor.TempExitDoor_C
// (Actor)

class UClass* ATempExitDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TempExitDoor_C");

	return Clss;
}


// TempExitDoor_C TempExitDoor.Default__TempExitDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATempExitDoor_C* ATempExitDoor_C::GetDefaultObj()
{
	static class ATempExitDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATempExitDoor_C*>(ATempExitDoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


