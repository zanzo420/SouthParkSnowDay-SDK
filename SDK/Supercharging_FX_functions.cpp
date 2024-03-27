#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Supercharging_FX.Supercharging_FX_C
// (Actor)

class UClass* ASupercharging_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Supercharging_FX_C");

	return Clss;
}


// Supercharging_FX_C Supercharging_FX.Default__Supercharging_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASupercharging_FX_C* ASupercharging_FX_C::GetDefaultObj()
{
	static class ASupercharging_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASupercharging_FX_C*>(ASupercharging_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


