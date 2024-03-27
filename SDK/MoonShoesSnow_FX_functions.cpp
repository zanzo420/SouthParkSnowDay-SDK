#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MoonShoesSnow_FX.MoonShoesSnow_FX_C
// (Actor)

class UClass* AMoonShoesSnow_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoonShoesSnow_FX_C");

	return Clss;
}


// MoonShoesSnow_FX_C MoonShoesSnow_FX.Default__MoonShoesSnow_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMoonShoesSnow_FX_C* AMoonShoesSnow_FX_C::GetDefaultObj()
{
	static class AMoonShoesSnow_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoonShoesSnow_FX_C*>(AMoonShoesSnow_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


