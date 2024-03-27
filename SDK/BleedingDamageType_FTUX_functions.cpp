#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BleedingDamageType_FTUX.BleedingDamageType_FTUX_C
// (None)

class UClass* UBleedingDamageType_FTUX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BleedingDamageType_FTUX_C");

	return Clss;
}


// BleedingDamageType_FTUX_C BleedingDamageType_FTUX.Default__BleedingDamageType_FTUX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBleedingDamageType_FTUX_C* UBleedingDamageType_FTUX_C::GetDefaultObj()
{
	static class UBleedingDamageType_FTUX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBleedingDamageType_FTUX_C*>(UBleedingDamageType_FTUX_C::StaticClass()->DefaultObject);

	return Default;
}

}


