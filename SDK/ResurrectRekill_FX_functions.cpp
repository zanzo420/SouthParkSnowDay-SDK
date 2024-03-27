#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ResurrectRekill_FX.ResurrectRekill_FX_C
// (Actor)

class UClass* AResurrectRekill_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResurrectRekill_FX_C");

	return Clss;
}


// ResurrectRekill_FX_C ResurrectRekill_FX.Default__ResurrectRekill_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AResurrectRekill_FX_C* AResurrectRekill_FX_C::GetDefaultObj()
{
	static class AResurrectRekill_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AResurrectRekill_FX_C*>(AResurrectRekill_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


