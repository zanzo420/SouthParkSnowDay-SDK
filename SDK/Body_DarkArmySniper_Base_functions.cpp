#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Body_DarkArmySniper_Base.Body_DarkArmySniper_Base_C
// (None)

class UClass* UBody_DarkArmySniper_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Body_DarkArmySniper_Base_C");

	return Clss;
}


// Body_DarkArmySniper_Base_C Body_DarkArmySniper_Base.Default__Body_DarkArmySniper_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBody_DarkArmySniper_Base_C* UBody_DarkArmySniper_Base_C::GetDefaultObj()
{
	static class UBody_DarkArmySniper_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBody_DarkArmySniper_Base_C*>(UBody_DarkArmySniper_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


