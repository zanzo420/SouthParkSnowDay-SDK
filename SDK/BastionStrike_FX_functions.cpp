#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BastionStrike_FX.BastionStrike_FX_C
// (Actor)

class UClass* ABastionStrike_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BastionStrike_FX_C");

	return Clss;
}


// BastionStrike_FX_C BastionStrike_FX.Default__BastionStrike_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABastionStrike_FX_C* ABastionStrike_FX_C::GetDefaultObj()
{
	static class ABastionStrike_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABastionStrike_FX_C*>(ABastionStrike_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


