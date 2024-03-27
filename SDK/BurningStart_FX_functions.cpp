#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BurningStart_FX.BurningStart_FX_C
// (Actor)

class UClass* ABurningStart_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BurningStart_FX_C");

	return Clss;
}


// BurningStart_FX_C BurningStart_FX.Default__BurningStart_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABurningStart_FX_C* ABurningStart_FX_C::GetDefaultObj()
{
	static class ABurningStart_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABurningStart_FX_C*>(ABurningStart_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


