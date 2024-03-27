#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NerfedProjectile_Football.NerfedProjectile_Football_C
// (Actor)

class UClass* ANerfedProjectile_Football_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NerfedProjectile_Football_C");

	return Clss;
}


// NerfedProjectile_Football_C NerfedProjectile_Football.Default__NerfedProjectile_Football_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANerfedProjectile_Football_C* ANerfedProjectile_Football_C::GetDefaultObj()
{
	static class ANerfedProjectile_Football_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANerfedProjectile_Football_C*>(ANerfedProjectile_Football_C::StaticClass()->DefaultObject);

	return Default;
}

}


