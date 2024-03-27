#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FTUXSwarmerTeam.FTUXSwarmerTeam_C
// (None)

class UClass* UFTUXSwarmerTeam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FTUXSwarmerTeam_C");

	return Clss;
}


// FTUXSwarmerTeam_C FTUXSwarmerTeam.Default__FTUXSwarmerTeam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFTUXSwarmerTeam_C* UFTUXSwarmerTeam_C::GetDefaultObj()
{
	static class UFTUXSwarmerTeam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFTUXSwarmerTeam_C*>(UFTUXSwarmerTeam_C::StaticClass()->DefaultObject);

	return Default;
}

}


