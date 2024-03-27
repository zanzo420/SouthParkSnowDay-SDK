#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ProjectileKidOverlay_FX.ProjectileKidOverlay_FX_C
// (Actor)

class UClass* AProjectileKidOverlay_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProjectileKidOverlay_FX_C");

	return Clss;
}


// ProjectileKidOverlay_FX_C ProjectileKidOverlay_FX.Default__ProjectileKidOverlay_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectileKidOverlay_FX_C* AProjectileKidOverlay_FX_C::GetDefaultObj()
{
	static class AProjectileKidOverlay_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectileKidOverlay_FX_C*>(AProjectileKidOverlay_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


