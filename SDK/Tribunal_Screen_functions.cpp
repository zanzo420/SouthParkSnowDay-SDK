#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tribunal_Screen.Tribunal_Screen_C
// (None)

class UClass* UTribunal_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tribunal_Screen_C");

	return Clss;
}


// Tribunal_Screen_C Tribunal_Screen.Default__Tribunal_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTribunal_Screen_C* UTribunal_Screen_C::GetDefaultObj()
{
	static class UTribunal_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTribunal_Screen_C*>(UTribunal_Screen_C::StaticClass()->DefaultObject);

	return Default;
}

}


