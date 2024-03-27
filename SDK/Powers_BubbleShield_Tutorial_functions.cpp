#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Powers_BubbleShield_Tutorial.Powers_BubbleShield_Tutorial_C
// (None)

class UClass* UPowers_BubbleShield_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Powers_BubbleShield_Tutorial_C");

	return Clss;
}


// Powers_BubbleShield_Tutorial_C Powers_BubbleShield_Tutorial.Default__Powers_BubbleShield_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPowers_BubbleShield_Tutorial_C* UPowers_BubbleShield_Tutorial_C::GetDefaultObj()
{
	static class UPowers_BubbleShield_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPowers_BubbleShield_Tutorial_C*>(UPowers_BubbleShield_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


