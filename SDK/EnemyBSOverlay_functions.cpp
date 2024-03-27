#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyBSOverlay.EnemyBSOverlay_C
// (None)

class UClass* UEnemyBSOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyBSOverlay_C");

	return Clss;
}


// EnemyBSOverlay_C EnemyBSOverlay.Default__EnemyBSOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyBSOverlay_C* UEnemyBSOverlay_C::GetDefaultObj()
{
	static class UEnemyBSOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyBSOverlay_C*>(UEnemyBSOverlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


