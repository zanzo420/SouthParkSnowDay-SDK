#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RangedTowerBalloon_Trail_FX.RangedTowerBalloon_Trail_FX_C
// (Actor)

class UClass* ARangedTowerBalloon_Trail_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RangedTowerBalloon_Trail_FX_C");

	return Clss;
}


// RangedTowerBalloon_Trail_FX_C RangedTowerBalloon_Trail_FX.Default__RangedTowerBalloon_Trail_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARangedTowerBalloon_Trail_FX_C* ARangedTowerBalloon_Trail_FX_C::GetDefaultObj()
{
	static class ARangedTowerBalloon_Trail_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARangedTowerBalloon_Trail_FX_C*>(ARangedTowerBalloon_Trail_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


