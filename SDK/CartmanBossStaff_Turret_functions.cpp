#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CartmanBossStaff_Turret.CartmanBossStaff_Turret_C
// (Actor)

class UClass* ACartmanBossStaff_Turret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CartmanBossStaff_Turret_C");

	return Clss;
}


// CartmanBossStaff_Turret_C CartmanBossStaff_Turret.Default__CartmanBossStaff_Turret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACartmanBossStaff_Turret_C* ACartmanBossStaff_Turret_C::GetDefaultObj()
{
	static class ACartmanBossStaff_Turret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACartmanBossStaff_Turret_C*>(ACartmanBossStaff_Turret_C::StaticClass()->DefaultObject);

	return Default;
}

}


