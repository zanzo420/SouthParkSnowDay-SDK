#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RightHandItem_Archetype.RightHandItem_Archetype_C
// (Actor)

class UClass* ARightHandItem_Archetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RightHandItem_Archetype_C");

	return Clss;
}


// RightHandItem_Archetype_C RightHandItem_Archetype.Default__RightHandItem_Archetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARightHandItem_Archetype_C* ARightHandItem_Archetype_C::GetDefaultObj()
{
	static class ARightHandItem_Archetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARightHandItem_Archetype_C*>(ARightHandItem_Archetype_C::StaticClass()->DefaultObject);

	return Default;
}

}


