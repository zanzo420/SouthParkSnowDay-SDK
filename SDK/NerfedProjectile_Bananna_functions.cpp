#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NerfedProjectile_Bananna.NerfedProjectile_Bananna_C
// (Actor)

class UClass* ANerfedProjectile_Bananna_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NerfedProjectile_Bananna_C");

	return Clss;
}


// NerfedProjectile_Bananna_C NerfedProjectile_Bananna.Default__NerfedProjectile_Bananna_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANerfedProjectile_Bananna_C* ANerfedProjectile_Bananna_C::GetDefaultObj()
{
	static class ANerfedProjectile_Bananna_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANerfedProjectile_Bananna_C*>(ANerfedProjectile_Bananna_C::StaticClass()->DefaultObject);

	return Default;
}

}


