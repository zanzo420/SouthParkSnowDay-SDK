#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FullBodyDead_Bomba.FullBodyDead_Bomba_C
// (None)

class UClass* UFullBodyDead_Bomba_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FullBodyDead_Bomba_C");

	return Clss;
}


// FullBodyDead_Bomba_C FullBodyDead_Bomba.Default__FullBodyDead_Bomba_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFullBodyDead_Bomba_C* UFullBodyDead_Bomba_C::GetDefaultObj()
{
	static class UFullBodyDead_Bomba_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFullBodyDead_Bomba_C*>(UFullBodyDead_Bomba_C::StaticClass()->DefaultObject);

	return Default;
}

}


