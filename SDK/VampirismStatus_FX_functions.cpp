#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VampirismStatus_FX.VampirismStatus_FX_C
// (Actor)

class UClass* AVampirismStatus_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VampirismStatus_FX_C");

	return Clss;
}


// VampirismStatus_FX_C VampirismStatus_FX.Default__VampirismStatus_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVampirismStatus_FX_C* AVampirismStatus_FX_C::GetDefaultObj()
{
	static class AVampirismStatus_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVampirismStatus_FX_C*>(AVampirismStatus_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


