#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Totem_Healing_RainbowLegion.Totem_Healing_RainbowLegion_C
// (Actor)

class UClass* ATotem_Healing_RainbowLegion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Totem_Healing_RainbowLegion_C");

	return Clss;
}


// Totem_Healing_RainbowLegion_C Totem_Healing_RainbowLegion.Default__Totem_Healing_RainbowLegion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATotem_Healing_RainbowLegion_C* ATotem_Healing_RainbowLegion_C::GetDefaultObj()
{
	static class ATotem_Healing_RainbowLegion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATotem_Healing_RainbowLegion_C*>(ATotem_Healing_RainbowLegion_C::StaticClass()->DefaultObject);

	return Default;
}

}


