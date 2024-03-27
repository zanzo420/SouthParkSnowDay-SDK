#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TicketType_Foreground.TicketType_Foreground_C
// (None)

class UClass* UTicketType_Foreground_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TicketType_Foreground_C");

	return Clss;
}


// TicketType_Foreground_C TicketType_Foreground.Default__TicketType_Foreground_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTicketType_Foreground_C* UTicketType_Foreground_C::GetDefaultObj()
{
	static class UTicketType_Foreground_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTicketType_Foreground_C*>(UTicketType_Foreground_C::StaticClass()->DefaultObject);

	return Default;
}

}


