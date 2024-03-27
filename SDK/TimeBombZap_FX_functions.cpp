#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TimeBombZap_FX.TimeBombZap_FX_C
// (Actor)

class UClass* ATimeBombZap_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeBombZap_FX_C");

	return Clss;
}


// TimeBombZap_FX_C TimeBombZap_FX.Default__TimeBombZap_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATimeBombZap_FX_C* ATimeBombZap_FX_C::GetDefaultObj()
{
	static class ATimeBombZap_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATimeBombZap_FX_C*>(ATimeBombZap_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


