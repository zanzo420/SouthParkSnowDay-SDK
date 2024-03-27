#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NoOneCanDieBS_FX.NoOneCanDieBS_FX_C
// (Actor)

class UClass* ANoOneCanDieBS_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NoOneCanDieBS_FX_C");

	return Clss;
}


// NoOneCanDieBS_FX_C NoOneCanDieBS_FX.Default__NoOneCanDieBS_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANoOneCanDieBS_FX_C* ANoOneCanDieBS_FX_C::GetDefaultObj()
{
	static class ANoOneCanDieBS_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANoOneCanDieBS_FX_C*>(ANoOneCanDieBS_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


