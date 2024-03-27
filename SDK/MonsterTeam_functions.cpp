#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonsterTeam.MonsterTeam_C
// (None)

class UClass* UMonsterTeam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonsterTeam_C");

	return Clss;
}


// MonsterTeam_C MonsterTeam.Default__MonsterTeam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonsterTeam_C* UMonsterTeam_C::GetDefaultObj()
{
	static class UMonsterTeam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonsterTeam_C*>(UMonsterTeam_C::StaticClass()->DefaultObject);

	return Default;
}

}


