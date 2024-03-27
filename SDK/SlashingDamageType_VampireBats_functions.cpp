#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlashingDamageType_VampireBats.SlashingDamageType_VampireBats_C
// (None)

class UClass* USlashingDamageType_VampireBats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlashingDamageType_VampireBats_C");

	return Clss;
}


// SlashingDamageType_VampireBats_C SlashingDamageType_VampireBats.Default__SlashingDamageType_VampireBats_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlashingDamageType_VampireBats_C* USlashingDamageType_VampireBats_C::GetDefaultObj()
{
	static class USlashingDamageType_VampireBats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlashingDamageType_VampireBats_C*>(USlashingDamageType_VampireBats_C::StaticClass()->DefaultObject);

	return Default;
}

}


