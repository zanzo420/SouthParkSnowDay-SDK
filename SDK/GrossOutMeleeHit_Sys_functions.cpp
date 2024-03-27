#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GrossOutMeleeHit_Sys.GrossOutMeleeHit_Sys_C
// (Actor)

class UClass* AGrossOutMeleeHit_Sys_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrossOutMeleeHit_Sys_C");

	return Clss;
}


// GrossOutMeleeHit_Sys_C GrossOutMeleeHit_Sys.Default__GrossOutMeleeHit_Sys_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrossOutMeleeHit_Sys_C* AGrossOutMeleeHit_Sys_C::GetDefaultObj()
{
	static class AGrossOutMeleeHit_Sys_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrossOutMeleeHit_Sys_C*>(AGrossOutMeleeHit_Sys_C::StaticClass()->DefaultObject);

	return Default;
}

}


