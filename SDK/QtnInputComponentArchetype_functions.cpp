#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnInputComponentArchetype.QtnInputComponentArchetype_C
// (None)

class UClass* UQtnInputComponentArchetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnInputComponentArchetype_C");

	return Clss;
}


// QtnInputComponentArchetype_C QtnInputComponentArchetype.Default__QtnInputComponentArchetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnInputComponentArchetype_C* UQtnInputComponentArchetype_C::GetDefaultObj()
{
	static class UQtnInputComponentArchetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnInputComponentArchetype_C*>(UQtnInputComponentArchetype_C::StaticClass()->DefaultObject);

	return Default;
}

}


