#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Reward_Unlock_Monocle.Reward_Unlock_Monocle_C
// (None)

class UClass* UReward_Unlock_Monocle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Reward_Unlock_Monocle_C");

	return Clss;
}


// Reward_Unlock_Monocle_C Reward_Unlock_Monocle.Default__Reward_Unlock_Monocle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReward_Unlock_Monocle_C* UReward_Unlock_Monocle_C::GetDefaultObj()
{
	static class UReward_Unlock_Monocle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReward_Unlock_Monocle_C*>(UReward_Unlock_Monocle_C::StaticClass()->DefaultObject);

	return Default;
}

}


