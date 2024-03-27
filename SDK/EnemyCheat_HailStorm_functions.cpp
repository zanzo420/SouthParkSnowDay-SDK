#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyCheat_HailStorm.EnemyCheat_HailStorm_C
// (Actor)

class UClass* AEnemyCheat_HailStorm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyCheat_HailStorm_C");

	return Clss;
}


// EnemyCheat_HailStorm_C EnemyCheat_HailStorm.Default__EnemyCheat_HailStorm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEnemyCheat_HailStorm_C* AEnemyCheat_HailStorm_C::GetDefaultObj()
{
	static class AEnemyCheat_HailStorm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEnemyCheat_HailStorm_C*>(AEnemyCheat_HailStorm_C::StaticClass()->DefaultObject);

	return Default;
}

}


