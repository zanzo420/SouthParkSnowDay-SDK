#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DeepSnowSpawn_FX.DeepSnowSpawn_FX_C
// (Actor)

class UClass* ADeepSnowSpawn_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeepSnowSpawn_FX_C");

	return Clss;
}


// DeepSnowSpawn_FX_C DeepSnowSpawn_FX.Default__DeepSnowSpawn_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADeepSnowSpawn_FX_C* ADeepSnowSpawn_FX_C::GetDefaultObj()
{
	static class ADeepSnowSpawn_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADeepSnowSpawn_FX_C*>(ADeepSnowSpawn_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


