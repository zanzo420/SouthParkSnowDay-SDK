#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FullBodyDead_Brute.FullBodyDead_Brute_C
// (None)

class UClass* UFullBodyDead_Brute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FullBodyDead_Brute_C");

	return Clss;
}


// FullBodyDead_Brute_C FullBodyDead_Brute.Default__FullBodyDead_Brute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFullBodyDead_Brute_C* UFullBodyDead_Brute_C::GetDefaultObj()
{
	static class UFullBodyDead_Brute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFullBodyDead_Brute_C*>(UFullBodyDead_Brute_C::StaticClass()->DefaultObject);

	return Default;
}

}


