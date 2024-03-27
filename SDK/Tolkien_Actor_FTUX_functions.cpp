#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tolkien_Actor_FTUX.Tolkien_Actor_FTUX_C
// (Actor)

class UClass* ATolkien_Actor_FTUX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tolkien_Actor_FTUX_C");

	return Clss;
}


// Tolkien_Actor_FTUX_C Tolkien_Actor_FTUX.Default__Tolkien_Actor_FTUX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATolkien_Actor_FTUX_C* ATolkien_Actor_FTUX_C::GetDefaultObj()
{
	static class ATolkien_Actor_FTUX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATolkien_Actor_FTUX_C*>(ATolkien_Actor_FTUX_C::StaticClass()->DefaultObject);

	return Default;
}

}


