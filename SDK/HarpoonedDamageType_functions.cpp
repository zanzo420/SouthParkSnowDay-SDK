#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HarpoonedDamageType.HarpoonedDamageType_C
// (None)

class UClass* UHarpoonedDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HarpoonedDamageType_C");

	return Clss;
}


// HarpoonedDamageType_C HarpoonedDamageType.Default__HarpoonedDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHarpoonedDamageType_C* UHarpoonedDamageType_C::GetDefaultObj()
{
	static class UHarpoonedDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHarpoonedDamageType_C*>(UHarpoonedDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


