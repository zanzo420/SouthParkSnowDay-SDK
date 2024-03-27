#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TowerDestructionHighlight_FX.TowerDestructionHighlight_FX_C
// (Actor)

class UClass* ATowerDestructionHighlight_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TowerDestructionHighlight_FX_C");

	return Clss;
}


// TowerDestructionHighlight_FX_C TowerDestructionHighlight_FX.Default__TowerDestructionHighlight_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATowerDestructionHighlight_FX_C* ATowerDestructionHighlight_FX_C::GetDefaultObj()
{
	static class ATowerDestructionHighlight_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATowerDestructionHighlight_FX_C*>(ATowerDestructionHighlight_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


