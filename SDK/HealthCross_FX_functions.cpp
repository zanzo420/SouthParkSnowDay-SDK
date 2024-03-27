#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HealthCross_FX.HealthCross_FX_C
// (Actor)

class UClass* AHealthCross_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HealthCross_FX_C");

	return Clss;
}


// HealthCross_FX_C HealthCross_FX.Default__HealthCross_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHealthCross_FX_C* AHealthCross_FX_C::GetDefaultObj()
{
	static class AHealthCross_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHealthCross_FX_C*>(AHealthCross_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


