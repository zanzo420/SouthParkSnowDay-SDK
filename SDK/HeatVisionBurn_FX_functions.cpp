#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HeatVisionBurn_FX.HeatVisionBurn_FX_C
// (Actor)

class UClass* AHeatVisionBurn_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeatVisionBurn_FX_C");

	return Clss;
}


// HeatVisionBurn_FX_C HeatVisionBurn_FX.Default__HeatVisionBurn_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHeatVisionBurn_FX_C* AHeatVisionBurn_FX_C::GetDefaultObj()
{
	static class AHeatVisionBurn_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHeatVisionBurn_FX_C*>(AHeatVisionBurn_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


