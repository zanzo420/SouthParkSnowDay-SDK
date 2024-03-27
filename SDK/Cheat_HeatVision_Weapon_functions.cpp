#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cheat_HeatVision_Weapon.Cheat_HeatVision_Weapon_C
// (Actor)

class UClass* ACheat_HeatVision_Weapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cheat_HeatVision_Weapon_C");

	return Clss;
}


// Cheat_HeatVision_Weapon_C Cheat_HeatVision_Weapon.Default__Cheat_HeatVision_Weapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACheat_HeatVision_Weapon_C* ACheat_HeatVision_Weapon_C::GetDefaultObj()
{
	static class ACheat_HeatVision_Weapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACheat_HeatVision_Weapon_C*>(ACheat_HeatVision_Weapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


