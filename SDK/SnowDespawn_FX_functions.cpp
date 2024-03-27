#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SnowDespawn_FX.SnowDespawn_FX_C
// (Actor)

class UClass* ASnowDespawn_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SnowDespawn_FX_C");

	return Clss;
}


// SnowDespawn_FX_C SnowDespawn_FX.Default__SnowDespawn_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASnowDespawn_FX_C* ASnowDespawn_FX_C::GetDefaultObj()
{
	static class ASnowDespawn_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASnowDespawn_FX_C*>(ASnowDespawn_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


