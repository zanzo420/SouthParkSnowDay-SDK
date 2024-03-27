#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Upgrade_AOE_Radius_Multiplier.Upgrade_AOE_Radius_Multiplier_C
// (None)

class UClass* UUpgrade_AOE_Radius_Multiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Upgrade_AOE_Radius_Multiplier_C");

	return Clss;
}


// Upgrade_AOE_Radius_Multiplier_C Upgrade_AOE_Radius_Multiplier.Default__Upgrade_AOE_Radius_Multiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUpgrade_AOE_Radius_Multiplier_C* UUpgrade_AOE_Radius_Multiplier_C::GetDefaultObj()
{
	static class UUpgrade_AOE_Radius_Multiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUpgrade_AOE_Radius_Multiplier_C*>(UUpgrade_AOE_Radius_Multiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


