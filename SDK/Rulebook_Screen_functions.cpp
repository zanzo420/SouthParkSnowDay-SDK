#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rulebook_Screen.Rulebook_Screen_C
// (None)

class UClass* URulebook_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rulebook_Screen_C");

	return Clss;
}


// Rulebook_Screen_C Rulebook_Screen.Default__Rulebook_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URulebook_Screen_C* URulebook_Screen_C::GetDefaultObj()
{
	static class URulebook_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URulebook_Screen_C*>(URulebook_Screen_C::StaticClass()->DefaultObject);

	return Default;
}

}


