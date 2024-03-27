#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FartEscapeSlam_FX.FartEscapeSlam_FX_C
// (Actor)

class UClass* AFartEscapeSlam_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FartEscapeSlam_FX_C");

	return Clss;
}


// FartEscapeSlam_FX_C FartEscapeSlam_FX.Default__FartEscapeSlam_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFartEscapeSlam_FX_C* AFartEscapeSlam_FX_C::GetDefaultObj()
{
	static class AFartEscapeSlam_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFartEscapeSlam_FX_C*>(AFartEscapeSlam_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


