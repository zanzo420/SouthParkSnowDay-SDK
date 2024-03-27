#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NeutralTeam.NeutralTeam_C
// (None)

class UClass* UNeutralTeam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NeutralTeam_C");

	return Clss;
}


// NeutralTeam_C NeutralTeam.Default__NeutralTeam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNeutralTeam_C* UNeutralTeam_C::GetDefaultObj()
{
	static class UNeutralTeam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeutralTeam_C*>(UNeutralTeam_C::StaticClass()->DefaultObject);

	return Default;
}

}


