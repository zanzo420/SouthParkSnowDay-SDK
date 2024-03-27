#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bullshit_CartmanBoss_BubbleShield.Bullshit_CartmanBoss_BubbleShield_C
// (None)

class UClass* UBullshit_CartmanBoss_BubbleShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bullshit_CartmanBoss_BubbleShield_C");

	return Clss;
}


// Bullshit_CartmanBoss_BubbleShield_C Bullshit_CartmanBoss_BubbleShield.Default__Bullshit_CartmanBoss_BubbleShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBullshit_CartmanBoss_BubbleShield_C* UBullshit_CartmanBoss_BubbleShield_C::GetDefaultObj()
{
	static class UBullshit_CartmanBoss_BubbleShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBullshit_CartmanBoss_BubbleShield_C*>(UBullshit_CartmanBoss_BubbleShield_C::StaticClass()->DefaultObject);

	return Default;
}

}


