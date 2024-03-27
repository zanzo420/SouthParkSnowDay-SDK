#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TicketType_RangedBullshit.TicketType_RangedBullshit_C
// (None)

class UClass* UTicketType_RangedBullshit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TicketType_RangedBullshit_C");

	return Clss;
}


// TicketType_RangedBullshit_C TicketType_RangedBullshit.Default__TicketType_RangedBullshit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTicketType_RangedBullshit_C* UTicketType_RangedBullshit_C::GetDefaultObj()
{
	static class UTicketType_RangedBullshit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTicketType_RangedBullshit_C*>(UTicketType_RangedBullshit_C::StaticClass()->DefaultObject);

	return Default;
}

}


