#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BleedingDamageType.BleedingDamageType_C
// (None)

class UClass* UBleedingDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BleedingDamageType_C");

	return Clss;
}


// BleedingDamageType_C BleedingDamageType.Default__BleedingDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBleedingDamageType_C* UBleedingDamageType_C::GetDefaultObj()
{
	static class UBleedingDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBleedingDamageType_C*>(UBleedingDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


