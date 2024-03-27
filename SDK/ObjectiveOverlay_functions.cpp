#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ObjectiveOverlay.ObjectiveOverlay_C
// (None)

class UClass* UObjectiveOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectiveOverlay_C");

	return Clss;
}


// ObjectiveOverlay_C ObjectiveOverlay.Default__ObjectiveOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UObjectiveOverlay_C* UObjectiveOverlay_C::GetDefaultObj()
{
	static class UObjectiveOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectiveOverlay_C*>(UObjectiveOverlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


