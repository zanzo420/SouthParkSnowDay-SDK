#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bullshit_Nerfed.Bullshit_Nerfed_C
// (None)

class UClass* UBullshit_Nerfed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bullshit_Nerfed_C");

	return Clss;
}


// Bullshit_Nerfed_C Bullshit_Nerfed.Default__Bullshit_Nerfed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBullshit_Nerfed_C* UBullshit_Nerfed_C::GetDefaultObj()
{
	static class UBullshit_Nerfed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBullshit_Nerfed_C*>(UBullshit_Nerfed_C::StaticClass()->DefaultObject);

	return Default;
}

}


