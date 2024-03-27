#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bullshit_DoOver.Bullshit_DoOver_C
// (None)

class UClass* UBullshit_DoOver_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bullshit_DoOver_C");

	return Clss;
}


// Bullshit_DoOver_C Bullshit_DoOver.Default__Bullshit_DoOver_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBullshit_DoOver_C* UBullshit_DoOver_C::GetDefaultObj()
{
	static class UBullshit_DoOver_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBullshit_DoOver_C*>(UBullshit_DoOver_C::StaticClass()->DefaultObject);

	return Default;
}

}


