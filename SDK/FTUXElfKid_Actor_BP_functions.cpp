#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FTUXElfKid_Actor_BP.FTUXElfKid_Actor_BP_C
// (Actor)

class UClass* AFTUXElfKid_Actor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FTUXElfKid_Actor_BP_C");

	return Clss;
}


// FTUXElfKid_Actor_BP_C FTUXElfKid_Actor_BP.Default__FTUXElfKid_Actor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFTUXElfKid_Actor_BP_C* AFTUXElfKid_Actor_BP_C::GetDefaultObj()
{
	static class AFTUXElfKid_Actor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFTUXElfKid_Actor_BP_C*>(AFTUXElfKid_Actor_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


