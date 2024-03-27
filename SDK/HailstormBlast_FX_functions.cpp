#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HailstormBlast_FX.HailstormBlast_FX_C
// (Actor)

class UClass* AHailstormBlast_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HailstormBlast_FX_C");

	return Clss;
}


// HailstormBlast_FX_C HailstormBlast_FX.Default__HailstormBlast_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHailstormBlast_FX_C* AHailstormBlast_FX_C::GetDefaultObj()
{
	static class AHailstormBlast_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHailstormBlast_FX_C*>(AHailstormBlast_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


