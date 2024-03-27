#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TicketType_MeleeAttack.TicketType_MeleeAttack_C
// (None)

class UClass* UTicketType_MeleeAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TicketType_MeleeAttack_C");

	return Clss;
}


// TicketType_MeleeAttack_C TicketType_MeleeAttack.Default__TicketType_MeleeAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTicketType_MeleeAttack_C* UTicketType_MeleeAttack_C::GetDefaultObj()
{
	static class UTicketType_MeleeAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTicketType_MeleeAttack_C*>(UTicketType_MeleeAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


