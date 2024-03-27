#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bullshit_SuperStrengthEnemy.Bullshit_SuperStrengthEnemy_C
// (None)

class UClass* UBullshit_SuperStrengthEnemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bullshit_SuperStrengthEnemy_C");

	return Clss;
}


// Bullshit_SuperStrengthEnemy_C Bullshit_SuperStrengthEnemy.Default__Bullshit_SuperStrengthEnemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBullshit_SuperStrengthEnemy_C* UBullshit_SuperStrengthEnemy_C::GetDefaultObj()
{
	static class UBullshit_SuperStrengthEnemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBullshit_SuperStrengthEnemy_C*>(UBullshit_SuperStrengthEnemy_C::StaticClass()->DefaultObject);

	return Default;
}

}


