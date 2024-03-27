#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TPSteal_FX.TPSteal_FX_C
// (Actor)

class UClass* ATPSteal_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TPSteal_FX_C");

	return Clss;
}


// TPSteal_FX_C TPSteal_FX.Default__TPSteal_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATPSteal_FX_C* ATPSteal_FX_C::GetDefaultObj()
{
	static class ATPSteal_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATPSteal_FX_C*>(ATPSteal_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


