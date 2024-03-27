#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DodgeVerb_AllyBot.DodgeVerb_AllyBot_C
// (None)

class UClass* UDodgeVerb_AllyBot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DodgeVerb_AllyBot_C");

	return Clss;
}


// DodgeVerb_AllyBot_C DodgeVerb_AllyBot.Default__DodgeVerb_AllyBot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDodgeVerb_AllyBot_C* UDodgeVerb_AllyBot_C::GetDefaultObj()
{
	static class UDodgeVerb_AllyBot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDodgeVerb_AllyBot_C*>(UDodgeVerb_AllyBot_C::StaticClass()->DefaultObject);

	return Default;
}

}


