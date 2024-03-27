#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TicketType_GrabAttack.TicketType_GrabAttack_C
// (None)

class UClass* UTicketType_GrabAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TicketType_GrabAttack_C");

	return Clss;
}


// TicketType_GrabAttack_C TicketType_GrabAttack.Default__TicketType_GrabAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTicketType_GrabAttack_C* UTicketType_GrabAttack_C::GetDefaultObj()
{
	static class UTicketType_GrabAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTicketType_GrabAttack_C*>(UTicketType_GrabAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


