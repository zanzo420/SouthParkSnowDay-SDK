#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Balrog_MaceWeapon.Balrog_MaceWeapon_C
// (Actor)

class UClass* ABalrog_MaceWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Balrog_MaceWeapon_C");

	return Clss;
}


// Balrog_MaceWeapon_C Balrog_MaceWeapon.Default__Balrog_MaceWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABalrog_MaceWeapon_C* ABalrog_MaceWeapon_C::GetDefaultObj()
{
	static class ABalrog_MaceWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABalrog_MaceWeapon_C*>(ABalrog_MaceWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


