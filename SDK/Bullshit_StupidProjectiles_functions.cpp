#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bullshit_StupidProjectiles.Bullshit_StupidProjectiles_C
// (None)

class UClass* UBullshit_StupidProjectiles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bullshit_StupidProjectiles_C");

	return Clss;
}


// Bullshit_StupidProjectiles_C Bullshit_StupidProjectiles.Default__Bullshit_StupidProjectiles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBullshit_StupidProjectiles_C* UBullshit_StupidProjectiles_C::GetDefaultObj()
{
	static class UBullshit_StupidProjectiles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBullshit_StupidProjectiles_C*>(UBullshit_StupidProjectiles_C::StaticClass()->DefaultObject);

	return Default;
}

}


