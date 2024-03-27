#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AchievementsManager.AchievementsManager_C
// (None)

class UClass* UAchievementsManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AchievementsManager_C");

	return Clss;
}


// AchievementsManager_C AchievementsManager.Default__AchievementsManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAchievementsManager_C* UAchievementsManager_C::GetDefaultObj()
{
	static class UAchievementsManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAchievementsManager_C*>(UAchievementsManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


