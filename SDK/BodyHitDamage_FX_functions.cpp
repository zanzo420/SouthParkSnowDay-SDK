#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyHitDamage_FX.BodyHitDamage_FX_C
// (Actor)

class UClass* ABodyHitDamage_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyHitDamage_FX_C");

	return Clss;
}


// BodyHitDamage_FX_C BodyHitDamage_FX.Default__BodyHitDamage_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyHitDamage_FX_C* ABodyHitDamage_FX_C::GetDefaultObj()
{
	static class ABodyHitDamage_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyHitDamage_FX_C*>(ABodyHitDamage_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


