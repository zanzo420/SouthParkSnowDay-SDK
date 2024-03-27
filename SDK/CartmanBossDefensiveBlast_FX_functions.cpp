#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CartmanBossDefensiveBlast_FX.CartmanBossDefensiveBlast_FX_C
// (Actor)

class UClass* ACartmanBossDefensiveBlast_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CartmanBossDefensiveBlast_FX_C");

	return Clss;
}


// CartmanBossDefensiveBlast_FX_C CartmanBossDefensiveBlast_FX.Default__CartmanBossDefensiveBlast_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACartmanBossDefensiveBlast_FX_C* ACartmanBossDefensiveBlast_FX_C::GetDefaultObj()
{
	static class ACartmanBossDefensiveBlast_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACartmanBossDefensiveBlast_FX_C*>(ACartmanBossDefensiveBlast_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


