#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Reward_DarkMatter_Most.Reward_DarkMatter_Most_C
// (None)

class UClass* UReward_DarkMatter_Most_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Reward_DarkMatter_Most_C");

	return Clss;
}


// Reward_DarkMatter_Most_C Reward_DarkMatter_Most.Default__Reward_DarkMatter_Most_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReward_DarkMatter_Most_C* UReward_DarkMatter_Most_C::GetDefaultObj()
{
	static class UReward_DarkMatter_Most_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReward_DarkMatter_Most_C*>(UReward_DarkMatter_Most_C::StaticClass()->DefaultObject);

	return Default;
}

}


