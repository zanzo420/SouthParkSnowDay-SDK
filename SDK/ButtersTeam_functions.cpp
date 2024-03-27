#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtersTeam.ButtersTeam_C
// (None)

class UClass* UButtersTeam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtersTeam_C");

	return Clss;
}


// ButtersTeam_C ButtersTeam.Default__ButtersTeam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtersTeam_C* UButtersTeam_C::GetDefaultObj()
{
	static class UButtersTeam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtersTeam_C*>(UButtersTeam_C::StaticClass()->DefaultObject);

	return Default;
}

}


