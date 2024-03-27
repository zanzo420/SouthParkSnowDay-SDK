#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RangedTowerController.RangedTowerController_C
// (Actor)

class UClass* ARangedTowerController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RangedTowerController_C");

	return Clss;
}


// RangedTowerController_C RangedTowerController.Default__RangedTowerController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARangedTowerController_C* ARangedTowerController_C::GetDefaultObj()
{
	static class ARangedTowerController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARangedTowerController_C*>(ARangedTowerController_C::StaticClass()->DefaultObject);

	return Default;
}

}


