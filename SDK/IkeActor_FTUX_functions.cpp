#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IkeActor_FTUX.IkeActor_FTUX_C
// (Actor)

class UClass* AIkeActor_FTUX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IkeActor_FTUX_C");

	return Clss;
}


// IkeActor_FTUX_C IkeActor_FTUX.Default__IkeActor_FTUX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AIkeActor_FTUX_C* AIkeActor_FTUX_C::GetDefaultObj()
{
	static class AIkeActor_FTUX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AIkeActor_FTUX_C*>(AIkeActor_FTUX_C::StaticClass()->DefaultObject);

	return Default;
}

}


