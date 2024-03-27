#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnSaveLoadManagerArchetype.QtnSaveLoadManagerArchetype_C
// (None)

class UClass* UQtnSaveLoadManagerArchetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnSaveLoadManagerArchetype_C");

	return Clss;
}


// QtnSaveLoadManagerArchetype_C QtnSaveLoadManagerArchetype.Default__QtnSaveLoadManagerArchetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnSaveLoadManagerArchetype_C* UQtnSaveLoadManagerArchetype_C::GetDefaultObj()
{
	static class UQtnSaveLoadManagerArchetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnSaveLoadManagerArchetype_C*>(UQtnSaveLoadManagerArchetype_C::StaticClass()->DefaultObject);

	return Default;
}

}


