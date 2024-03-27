#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IcicleShatter_FX.IcicleShatter_FX_C
// (Actor)

class UClass* AIcicleShatter_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IcicleShatter_FX_C");

	return Clss;
}


// IcicleShatter_FX_C IcicleShatter_FX.Default__IcicleShatter_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AIcicleShatter_FX_C* AIcicleShatter_FX_C::GetDefaultObj()
{
	static class AIcicleShatter_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AIcicleShatter_FX_C*>(AIcicleShatter_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


