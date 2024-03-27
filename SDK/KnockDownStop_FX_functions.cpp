#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KnockDownStop_FX.KnockDownStop_FX_C
// (Actor)

class UClass* AKnockDownStop_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KnockDownStop_FX_C");

	return Clss;
}


// KnockDownStop_FX_C KnockDownStop_FX.Default__KnockDownStop_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKnockDownStop_FX_C* AKnockDownStop_FX_C::GetDefaultObj()
{
	static class AKnockDownStop_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKnockDownStop_FX_C*>(AKnockDownStop_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


