#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Powers_Brainwash_Tutorial.Powers_Brainwash_Tutorial_C
// (None)

class UClass* UPowers_Brainwash_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Powers_Brainwash_Tutorial_C");

	return Clss;
}


// Powers_Brainwash_Tutorial_C Powers_Brainwash_Tutorial.Default__Powers_Brainwash_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPowers_Brainwash_Tutorial_C* UPowers_Brainwash_Tutorial_C::GetDefaultObj()
{
	static class UPowers_Brainwash_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPowers_Brainwash_Tutorial_C*>(UPowers_Brainwash_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


