#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ObjectiveOverlay_FX.ObjectiveOverlay_FX_C
// (Actor)

class UClass* AObjectiveOverlay_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectiveOverlay_FX_C");

	return Clss;
}


// ObjectiveOverlay_FX_C ObjectiveOverlay_FX.Default__ObjectiveOverlay_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AObjectiveOverlay_FX_C* AObjectiveOverlay_FX_C::GetDefaultObj()
{
	static class AObjectiveOverlay_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AObjectiveOverlay_FX_C*>(AObjectiveOverlay_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


