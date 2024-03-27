#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenSnowImpact_FX.GenSnowImpact_FX_C
// (Actor)

class UClass* AGenSnowImpact_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenSnowImpact_FX_C");

	return Clss;
}


// GenSnowImpact_FX_C GenSnowImpact_FX.Default__GenSnowImpact_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenSnowImpact_FX_C* AGenSnowImpact_FX_C::GetDefaultObj()
{
	static class AGenSnowImpact_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenSnowImpact_FX_C*>(AGenSnowImpact_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


