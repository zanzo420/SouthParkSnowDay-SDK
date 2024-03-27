#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Signs_HockeyStick_BP.Signs_HockeyStick_BP_C
// (Actor)

class UClass* ASigns_HockeyStick_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Signs_HockeyStick_BP_C");

	return Clss;
}


// Signs_HockeyStick_BP_C Signs_HockeyStick_BP.Default__Signs_HockeyStick_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASigns_HockeyStick_BP_C* ASigns_HockeyStick_BP_C::GetDefaultObj()
{
	static class ASigns_HockeyStick_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASigns_HockeyStick_BP_C*>(ASigns_HockeyStick_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


