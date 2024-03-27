#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WytchfireStart_FX.WytchfireStart_FX_C
// (Actor)

class UClass* AWytchfireStart_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WytchfireStart_FX_C");

	return Clss;
}


// WytchfireStart_FX_C WytchfireStart_FX.Default__WytchfireStart_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWytchfireStart_FX_C* AWytchfireStart_FX_C::GetDefaultObj()
{
	static class AWytchfireStart_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWytchfireStart_FX_C*>(AWytchfireStart_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


