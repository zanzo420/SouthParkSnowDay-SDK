#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnGoal_SP_Day1_CE_Crossroad.QtnGoal_SP_Day1_CE_Crossroad_C
// (None)

class UClass* UQtnGoal_SP_Day1_CE_Crossroad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnGoal_SP_Day1_CE_Crossroad_C");

	return Clss;
}


// QtnGoal_SP_Day1_CE_Crossroad_C QtnGoal_SP_Day1_CE_Crossroad.Default__QtnGoal_SP_Day1_CE_Crossroad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnGoal_SP_Day1_CE_Crossroad_C* UQtnGoal_SP_Day1_CE_Crossroad_C::GetDefaultObj()
{
	static class UQtnGoal_SP_Day1_CE_Crossroad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnGoal_SP_Day1_CE_Crossroad_C*>(UQtnGoal_SP_Day1_CE_Crossroad_C::StaticClass()->DefaultObject);

	return Default;
}

}


