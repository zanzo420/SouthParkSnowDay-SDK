#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Dodge_Shifty.Dodge_Shifty_C
// (None)

class UClass* UDodge_Shifty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dodge_Shifty_C");

	return Clss;
}


// Dodge_Shifty_C Dodge_Shifty.Default__Dodge_Shifty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDodge_Shifty_C* UDodge_Shifty_C::GetDefaultObj()
{
	static class UDodge_Shifty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDodge_Shifty_C*>(UDodge_Shifty_C::StaticClass()->DefaultObject);

	return Default;
}

}


