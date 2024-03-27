#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OtherPawnWound_FX.OtherPawnWound_FX_C
// (Actor)

class UClass* AOtherPawnWound_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OtherPawnWound_FX_C");

	return Clss;
}


// OtherPawnWound_FX_C OtherPawnWound_FX.Default__OtherPawnWound_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOtherPawnWound_FX_C* AOtherPawnWound_FX_C::GetDefaultObj()
{
	static class AOtherPawnWound_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOtherPawnWound_FX_C*>(AOtherPawnWound_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


