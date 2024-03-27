#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TicketType_MeleeAttackPooplet.TicketType_MeleeAttackPooplet_C
// (None)

class UClass* UTicketType_MeleeAttackPooplet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TicketType_MeleeAttackPooplet_C");

	return Clss;
}


// TicketType_MeleeAttackPooplet_C TicketType_MeleeAttackPooplet.Default__TicketType_MeleeAttackPooplet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTicketType_MeleeAttackPooplet_C* UTicketType_MeleeAttackPooplet_C::GetDefaultObj()
{
	static class UTicketType_MeleeAttackPooplet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTicketType_MeleeAttackPooplet_C*>(UTicketType_MeleeAttackPooplet_C::StaticClass()->DefaultObject);

	return Default;
}

}


