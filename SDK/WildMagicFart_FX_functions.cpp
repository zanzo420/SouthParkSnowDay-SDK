#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WildMagicFart_FX.WildMagicFart_FX_C
// (Actor)

class UClass* AWildMagicFart_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WildMagicFart_FX_C");

	return Clss;
}


// WildMagicFart_FX_C WildMagicFart_FX.Default__WildMagicFart_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWildMagicFart_FX_C* AWildMagicFart_FX_C::GetDefaultObj()
{
	static class AWildMagicFart_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWildMagicFart_FX_C*>(AWildMagicFart_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


