#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VampireBatBat.VampireBatBat_C
// (Actor)

class UClass* AVampireBatBat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VampireBatBat_C");

	return Clss;
}


// VampireBatBat_C VampireBatBat.Default__VampireBatBat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVampireBatBat_C* AVampireBatBat_C::GetDefaultObj()
{
	static class AVampireBatBat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVampireBatBat_C*>(AVampireBatBat_C::StaticClass()->DefaultObject);

	return Default;
}

}


