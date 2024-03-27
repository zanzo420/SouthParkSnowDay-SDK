#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FullBodyDead_Adult.FullBodyDead_Adult_C
// (None)

class UClass* UFullBodyDead_Adult_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FullBodyDead_Adult_C");

	return Clss;
}


// FullBodyDead_Adult_C FullBodyDead_Adult.Default__FullBodyDead_Adult_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFullBodyDead_Adult_C* UFullBodyDead_Adult_C::GetDefaultObj()
{
	static class UFullBodyDead_Adult_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFullBodyDead_Adult_C*>(UFullBodyDead_Adult_C::StaticClass()->DefaultObject);

	return Default;
}

}


