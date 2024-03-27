#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageTypeFallDamage.DamageTypeFallDamage_C
// (None)

class UClass* UDamageTypeFallDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageTypeFallDamage_C");

	return Clss;
}


// DamageTypeFallDamage_C DamageTypeFallDamage.Default__DamageTypeFallDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageTypeFallDamage_C* UDamageTypeFallDamage_C::GetDefaultObj()
{
	static class UDamageTypeFallDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageTypeFallDamage_C*>(UDamageTypeFallDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


