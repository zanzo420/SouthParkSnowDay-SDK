#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Upgrade_Tutorial.Upgrade_Tutorial_C
// (None)

class UClass* UUpgrade_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Upgrade_Tutorial_C");

	return Clss;
}


// Upgrade_Tutorial_C Upgrade_Tutorial.Default__Upgrade_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUpgrade_Tutorial_C* UUpgrade_Tutorial_C::GetDefaultObj()
{
	static class UUpgrade_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUpgrade_Tutorial_C*>(UUpgrade_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


