#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Loot_Container_Styrocooler.Loot_Container_Styrocooler_C
// (Actor)

class UClass* ALoot_Container_Styrocooler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Loot_Container_Styrocooler_C");

	return Clss;
}


// Loot_Container_Styrocooler_C Loot_Container_Styrocooler.Default__Loot_Container_Styrocooler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALoot_Container_Styrocooler_C* ALoot_Container_Styrocooler_C::GetDefaultObj()
{
	static class ALoot_Container_Styrocooler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALoot_Container_Styrocooler_C*>(ALoot_Container_Styrocooler_C::StaticClass()->DefaultObject);

	return Default;
}

}


