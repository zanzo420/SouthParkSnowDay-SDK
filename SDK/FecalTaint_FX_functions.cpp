#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FecalTaint_FX.FecalTaint_FX_C
// (Actor)

class UClass* AFecalTaint_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FecalTaint_FX_C");

	return Clss;
}


// FecalTaint_FX_C FecalTaint_FX.Default__FecalTaint_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFecalTaint_FX_C* AFecalTaint_FX_C::GetDefaultObj()
{
	static class AFecalTaint_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFecalTaint_FX_C*>(AFecalTaint_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


