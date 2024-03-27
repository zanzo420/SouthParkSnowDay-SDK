#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CurrencySpawnTrail_FX.CurrencySpawnTrail_FX_C
// (Actor)

class UClass* ACurrencySpawnTrail_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CurrencySpawnTrail_FX_C");

	return Clss;
}


// CurrencySpawnTrail_FX_C CurrencySpawnTrail_FX.Default__CurrencySpawnTrail_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACurrencySpawnTrail_FX_C* ACurrencySpawnTrail_FX_C::GetDefaultObj()
{
	static class ACurrencySpawnTrail_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACurrencySpawnTrail_FX_C*>(ACurrencySpawnTrail_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


