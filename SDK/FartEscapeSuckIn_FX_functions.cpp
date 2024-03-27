#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FartEscapeSuckIn_FX.FartEscapeSuckIn_FX_C
// (Actor)

class UClass* AFartEscapeSuckIn_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FartEscapeSuckIn_FX_C");

	return Clss;
}


// FartEscapeSuckIn_FX_C FartEscapeSuckIn_FX.Default__FartEscapeSuckIn_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFartEscapeSuckIn_FX_C* AFartEscapeSuckIn_FX_C::GetDefaultObj()
{
	static class AFartEscapeSuckIn_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFartEscapeSuckIn_FX_C*>(AFartEscapeSuckIn_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


