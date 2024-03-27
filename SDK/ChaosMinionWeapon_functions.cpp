#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaosMinionWeapon.ChaosMinionWeapon_C
// (Actor)

class UClass* AChaosMinionWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosMinionWeapon_C");

	return Clss;
}


// ChaosMinionWeapon_C ChaosMinionWeapon.Default__ChaosMinionWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaosMinionWeapon_C* AChaosMinionWeapon_C::GetDefaultObj()
{
	static class AChaosMinionWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaosMinionWeapon_C*>(AChaosMinionWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


