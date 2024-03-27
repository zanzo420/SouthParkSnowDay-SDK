#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Body_SpecialRobe.Body_SpecialRobe_C
// (None)

class UClass* UBody_SpecialRobe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Body_SpecialRobe_C");

	return Clss;
}


// Body_SpecialRobe_C Body_SpecialRobe.Default__Body_SpecialRobe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBody_SpecialRobe_C* UBody_SpecialRobe_C::GetDefaultObj()
{
	static class UBody_SpecialRobe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBody_SpecialRobe_C*>(UBody_SpecialRobe_C::StaticClass()->DefaultObject);

	return Default;
}

}


