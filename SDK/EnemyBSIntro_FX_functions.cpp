#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyBSIntro_FX.EnemyBSIntro_FX_C
// (Actor)

class UClass* AEnemyBSIntro_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyBSIntro_FX_C");

	return Clss;
}


// EnemyBSIntro_FX_C EnemyBSIntro_FX.Default__EnemyBSIntro_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEnemyBSIntro_FX_C* AEnemyBSIntro_FX_C::GetDefaultObj()
{
	static class AEnemyBSIntro_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEnemyBSIntro_FX_C*>(AEnemyBSIntro_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


