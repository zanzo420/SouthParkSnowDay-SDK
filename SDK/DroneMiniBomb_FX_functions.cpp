#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DroneMiniBomb_FX.DroneMiniBomb_FX_C
// (Actor)

class UClass* ADroneMiniBomb_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DroneMiniBomb_FX_C");

	return Clss;
}


// DroneMiniBomb_FX_C DroneMiniBomb_FX.Default__DroneMiniBomb_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADroneMiniBomb_FX_C* ADroneMiniBomb_FX_C::GetDefaultObj()
{
	static class ADroneMiniBomb_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADroneMiniBomb_FX_C*>(ADroneMiniBomb_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


