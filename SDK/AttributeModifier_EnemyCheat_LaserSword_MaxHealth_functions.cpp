#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AttributeModifier_EnemyCheat_LaserSword_MaxHealth.AttributeModifier_EnemyCheat_LaserSword_MaxHealth_C
// (None)

class UClass* UAttributeModifier_EnemyCheat_LaserSword_MaxHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttributeModifier_EnemyCheat_LaserSword_MaxHealth_C");

	return Clss;
}


// AttributeModifier_EnemyCheat_LaserSword_MaxHealth_C AttributeModifier_EnemyCheat_LaserSword_MaxHealth.Default__AttributeModifier_EnemyCheat_LaserSword_MaxHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttributeModifier_EnemyCheat_LaserSword_MaxHealth_C* UAttributeModifier_EnemyCheat_LaserSword_MaxHealth_C::GetDefaultObj()
{
	static class UAttributeModifier_EnemyCheat_LaserSword_MaxHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttributeModifier_EnemyCheat_LaserSword_MaxHealth_C*>(UAttributeModifier_EnemyCheat_LaserSword_MaxHealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


