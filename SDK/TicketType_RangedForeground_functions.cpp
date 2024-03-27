#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TicketType_RangedForeground.TicketType_RangedForeground_C
// (None)

class UClass* UTicketType_RangedForeground_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TicketType_RangedForeground_C");

	return Clss;
}


// TicketType_RangedForeground_C TicketType_RangedForeground.Default__TicketType_RangedForeground_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTicketType_RangedForeground_C* UTicketType_RangedForeground_C::GetDefaultObj()
{
	static class UTicketType_RangedForeground_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTicketType_RangedForeground_C*>(UTicketType_RangedForeground_C::StaticClass()->DefaultObject);

	return Default;
}

}


