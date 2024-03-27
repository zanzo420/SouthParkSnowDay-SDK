#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SniperMageWeapon.SniperMageWeapon_C
// (Actor)

class UClass* ASniperMageWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SniperMageWeapon_C");

	return Clss;
}


// SniperMageWeapon_C SniperMageWeapon.Default__SniperMageWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASniperMageWeapon_C* ASniperMageWeapon_C::GetDefaultObj()
{
	static class ASniperMageWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASniperMageWeapon_C*>(ASniperMageWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


