#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CheesedTeam.CheesedTeam_C
// (None)

class UClass* UCheesedTeam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheesedTeam_C");

	return Clss;
}


// CheesedTeam_C CheesedTeam.Default__CheesedTeam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheesedTeam_C* UCheesedTeam_C::GetDefaultObj()
{
	static class UCheesedTeam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheesedTeam_C*>(UCheesedTeam_C::StaticClass()->DefaultObject);

	return Default;
}

}


