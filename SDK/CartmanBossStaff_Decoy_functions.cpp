#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CartmanBossStaff_Decoy.CartmanBossStaff_Decoy_C
// (Actor)

class UClass* ACartmanBossStaff_Decoy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CartmanBossStaff_Decoy_C");

	return Clss;
}


// CartmanBossStaff_Decoy_C CartmanBossStaff_Decoy.Default__CartmanBossStaff_Decoy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACartmanBossStaff_Decoy_C* ACartmanBossStaff_Decoy_C::GetDefaultObj()
{
	static class ACartmanBossStaff_Decoy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACartmanBossStaff_Decoy_C*>(ACartmanBossStaff_Decoy_C::StaticClass()->DefaultObject);

	return Default;
}

}


