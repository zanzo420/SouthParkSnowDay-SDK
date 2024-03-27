#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SummonPuff_FX.SummonPuff_FX_C
// (Actor)

class UClass* ASummonPuff_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SummonPuff_FX_C");

	return Clss;
}


// SummonPuff_FX_C SummonPuff_FX.Default__SummonPuff_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASummonPuff_FX_C* ASummonPuff_FX_C::GetDefaultObj()
{
	static class ASummonPuff_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASummonPuff_FX_C*>(ASummonPuff_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


