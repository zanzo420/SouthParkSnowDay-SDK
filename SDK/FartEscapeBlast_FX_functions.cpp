#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FartEscapeBlast_FX.FartEscapeBlast_FX_C
// (Actor)

class UClass* AFartEscapeBlast_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FartEscapeBlast_FX_C");

	return Clss;
}


// FartEscapeBlast_FX_C FartEscapeBlast_FX.Default__FartEscapeBlast_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFartEscapeBlast_FX_C* AFartEscapeBlast_FX_C::GetDefaultObj()
{
	static class AFartEscapeBlast_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFartEscapeBlast_FX_C*>(AFartEscapeBlast_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


