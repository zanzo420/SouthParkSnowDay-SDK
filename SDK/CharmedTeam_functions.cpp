#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CharmedTeam.CharmedTeam_C
// (None)

class UClass* UCharmedTeam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharmedTeam_C");

	return Clss;
}


// CharmedTeam_C CharmedTeam.Default__CharmedTeam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharmedTeam_C* UCharmedTeam_C::GetDefaultObj()
{
	static class UCharmedTeam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharmedTeam_C*>(UCharmedTeam_C::StaticClass()->DefaultObject);

	return Default;
}

}


