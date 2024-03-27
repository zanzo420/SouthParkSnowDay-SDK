#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LocalPlayerWound_FX.LocalPlayerWound_FX_C
// (Actor)

class UClass* ALocalPlayerWound_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LocalPlayerWound_FX_C");

	return Clss;
}


// LocalPlayerWound_FX_C LocalPlayerWound_FX.Default__LocalPlayerWound_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALocalPlayerWound_FX_C* ALocalPlayerWound_FX_C::GetDefaultObj()
{
	static class ALocalPlayerWound_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALocalPlayerWound_FX_C*>(ALocalPlayerWound_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


