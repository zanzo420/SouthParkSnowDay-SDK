#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NerfedProjectile_Bear.NerfedProjectile_Bear_C
// (Actor)

class UClass* ANerfedProjectile_Bear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NerfedProjectile_Bear_C");

	return Clss;
}


// NerfedProjectile_Bear_C NerfedProjectile_Bear.Default__NerfedProjectile_Bear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANerfedProjectile_Bear_C* ANerfedProjectile_Bear_C::GetDefaultObj()
{
	static class ANerfedProjectile_Bear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANerfedProjectile_Bear_C*>(ANerfedProjectile_Bear_C::StaticClass()->DefaultObject);

	return Default;
}

}


