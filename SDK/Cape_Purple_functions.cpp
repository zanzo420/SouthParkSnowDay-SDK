#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cape_Purple.Cape_Purple_C
// (None)

class UClass* UCape_Purple_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cape_Purple_C");

	return Clss;
}


// Cape_Purple_C Cape_Purple.Default__Cape_Purple_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCape_Purple_C* UCape_Purple_C::GetDefaultObj()
{
	static class UCape_Purple_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCape_Purple_C*>(UCape_Purple_C::StaticClass()->DefaultObject);

	return Default;
}

}


