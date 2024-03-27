#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElvenEyes_FX.ElvenEyes_FX_C
// (Actor)

class UClass* AElvenEyes_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElvenEyes_FX_C");

	return Clss;
}


// ElvenEyes_FX_C ElvenEyes_FX.Default__ElvenEyes_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AElvenEyes_FX_C* AElvenEyes_FX_C::GetDefaultObj()
{
	static class AElvenEyes_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AElvenEyes_FX_C*>(AElvenEyes_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


