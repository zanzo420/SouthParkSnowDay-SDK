#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShitMeteorStrike_FX.ShitMeteorStrike_FX_C
// (Actor)

class UClass* AShitMeteorStrike_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShitMeteorStrike_FX_C");

	return Clss;
}


// ShitMeteorStrike_FX_C ShitMeteorStrike_FX.Default__ShitMeteorStrike_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShitMeteorStrike_FX_C* AShitMeteorStrike_FX_C::GetDefaultObj()
{
	static class AShitMeteorStrike_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShitMeteorStrike_FX_C*>(AShitMeteorStrike_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


