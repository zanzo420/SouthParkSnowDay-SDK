#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FX_LoopingGroundFireFX.FX_LoopingGroundFireFX_C
// (Actor)

class UClass* AFX_LoopingGroundFireFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FX_LoopingGroundFireFX_C");

	return Clss;
}


// FX_LoopingGroundFireFX_C FX_LoopingGroundFireFX.Default__FX_LoopingGroundFireFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFX_LoopingGroundFireFX_C* AFX_LoopingGroundFireFX_C::GetDefaultObj()
{
	static class AFX_LoopingGroundFireFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFX_LoopingGroundFireFX_C*>(AFX_LoopingGroundFireFX_C::StaticClass()->DefaultObject);

	return Default;
}

}


