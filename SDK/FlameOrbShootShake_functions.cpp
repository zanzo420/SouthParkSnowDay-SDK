#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FlameOrbShootShake.FlameOrbShootShake_C
// (None)

class UClass* UFlameOrbShootShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlameOrbShootShake_C");

	return Clss;
}


// FlameOrbShootShake_C FlameOrbShootShake.Default__FlameOrbShootShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFlameOrbShootShake_C* UFlameOrbShootShake_C::GetDefaultObj()
{
	static class UFlameOrbShootShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlameOrbShootShake_C*>(UFlameOrbShootShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


