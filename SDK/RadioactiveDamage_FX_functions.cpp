#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RadioactiveDamage_FX.RadioactiveDamage_FX_C
// (Actor)

class UClass* ARadioactiveDamage_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadioactiveDamage_FX_C");

	return Clss;
}


// RadioactiveDamage_FX_C RadioactiveDamage_FX.Default__RadioactiveDamage_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARadioactiveDamage_FX_C* ARadioactiveDamage_FX_C::GetDefaultObj()
{
	static class ARadioactiveDamage_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARadioactiveDamage_FX_C*>(ARadioactiveDamage_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


