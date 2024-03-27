#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FartEscapeFall_FX.FartEscapeFall_FX_C
// (Actor)

class UClass* AFartEscapeFall_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FartEscapeFall_FX_C");

	return Clss;
}


// FartEscapeFall_FX_C FartEscapeFall_FX.Default__FartEscapeFall_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFartEscapeFall_FX_C* AFartEscapeFall_FX_C::GetDefaultObj()
{
	static class AFartEscapeFall_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFartEscapeFall_FX_C*>(AFartEscapeFall_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


