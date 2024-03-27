#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArrowHit_Def.ArrowHit_Def_C
// (Actor)

class UClass* AArrowHit_Def_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArrowHit_Def_C");

	return Clss;
}


// ArrowHit_Def_C ArrowHit_Def.Default__ArrowHit_Def_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AArrowHit_Def_C* AArrowHit_Def_C::GetDefaultObj()
{
	static class AArrowHit_Def_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AArrowHit_Def_C*>(AArrowHit_Def_C::StaticClass()->DefaultObject);

	return Default;
}

}


