#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CartmanBossStaff_Shitty.CartmanBossStaff_Shitty_C
// (Actor)

class UClass* ACartmanBossStaff_Shitty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CartmanBossStaff_Shitty_C");

	return Clss;
}


// CartmanBossStaff_Shitty_C CartmanBossStaff_Shitty.Default__CartmanBossStaff_Shitty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACartmanBossStaff_Shitty_C* ACartmanBossStaff_Shitty_C::GetDefaultObj()
{
	static class ACartmanBossStaff_Shitty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACartmanBossStaff_Shitty_C*>(ACartmanBossStaff_Shitty_C::StaticClass()->DefaultObject);

	return Default;
}

}


