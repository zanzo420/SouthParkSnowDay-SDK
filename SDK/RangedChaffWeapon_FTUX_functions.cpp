#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RangedChaffWeapon_FTUX.RangedChaffWeapon_FTUX_C
// (Actor)

class UClass* ARangedChaffWeapon_FTUX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RangedChaffWeapon_FTUX_C");

	return Clss;
}


// RangedChaffWeapon_FTUX_C RangedChaffWeapon_FTUX.Default__RangedChaffWeapon_FTUX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARangedChaffWeapon_FTUX_C* ARangedChaffWeapon_FTUX_C::GetDefaultObj()
{
	static class ARangedChaffWeapon_FTUX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARangedChaffWeapon_FTUX_C*>(ARangedChaffWeapon_FTUX_C::StaticClass()->DefaultObject);

	return Default;
}

}


