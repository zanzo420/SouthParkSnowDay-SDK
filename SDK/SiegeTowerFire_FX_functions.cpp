#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SiegeTowerFire_FX.SiegeTowerFire_FX_C
// (Actor)

class UClass* ASiegeTowerFire_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SiegeTowerFire_FX_C");

	return Clss;
}


// SiegeTowerFire_FX_C SiegeTowerFire_FX.Default__SiegeTowerFire_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASiegeTowerFire_FX_C* ASiegeTowerFire_FX_C::GetDefaultObj()
{
	static class ASiegeTowerFire_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASiegeTowerFire_FX_C*>(ASiegeTowerFire_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


