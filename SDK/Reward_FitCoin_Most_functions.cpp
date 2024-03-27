#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Reward_FitCoin_Most.Reward_FitCoin_Most_C
// (None)

class UClass* UReward_FitCoin_Most_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Reward_FitCoin_Most_C");

	return Clss;
}


// Reward_FitCoin_Most_C Reward_FitCoin_Most.Default__Reward_FitCoin_Most_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReward_FitCoin_Most_C* UReward_FitCoin_Most_C::GetDefaultObj()
{
	static class UReward_FitCoin_Most_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReward_FitCoin_Most_C*>(UReward_FitCoin_Most_C::StaticClass()->DefaultObject);

	return Default;
}

}


