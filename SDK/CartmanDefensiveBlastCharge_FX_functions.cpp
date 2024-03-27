#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CartmanDefensiveBlastCharge_FX.CartmanDefensiveBlastCharge_FX_C
// (Actor)

class UClass* ACartmanDefensiveBlastCharge_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CartmanDefensiveBlastCharge_FX_C");

	return Clss;
}


// CartmanDefensiveBlastCharge_FX_C CartmanDefensiveBlastCharge_FX.Default__CartmanDefensiveBlastCharge_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACartmanDefensiveBlastCharge_FX_C* ACartmanDefensiveBlastCharge_FX_C::GetDefaultObj()
{
	static class ACartmanDefensiveBlastCharge_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACartmanDefensiveBlastCharge_FX_C*>(ACartmanDefensiveBlastCharge_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


