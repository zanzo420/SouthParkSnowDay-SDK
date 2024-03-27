#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AllyBotBow.AllyBotBow_C
// (Actor)

class UClass* AAllyBotBow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AllyBotBow_C");

	return Clss;
}


// AllyBotBow_C AllyBotBow.Default__AllyBotBow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAllyBotBow_C* AAllyBotBow_C::GetDefaultObj()
{
	static class AAllyBotBow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAllyBotBow_C*>(AAllyBotBow_C::StaticClass()->DefaultObject);

	return Default;
}

}


