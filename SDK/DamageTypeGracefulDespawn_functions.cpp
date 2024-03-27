#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageTypeGracefulDespawn.DamageTypeGracefulDespawn_C
// (None)

class UClass* UDamageTypeGracefulDespawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageTypeGracefulDespawn_C");

	return Clss;
}


// DamageTypeGracefulDespawn_C DamageTypeGracefulDespawn.Default__DamageTypeGracefulDespawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageTypeGracefulDespawn_C* UDamageTypeGracefulDespawn_C::GetDefaultObj()
{
	static class UDamageTypeGracefulDespawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageTypeGracefulDespawn_C*>(UDamageTypeGracefulDespawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


