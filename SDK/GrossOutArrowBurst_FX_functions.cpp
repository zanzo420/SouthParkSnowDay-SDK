#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GrossOutArrowBurst_FX.GrossOutArrowBurst_FX_C
// (Actor)

class UClass* AGrossOutArrowBurst_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrossOutArrowBurst_FX_C");

	return Clss;
}


// GrossOutArrowBurst_FX_C GrossOutArrowBurst_FX.Default__GrossOutArrowBurst_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrossOutArrowBurst_FX_C* AGrossOutArrowBurst_FX_C::GetDefaultObj()
{
	static class AGrossOutArrowBurst_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrossOutArrowBurst_FX_C*>(AGrossOutArrowBurst_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


