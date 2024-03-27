#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FullBodyDead_Pooplet.FullBodyDead_Pooplet_C
// (None)

class UClass* UFullBodyDead_Pooplet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FullBodyDead_Pooplet_C");

	return Clss;
}


// FullBodyDead_Pooplet_C FullBodyDead_Pooplet.Default__FullBodyDead_Pooplet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFullBodyDead_Pooplet_C* UFullBodyDead_Pooplet_C::GetDefaultObj()
{
	static class UFullBodyDead_Pooplet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFullBodyDead_Pooplet_C*>(UFullBodyDead_Pooplet_C::StaticClass()->DefaultObject);

	return Default;
}

}


