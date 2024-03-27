#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UpgradedStrike_FX.UpgradedStrike_FX_C
// (Actor)

class UClass* AUpgradedStrike_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpgradedStrike_FX_C");

	return Clss;
}


// UpgradedStrike_FX_C UpgradedStrike_FX.Default__UpgradedStrike_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUpgradedStrike_FX_C* AUpgradedStrike_FX_C::GetDefaultObj()
{
	static class AUpgradedStrike_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUpgradedStrike_FX_C*>(AUpgradedStrike_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


