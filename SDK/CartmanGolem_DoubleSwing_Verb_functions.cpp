#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CartmanGolem_DoubleSwing_Verb.CartmanGolem_DoubleSwing_Verb_C
// (None)

class UClass* UCartmanGolem_DoubleSwing_Verb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CartmanGolem_DoubleSwing_Verb_C");

	return Clss;
}


// CartmanGolem_DoubleSwing_Verb_C CartmanGolem_DoubleSwing_Verb.Default__CartmanGolem_DoubleSwing_Verb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCartmanGolem_DoubleSwing_Verb_C* UCartmanGolem_DoubleSwing_Verb_C::GetDefaultObj()
{
	static class UCartmanGolem_DoubleSwing_Verb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCartmanGolem_DoubleSwing_Verb_C*>(UCartmanGolem_DoubleSwing_Verb_C::StaticClass()->DefaultObject);

	return Default;
}

}


