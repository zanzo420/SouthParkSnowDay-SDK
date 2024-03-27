#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StaffProjectileOrbBlast_FX.StaffProjectileOrbBlast_FX_C
// (Actor)

class UClass* AStaffProjectileOrbBlast_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StaffProjectileOrbBlast_FX_C");

	return Clss;
}


// StaffProjectileOrbBlast_FX_C StaffProjectileOrbBlast_FX.Default__StaffProjectileOrbBlast_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStaffProjectileOrbBlast_FX_C* AStaffProjectileOrbBlast_FX_C::GetDefaultObj()
{
	static class AStaffProjectileOrbBlast_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStaffProjectileOrbBlast_FX_C*>(AStaffProjectileOrbBlast_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


