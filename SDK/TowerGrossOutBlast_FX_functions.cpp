#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TowerGrossOutBlast_FX.TowerGrossOutBlast_FX_C
// (Actor)

class UClass* ATowerGrossOutBlast_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TowerGrossOutBlast_FX_C");

	return Clss;
}


// TowerGrossOutBlast_FX_C TowerGrossOutBlast_FX.Default__TowerGrossOutBlast_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATowerGrossOutBlast_FX_C* ATowerGrossOutBlast_FX_C::GetDefaultObj()
{
	static class ATowerGrossOutBlast_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATowerGrossOutBlast_FX_C*>(ATowerGrossOutBlast_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


