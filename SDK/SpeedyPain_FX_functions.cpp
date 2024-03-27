#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpeedyPain_FX.SpeedyPain_FX_C
// (Actor)

class UClass* ASpeedyPain_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpeedyPain_FX_C");

	return Clss;
}


// SpeedyPain_FX_C SpeedyPain_FX.Default__SpeedyPain_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpeedyPain_FX_C* ASpeedyPain_FX_C::GetDefaultObj()
{
	static class ASpeedyPain_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpeedyPain_FX_C*>(ASpeedyPain_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


