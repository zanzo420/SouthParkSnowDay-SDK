#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyCheat_VampireDodge_Verb.EnemyCheat_VampireDodge_Verb_C
// (None)

class UClass* UEnemyCheat_VampireDodge_Verb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyCheat_VampireDodge_Verb_C");

	return Clss;
}


// EnemyCheat_VampireDodge_Verb_C EnemyCheat_VampireDodge_Verb.Default__EnemyCheat_VampireDodge_Verb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyCheat_VampireDodge_Verb_C* UEnemyCheat_VampireDodge_Verb_C::GetDefaultObj()
{
	static class UEnemyCheat_VampireDodge_Verb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyCheat_VampireDodge_Verb_C*>(UEnemyCheat_VampireDodge_Verb_C::StaticClass()->DefaultObject);

	return Default;
}

}


