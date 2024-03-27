#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DaggerDiveSonicBoom_FX.DaggerDiveSonicBoom_FX_C
// (Actor)

class UClass* ADaggerDiveSonicBoom_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DaggerDiveSonicBoom_FX_C");

	return Clss;
}


// DaggerDiveSonicBoom_FX_C DaggerDiveSonicBoom_FX.Default__DaggerDiveSonicBoom_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADaggerDiveSonicBoom_FX_C* ADaggerDiveSonicBoom_FX_C::GetDefaultObj()
{
	static class ADaggerDiveSonicBoom_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADaggerDiveSonicBoom_FX_C*>(ADaggerDiveSonicBoom_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


