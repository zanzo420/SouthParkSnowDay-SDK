#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FTUXAllyTeam.FTUXAllyTeam_C
// (None)

class UClass* UFTUXAllyTeam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FTUXAllyTeam_C");

	return Clss;
}


// FTUXAllyTeam_C FTUXAllyTeam.Default__FTUXAllyTeam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFTUXAllyTeam_C* UFTUXAllyTeam_C::GetDefaultObj()
{
	static class UFTUXAllyTeam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFTUXAllyTeam_C*>(UFTUXAllyTeam_C::StaticClass()->DefaultObject);

	return Default;
}

}


