#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CoolerSmash_FX.CoolerSmash_FX_C
// (Actor)

class UClass* ACoolerSmash_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CoolerSmash_FX_C");

	return Clss;
}


// CoolerSmash_FX_C CoolerSmash_FX.Default__CoolerSmash_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACoolerSmash_FX_C* ACoolerSmash_FX_C::GetDefaultObj()
{
	static class ACoolerSmash_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACoolerSmash_FX_C*>(ACoolerSmash_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


