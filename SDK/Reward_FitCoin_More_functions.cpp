#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Reward_FitCoin_More.Reward_FitCoin_More_C
// (None)

class UClass* UReward_FitCoin_More_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Reward_FitCoin_More_C");

	return Clss;
}


// Reward_FitCoin_More_C Reward_FitCoin_More.Default__Reward_FitCoin_More_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReward_FitCoin_More_C* UReward_FitCoin_More_C::GetDefaultObj()
{
	static class UReward_FitCoin_More_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReward_FitCoin_More_C*>(UReward_FitCoin_More_C::StaticClass()->DefaultObject);

	return Default;
}

}


