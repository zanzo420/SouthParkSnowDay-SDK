#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NerfedProjectile_Dice.NerfedProjectile_Dice_C
// (Actor)

class UClass* ANerfedProjectile_Dice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NerfedProjectile_Dice_C");

	return Clss;
}


// NerfedProjectile_Dice_C NerfedProjectile_Dice.Default__NerfedProjectile_Dice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANerfedProjectile_Dice_C* ANerfedProjectile_Dice_C::GetDefaultObj()
{
	static class ANerfedProjectile_Dice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANerfedProjectile_Dice_C*>(ANerfedProjectile_Dice_C::StaticClass()->DefaultObject);

	return Default;
}

}


