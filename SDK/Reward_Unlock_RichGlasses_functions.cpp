#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Reward_Unlock_RichGlasses.Reward_Unlock_RichGlasses_C
// (None)

class UClass* UReward_Unlock_RichGlasses_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Reward_Unlock_RichGlasses_C");

	return Clss;
}


// Reward_Unlock_RichGlasses_C Reward_Unlock_RichGlasses.Default__Reward_Unlock_RichGlasses_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReward_Unlock_RichGlasses_C* UReward_Unlock_RichGlasses_C::GetDefaultObj()
{
	static class UReward_Unlock_RichGlasses_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReward_Unlock_RichGlasses_C*>(UReward_Unlock_RichGlasses_C::StaticClass()->DefaultObject);

	return Default;
}

}


