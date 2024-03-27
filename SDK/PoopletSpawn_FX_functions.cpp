#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PoopletSpawn_FX.PoopletSpawn_FX_C
// (Actor)

class UClass* APoopletSpawn_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PoopletSpawn_FX_C");

	return Clss;
}


// PoopletSpawn_FX_C PoopletSpawn_FX.Default__PoopletSpawn_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APoopletSpawn_FX_C* APoopletSpawn_FX_C::GetDefaultObj()
{
	static class APoopletSpawn_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APoopletSpawn_FX_C*>(APoopletSpawn_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


