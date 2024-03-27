#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ExplosionShake.ExplosionShake_C
// (None)

class UClass* UExplosionShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExplosionShake_C");

	return Clss;
}


// ExplosionShake_C ExplosionShake.Default__ExplosionShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UExplosionShake_C* UExplosionShake_C::GetDefaultObj()
{
	static class UExplosionShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UExplosionShake_C*>(UExplosionShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


