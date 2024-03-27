#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SniperBeamCharge_FX.SniperBeamCharge_FX_C
// (Actor)

class UClass* ASniperBeamCharge_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SniperBeamCharge_FX_C");

	return Clss;
}


// SniperBeamCharge_FX_C SniperBeamCharge_FX.Default__SniperBeamCharge_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASniperBeamCharge_FX_C* ASniperBeamCharge_FX_C::GetDefaultObj()
{
	static class ASniperBeamCharge_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASniperBeamCharge_FX_C*>(ASniperBeamCharge_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


