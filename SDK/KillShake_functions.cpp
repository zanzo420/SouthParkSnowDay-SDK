#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KillShake.KillShake_C
// (None)

class UClass* UKillShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KillShake_C");

	return Clss;
}


// KillShake_C KillShake.Default__KillShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKillShake_C* UKillShake_C::GetDefaultObj()
{
	static class UKillShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKillShake_C*>(UKillShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


