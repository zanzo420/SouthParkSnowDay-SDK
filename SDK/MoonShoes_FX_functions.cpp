#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MoonShoes_FX.MoonShoes_FX_C
// (Actor)

class UClass* AMoonShoes_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoonShoes_FX_C");

	return Clss;
}


// MoonShoes_FX_C MoonShoes_FX.Default__MoonShoes_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMoonShoes_FX_C* AMoonShoes_FX_C::GetDefaultObj()
{
	static class AMoonShoes_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoonShoes_FX_C*>(AMoonShoes_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


