#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ProjectileVortexCapture_FX.ProjectileVortexCapture_FX_C
// (Actor)

class UClass* AProjectileVortexCapture_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProjectileVortexCapture_FX_C");

	return Clss;
}


// ProjectileVortexCapture_FX_C ProjectileVortexCapture_FX.Default__ProjectileVortexCapture_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectileVortexCapture_FX_C* AProjectileVortexCapture_FX_C::GetDefaultObj()
{
	static class AProjectileVortexCapture_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectileVortexCapture_FX_C*>(AProjectileVortexCapture_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


