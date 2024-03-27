#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChillAura_FX.ChillAura_FX_C
// (Actor)

class UClass* AChillAura_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChillAura_FX_C");

	return Clss;
}


// ChillAura_FX_C ChillAura_FX.Default__ChillAura_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChillAura_FX_C* AChillAura_FX_C::GetDefaultObj()
{
	static class AChillAura_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChillAura_FX_C*>(AChillAura_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


