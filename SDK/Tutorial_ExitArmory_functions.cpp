#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tutorial_ExitArmory.Tutorial_ExitArmory_C
// (None)

class UClass* UTutorial_ExitArmory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tutorial_ExitArmory_C");

	return Clss;
}


// Tutorial_ExitArmory_C Tutorial_ExitArmory.Default__Tutorial_ExitArmory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTutorial_ExitArmory_C* UTutorial_ExitArmory_C::GetDefaultObj()
{
	static class UTutorial_ExitArmory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTutorial_ExitArmory_C*>(UTutorial_ExitArmory_C::StaticClass()->DefaultObject);

	return Default;
}

}


