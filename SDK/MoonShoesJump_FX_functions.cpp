#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MoonShoesJump_FX.MoonShoesJump_FX_C
// (Actor)

class UClass* AMoonShoesJump_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoonShoesJump_FX_C");

	return Clss;
}


// MoonShoesJump_FX_C MoonShoesJump_FX.Default__MoonShoesJump_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMoonShoesJump_FX_C* AMoonShoesJump_FX_C::GetDefaultObj()
{
	static class AMoonShoesJump_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoonShoesJump_FX_C*>(AMoonShoesJump_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


