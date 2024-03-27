#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DeathTotemDamageType.DeathTotemDamageType_C
// (None)

class UClass* UDeathTotemDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeathTotemDamageType_C");

	return Clss;
}


// DeathTotemDamageType_C DeathTotemDamageType.Default__DeathTotemDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDeathTotemDamageType_C* UDeathTotemDamageType_C::GetDefaultObj()
{
	static class UDeathTotemDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeathTotemDamageType_C*>(UDeathTotemDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


