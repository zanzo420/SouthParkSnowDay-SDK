#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrialIntroVO_Cartman.TrialIntroVO_Cartman_C
// (None)

class UClass* UTrialIntroVO_Cartman_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrialIntroVO_Cartman_C");

	return Clss;
}


// TrialIntroVO_Cartman_C TrialIntroVO_Cartman.Default__TrialIntroVO_Cartman_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTrialIntroVO_Cartman_C* UTrialIntroVO_Cartman_C::GetDefaultObj()
{
	static class UTrialIntroVO_Cartman_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTrialIntroVO_Cartman_C*>(UTrialIntroVO_Cartman_C::StaticClass()->DefaultObject);

	return Default;
}

}


