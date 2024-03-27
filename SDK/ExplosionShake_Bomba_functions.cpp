#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ExplosionShake_Bomba.ExplosionShake_Bomba_C
// (None)

class UClass* UExplosionShake_Bomba_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExplosionShake_Bomba_C");

	return Clss;
}


// ExplosionShake_Bomba_C ExplosionShake_Bomba.Default__ExplosionShake_Bomba_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UExplosionShake_Bomba_C* UExplosionShake_Bomba_C::GetDefaultObj()
{
	static class UExplosionShake_Bomba_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UExplosionShake_Bomba_C*>(UExplosionShake_Bomba_C::StaticClass()->DefaultObject);

	return Default;
}

}


