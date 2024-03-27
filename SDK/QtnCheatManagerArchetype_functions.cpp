#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnCheatManagerArchetype.QtnCheatManagerArchetype_C
// (None)

class UClass* UQtnCheatManagerArchetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnCheatManagerArchetype_C");

	return Clss;
}


// QtnCheatManagerArchetype_C QtnCheatManagerArchetype.Default__QtnCheatManagerArchetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnCheatManagerArchetype_C* UQtnCheatManagerArchetype_C::GetDefaultObj()
{
	static class UQtnCheatManagerArchetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnCheatManagerArchetype_C*>(UQtnCheatManagerArchetype_C::StaticClass()->DefaultObject);

	return Default;
}

}


