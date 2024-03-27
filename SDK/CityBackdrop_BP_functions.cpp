#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CityBackdrop_BP.CityBackdrop_BP_C
// (Actor)

class UClass* ACityBackdrop_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CityBackdrop_BP_C");

	return Clss;
}


// CityBackdrop_BP_C CityBackdrop_BP.Default__CityBackdrop_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACityBackdrop_BP_C* ACityBackdrop_BP_C::GetDefaultObj()
{
	static class ACityBackdrop_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACityBackdrop_BP_C*>(ACityBackdrop_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


