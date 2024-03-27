#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Null_FX.Null_FX_C
// (Actor)

class UClass* ANull_FX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Null_FX_C");

	return Clss;
}


// Null_FX_C Null_FX.Default__Null_FX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANull_FX_C* ANull_FX_C::GetDefaultObj()
{
	static class ANull_FX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANull_FX_C*>(ANull_FX_C::StaticClass()->DefaultObject);

	return Default;
}

}


