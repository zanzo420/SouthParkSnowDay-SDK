#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Powers_HealingTotem_Tutorial.Powers_HealingTotem_Tutorial_C
// (None)

class UClass* UPowers_HealingTotem_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Powers_HealingTotem_Tutorial_C");

	return Clss;
}


// Powers_HealingTotem_Tutorial_C Powers_HealingTotem_Tutorial.Default__Powers_HealingTotem_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPowers_HealingTotem_Tutorial_C* UPowers_HealingTotem_Tutorial_C::GetDefaultObj()
{
	static class UPowers_HealingTotem_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPowers_HealingTotem_Tutorial_C*>(UPowers_HealingTotem_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


