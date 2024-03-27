#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlashingDamageType_ExtraBleed.SlashingDamageType_ExtraBleed_C
// (None)

class UClass* USlashingDamageType_ExtraBleed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlashingDamageType_ExtraBleed_C");

	return Clss;
}


// SlashingDamageType_ExtraBleed_C SlashingDamageType_ExtraBleed.Default__SlashingDamageType_ExtraBleed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlashingDamageType_ExtraBleed_C* USlashingDamageType_ExtraBleed_C::GetDefaultObj()
{
	static class USlashingDamageType_ExtraBleed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlashingDamageType_ExtraBleed_C*>(USlashingDamageType_ExtraBleed_C::StaticClass()->DefaultObject);

	return Default;
}

}


