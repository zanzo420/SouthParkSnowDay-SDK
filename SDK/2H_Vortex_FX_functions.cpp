#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass 2H_Vortex_FX.2H_Vortex_FX_C
// (Actor)

class UClass* ATwoH_Vortex_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("2H_Vortex_FX_C");

	return Clss;
}


// 2H_Vortex_FX_C 2H_Vortex_FX.Default__2H_Vortex_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATwoH_Vortex_FX_C* ATwoH_Vortex_FX_C::GetDefaultObj()
{
	static class ATwoH_Vortex_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATwoH_Vortex_FX_C*>(ATwoH_Vortex_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


