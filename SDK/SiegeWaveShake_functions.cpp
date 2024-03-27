#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SiegeWaveShake.SiegeWaveShake_C
// (None)

class UClass* USiegeWaveShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SiegeWaveShake_C");

	return Clss;
}


// SiegeWaveShake_C SiegeWaveShake.Default__SiegeWaveShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USiegeWaveShake_C* USiegeWaveShake_C::GetDefaultObj()
{
	static class USiegeWaveShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USiegeWaveShake_C*>(USiegeWaveShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


