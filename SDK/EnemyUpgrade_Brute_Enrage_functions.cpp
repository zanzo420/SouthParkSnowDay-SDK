#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyUpgrade_Brute_Enrage.EnemyUpgrade_Brute_Enrage_C
// (None)

class UClass* UEnemyUpgrade_Brute_Enrage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyUpgrade_Brute_Enrage_C");

	return Clss;
}


// EnemyUpgrade_Brute_Enrage_C EnemyUpgrade_Brute_Enrage.Default__EnemyUpgrade_Brute_Enrage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyUpgrade_Brute_Enrage_C* UEnemyUpgrade_Brute_Enrage_C::GetDefaultObj()
{
	static class UEnemyUpgrade_Brute_Enrage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyUpgrade_Brute_Enrage_C*>(UEnemyUpgrade_Brute_Enrage_C::StaticClass()->DefaultObject);

	return Default;
}

}


