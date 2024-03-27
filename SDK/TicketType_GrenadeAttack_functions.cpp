#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TicketType_GrenadeAttack.TicketType_GrenadeAttack_C
// (None)

class UClass* UTicketType_GrenadeAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TicketType_GrenadeAttack_C");

	return Clss;
}


// TicketType_GrenadeAttack_C TicketType_GrenadeAttack.Default__TicketType_GrenadeAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTicketType_GrenadeAttack_C* UTicketType_GrenadeAttack_C::GetDefaultObj()
{
	static class UTicketType_GrenadeAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTicketType_GrenadeAttack_C*>(UTicketType_GrenadeAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


