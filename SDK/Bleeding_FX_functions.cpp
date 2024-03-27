#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bleeding_FX.Bleeding_FX_C
// (Actor)

class UClass* ABleeding_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bleeding_FX_C");

	return Clss;
}


// Bleeding_FX_C Bleeding_FX.Default__Bleeding_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABleeding_FX_C* ABleeding_FX_C::GetDefaultObj()
{
	static class ABleeding_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABleeding_FX_C*>(ABleeding_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


