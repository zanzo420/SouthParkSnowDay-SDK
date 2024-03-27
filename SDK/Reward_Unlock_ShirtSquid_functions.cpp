#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Reward_Unlock_ShirtSquid.Reward_Unlock_ShirtSquid_C
// (None)

class UClass* UReward_Unlock_ShirtSquid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Reward_Unlock_ShirtSquid_C");

	return Clss;
}


// Reward_Unlock_ShirtSquid_C Reward_Unlock_ShirtSquid.Default__Reward_Unlock_ShirtSquid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReward_Unlock_ShirtSquid_C* UReward_Unlock_ShirtSquid_C::GetDefaultObj()
{
	static class UReward_Unlock_ShirtSquid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReward_Unlock_ShirtSquid_C*>(UReward_Unlock_ShirtSquid_C::StaticClass()->DefaultObject);

	return Default;
}

}


