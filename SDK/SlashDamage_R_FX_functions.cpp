#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlashDamage_R_FX.SlashDamage_R_FX_C
// (Actor)

class UClass* ASlashDamage_R_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlashDamage_R_FX_C");

	return Clss;
}


// SlashDamage_R_FX_C SlashDamage_R_FX.Default__SlashDamage_R_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASlashDamage_R_FX_C* ASlashDamage_R_FX_C::GetDefaultObj()
{
	static class ASlashDamage_R_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASlashDamage_R_FX_C*>(ASlashDamage_R_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


