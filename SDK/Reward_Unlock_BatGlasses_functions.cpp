#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Reward_Unlock_BatGlasses.Reward_Unlock_BatGlasses_C
// (None)

class UClass* UReward_Unlock_BatGlasses_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Reward_Unlock_BatGlasses_C");

	return Clss;
}


// Reward_Unlock_BatGlasses_C Reward_Unlock_BatGlasses.Default__Reward_Unlock_BatGlasses_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReward_Unlock_BatGlasses_C* UReward_Unlock_BatGlasses_C::GetDefaultObj()
{
	static class UReward_Unlock_BatGlasses_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReward_Unlock_BatGlasses_C*>(UReward_Unlock_BatGlasses_C::StaticClass()->DefaultObject);

	return Default;
}

}


