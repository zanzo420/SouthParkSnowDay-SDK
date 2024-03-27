#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FullBodyDead_Golem.FullBodyDead_Golem_C
// (None)

class UClass* UFullBodyDead_Golem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FullBodyDead_Golem_C");

	return Clss;
}


// FullBodyDead_Golem_C FullBodyDead_Golem.Default__FullBodyDead_Golem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFullBodyDead_Golem_C* UFullBodyDead_Golem_C::GetDefaultObj()
{
	static class UFullBodyDead_Golem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFullBodyDead_Golem_C*>(UFullBodyDead_Golem_C::StaticClass()->DefaultObject);

	return Default;
}

}


