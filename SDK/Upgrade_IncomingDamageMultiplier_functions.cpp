#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Upgrade_IncomingDamageMultiplier.Upgrade_IncomingDamageMultiplier_C
// (None)

class UClass* UUpgrade_IncomingDamageMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Upgrade_IncomingDamageMultiplier_C");

	return Clss;
}


// Upgrade_IncomingDamageMultiplier_C Upgrade_IncomingDamageMultiplier.Default__Upgrade_IncomingDamageMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUpgrade_IncomingDamageMultiplier_C* UUpgrade_IncomingDamageMultiplier_C::GetDefaultObj()
{
	static class UUpgrade_IncomingDamageMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUpgrade_IncomingDamageMultiplier_C*>(UUpgrade_IncomingDamageMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


