#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GooSplatHit_FX.GooSplatHit_FX_C
// (Actor)

class UClass* AGooSplatHit_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GooSplatHit_FX_C");

	return Clss;
}


// GooSplatHit_FX_C GooSplatHit_FX.Default__GooSplatHit_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGooSplatHit_FX_C* AGooSplatHit_FX_C::GetDefaultObj()
{
	static class AGooSplatHit_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGooSplatHit_FX_C*>(AGooSplatHit_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


