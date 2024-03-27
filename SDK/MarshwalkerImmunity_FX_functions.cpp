#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MarshwalkerImmunity_FX.MarshwalkerImmunity_FX_C
// (Actor)

class UClass* AMarshwalkerImmunity_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MarshwalkerImmunity_FX_C");

	return Clss;
}


// MarshwalkerImmunity_FX_C MarshwalkerImmunity_FX.Default__MarshwalkerImmunity_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMarshwalkerImmunity_FX_C* AMarshwalkerImmunity_FX_C::GetDefaultObj()
{
	static class AMarshwalkerImmunity_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMarshwalkerImmunity_FX_C*>(AMarshwalkerImmunity_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


