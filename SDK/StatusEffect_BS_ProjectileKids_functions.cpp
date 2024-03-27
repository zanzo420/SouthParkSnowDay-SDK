#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StatusEffect_BS_ProjectileKids.StatusEffect_BS_ProjectileKids_C
// (None)

class UClass* UStatusEffect_BS_ProjectileKids_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatusEffect_BS_ProjectileKids_C");

	return Clss;
}


// StatusEffect_BS_ProjectileKids_C StatusEffect_BS_ProjectileKids.Default__StatusEffect_BS_ProjectileKids_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatusEffect_BS_ProjectileKids_C* UStatusEffect_BS_ProjectileKids_C::GetDefaultObj()
{
	static class UStatusEffect_BS_ProjectileKids_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatusEffect_BS_ProjectileKids_C*>(UStatusEffect_BS_ProjectileKids_C::StaticClass()->DefaultObject);

	return Default;
}

}


