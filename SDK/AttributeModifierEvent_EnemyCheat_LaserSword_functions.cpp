#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AttributeModifierEvent_EnemyCheat_LaserSword.AttributeModifierEvent_EnemyCheat_LaserSword_C
// (None)

class UClass* UAttributeModifierEvent_EnemyCheat_LaserSword_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttributeModifierEvent_EnemyCheat_LaserSword_C");

	return Clss;
}


// AttributeModifierEvent_EnemyCheat_LaserSword_C AttributeModifierEvent_EnemyCheat_LaserSword.Default__AttributeModifierEvent_EnemyCheat_LaserSword_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttributeModifierEvent_EnemyCheat_LaserSword_C* UAttributeModifierEvent_EnemyCheat_LaserSword_C::GetDefaultObj()
{
	static class UAttributeModifierEvent_EnemyCheat_LaserSword_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttributeModifierEvent_EnemyCheat_LaserSword_C*>(UAttributeModifierEvent_EnemyCheat_LaserSword_C::StaticClass()->DefaultObject);

	return Default;
}

}


