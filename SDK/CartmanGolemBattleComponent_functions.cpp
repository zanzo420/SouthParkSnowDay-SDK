#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CartmanGolemBattleComponent.CartmanGolemBattleComponent_C
// (None)

class UClass* UCartmanGolemBattleComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CartmanGolemBattleComponent_C");

	return Clss;
}


// CartmanGolemBattleComponent_C CartmanGolemBattleComponent.Default__CartmanGolemBattleComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCartmanGolemBattleComponent_C* UCartmanGolemBattleComponent_C::GetDefaultObj()
{
	static class UCartmanGolemBattleComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCartmanGolemBattleComponent_C*>(UCartmanGolemBattleComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


