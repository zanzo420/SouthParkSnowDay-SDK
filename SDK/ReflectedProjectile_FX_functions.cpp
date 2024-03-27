#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ReflectedProjectile_FX.ReflectedProjectile_FX_C
// (Actor)

class UClass* AReflectedProjectile_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReflectedProjectile_FX_C");

	return Clss;
}


// ReflectedProjectile_FX_C ReflectedProjectile_FX.Default__ReflectedProjectile_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AReflectedProjectile_FX_C* AReflectedProjectile_FX_C::GetDefaultObj()
{
	static class AReflectedProjectile_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AReflectedProjectile_FX_C*>(AReflectedProjectile_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


