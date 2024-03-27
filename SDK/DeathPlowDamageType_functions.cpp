#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DeathPlowDamageType.DeathPlowDamageType_C
// (None)

class UClass* UDeathPlowDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeathPlowDamageType_C");

	return Clss;
}


// DeathPlowDamageType_C DeathPlowDamageType.Default__DeathPlowDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDeathPlowDamageType_C* UDeathPlowDamageType_C::GetDefaultObj()
{
	static class UDeathPlowDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeathPlowDamageType_C*>(UDeathPlowDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


