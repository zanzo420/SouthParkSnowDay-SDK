#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bullshit_ProjectileKids.Bullshit_ProjectileKids_C
// (None)

class UClass* UBullshit_ProjectileKids_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bullshit_ProjectileKids_C");

	return Clss;
}


// Bullshit_ProjectileKids_C Bullshit_ProjectileKids.Default__Bullshit_ProjectileKids_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBullshit_ProjectileKids_C* UBullshit_ProjectileKids_C::GetDefaultObj()
{
	static class UBullshit_ProjectileKids_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBullshit_ProjectileKids_C*>(UBullshit_ProjectileKids_C::StaticClass()->DefaultObject);

	return Default;
}

}


