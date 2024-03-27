#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SickenedDamageType.SickenedDamageType_C
// (None)

class UClass* USickenedDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SickenedDamageType_C");

	return Clss;
}


// SickenedDamageType_C SickenedDamageType.Default__SickenedDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USickenedDamageType_C* USickenedDamageType_C::GetDefaultObj()
{
	static class USickenedDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USickenedDamageType_C*>(USickenedDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


