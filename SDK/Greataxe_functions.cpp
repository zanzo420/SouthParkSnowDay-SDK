#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Greataxe.Greataxe_C
// (Actor)

class UClass* AGreataxe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Greataxe_C");

	return Clss;
}


// Greataxe_C Greataxe.Default__Greataxe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGreataxe_C* AGreataxe_C::GetDefaultObj()
{
	static class AGreataxe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGreataxe_C*>(AGreataxe_C::StaticClass()->DefaultObject);

	return Default;
}

}


