#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CannonTargetGlow_FX.CannonTargetGlow_FX_C
// (Actor)

class UClass* ACannonTargetGlow_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CannonTargetGlow_FX_C");

	return Clss;
}


// CannonTargetGlow_FX_C CannonTargetGlow_FX.Default__CannonTargetGlow_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACannonTargetGlow_FX_C* ACannonTargetGlow_FX_C::GetDefaultObj()
{
	static class ACannonTargetGlow_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACannonTargetGlow_FX_C*>(ACannonTargetGlow_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


