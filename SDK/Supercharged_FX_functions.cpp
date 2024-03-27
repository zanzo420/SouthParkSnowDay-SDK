#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Supercharged_FX.Supercharged_FX_C
// (Actor)

class UClass* ASupercharged_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Supercharged_FX_C");

	return Clss;
}


// Supercharged_FX_C Supercharged_FX.Default__Supercharged_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASupercharged_FX_C* ASupercharged_FX_C::GetDefaultObj()
{
	static class ASupercharged_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASupercharged_FX_C*>(ASupercharged_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


