#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FullBodyDead_ChaosMinion.FullBodyDead_ChaosMinion_C
// (None)

class UClass* UFullBodyDead_ChaosMinion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FullBodyDead_ChaosMinion_C");

	return Clss;
}


// FullBodyDead_ChaosMinion_C FullBodyDead_ChaosMinion.Default__FullBodyDead_ChaosMinion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFullBodyDead_ChaosMinion_C* UFullBodyDead_ChaosMinion_C::GetDefaultObj()
{
	static class UFullBodyDead_ChaosMinion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFullBodyDead_ChaosMinion_C*>(UFullBodyDead_ChaosMinion_C::StaticClass()->DefaultObject);

	return Default;
}

}


