#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KennyShineBombUp_FX.KennyShineBombUp_FX_C
// (Actor)

class UClass* AKennyShineBombUp_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KennyShineBombUp_FX_C");

	return Clss;
}


// KennyShineBombUp_FX_C KennyShineBombUp_FX.Default__KennyShineBombUp_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKennyShineBombUp_FX_C* AKennyShineBombUp_FX_C::GetDefaultObj()
{
	static class AKennyShineBombUp_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKennyShineBombUp_FX_C*>(AKennyShineBombUp_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


