#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyBubbleShieldActivationVerb.EnemyBubbleShieldActivationVerb_C
// (None)

class UClass* UEnemyBubbleShieldActivationVerb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyBubbleShieldActivationVerb_C");

	return Clss;
}


// EnemyBubbleShieldActivationVerb_C EnemyBubbleShieldActivationVerb.Default__EnemyBubbleShieldActivationVerb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyBubbleShieldActivationVerb_C* UEnemyBubbleShieldActivationVerb_C::GetDefaultObj()
{
	static class UEnemyBubbleShieldActivationVerb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyBubbleShieldActivationVerb_C*>(UEnemyBubbleShieldActivationVerb_C::StaticClass()->DefaultObject);

	return Default;
}

}


