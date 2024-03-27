#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NerfedProjectile_Duck.NerfedProjectile_Duck_C
// (Actor)

class UClass* ANerfedProjectile_Duck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NerfedProjectile_Duck_C");

	return Clss;
}


// NerfedProjectile_Duck_C NerfedProjectile_Duck.Default__NerfedProjectile_Duck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANerfedProjectile_Duck_C* ANerfedProjectile_Duck_C::GetDefaultObj()
{
	static class ANerfedProjectile_Duck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANerfedProjectile_Duck_C*>(ANerfedProjectile_Duck_C::StaticClass()->DefaultObject);

	return Default;
}

}


