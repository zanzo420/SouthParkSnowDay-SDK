#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnPlayerStateArchetype.QtnPlayerStateArchetype_C
// (Actor)

class UClass* AQtnPlayerStateArchetype_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnPlayerStateArchetype_C");

	return Clss;
}


// QtnPlayerStateArchetype_C QtnPlayerStateArchetype.Default__QtnPlayerStateArchetype_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQtnPlayerStateArchetype_C* AQtnPlayerStateArchetype_C::GetDefaultObj()
{
	static class AQtnPlayerStateArchetype_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQtnPlayerStateArchetype_C*>(AQtnPlayerStateArchetype_C::StaticClass()->DefaultObject);

	return Default;
}

}


