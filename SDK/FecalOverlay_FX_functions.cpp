#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FecalOverlay_FX.FecalOverlay_FX_C
// (None)

class UClass* UFecalOverlay_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FecalOverlay_FX_C");

	return Clss;
}


// FecalOverlay_FX_C FecalOverlay_FX.Default__FecalOverlay_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFecalOverlay_FX_C* UFecalOverlay_FX_C::GetDefaultObj()
{
	static class UFecalOverlay_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFecalOverlay_FX_C*>(UFecalOverlay_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


