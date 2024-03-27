#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CheatHeatVision.CheatHeatVision_C
// (None)

class UClass* UCheatHeatVision_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheatHeatVision_C");

	return Clss;
}


// CheatHeatVision_C CheatHeatVision.Default__CheatHeatVision_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheatHeatVision_C* UCheatHeatVision_C::GetDefaultObj()
{
	static class UCheatHeatVision_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheatHeatVision_C*>(UCheatHeatVision_C::StaticClass()->DefaultObject);

	return Default;
}

}


