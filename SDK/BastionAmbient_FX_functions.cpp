#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BastionAmbient_FX.BastionAmbient_FX_C
// (Actor)

class UClass* ABastionAmbient_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BastionAmbient_FX_C");

	return Clss;
}


// BastionAmbient_FX_C BastionAmbient_FX.Default__BastionAmbient_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABastionAmbient_FX_C* ABastionAmbient_FX_C::GetDefaultObj()
{
	static class ABastionAmbient_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABastionAmbient_FX_C*>(ABastionAmbient_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


