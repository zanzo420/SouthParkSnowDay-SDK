#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HeroTeam.HeroTeam_C
// (None)

class UClass* UHeroTeam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeroTeam_C");

	return Clss;
}


// HeroTeam_C HeroTeam.Default__HeroTeam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHeroTeam_C* UHeroTeam_C::GetDefaultObj()
{
	static class UHeroTeam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHeroTeam_C*>(UHeroTeam_C::StaticClass()->DefaultObject);

	return Default;
}

}


