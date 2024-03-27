#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CartmanGolem_Kick_Verb.CartmanGolem_Kick_Verb_C
// (None)

class UClass* UCartmanGolem_Kick_Verb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CartmanGolem_Kick_Verb_C");

	return Clss;
}


// CartmanGolem_Kick_Verb_C CartmanGolem_Kick_Verb.Default__CartmanGolem_Kick_Verb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCartmanGolem_Kick_Verb_C* UCartmanGolem_Kick_Verb_C::GetDefaultObj()
{
	static class UCartmanGolem_Kick_Verb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCartmanGolem_Kick_Verb_C*>(UCartmanGolem_Kick_Verb_C::StaticClass()->DefaultObject);

	return Default;
}

}


