#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Enrage_FX.Enrage_FX_C
// (Actor)

class UClass* AEnrage_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Enrage_FX_C");

	return Clss;
}


// Enrage_FX_C Enrage_FX.Default__Enrage_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEnrage_FX_C* AEnrage_FX_C::GetDefaultObj()
{
	static class AEnrage_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEnrage_FX_C*>(AEnrage_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


