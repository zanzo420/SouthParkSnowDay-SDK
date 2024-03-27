#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Reward_DarkMatter_More.Reward_DarkMatter_More_C
// (None)

class UClass* UReward_DarkMatter_More_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Reward_DarkMatter_More_C");

	return Clss;
}


// Reward_DarkMatter_More_C Reward_DarkMatter_More.Default__Reward_DarkMatter_More_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReward_DarkMatter_More_C* UReward_DarkMatter_More_C::GetDefaultObj()
{
	static class UReward_DarkMatter_More_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReward_DarkMatter_More_C*>(UReward_DarkMatter_More_C::StaticClass()->DefaultObject);

	return Default;
}

}


