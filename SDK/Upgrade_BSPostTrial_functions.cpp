#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Upgrade_BSPostTrial.Upgrade_BSPostTrial_C
// (None)

class UClass* UUpgrade_BSPostTrial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Upgrade_BSPostTrial_C");

	return Clss;
}


// Upgrade_BSPostTrial_C Upgrade_BSPostTrial.Default__Upgrade_BSPostTrial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUpgrade_BSPostTrial_C* UUpgrade_BSPostTrial_C::GetDefaultObj()
{
	static class UUpgrade_BSPostTrial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUpgrade_BSPostTrial_C*>(UUpgrade_BSPostTrial_C::StaticClass()->DefaultObject);

	return Default;
}

}


