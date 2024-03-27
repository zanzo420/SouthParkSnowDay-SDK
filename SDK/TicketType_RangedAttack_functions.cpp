#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TicketType_RangedAttack.TicketType_RangedAttack_C
// (None)

class UClass* UTicketType_RangedAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TicketType_RangedAttack_C");

	return Clss;
}


// TicketType_RangedAttack_C TicketType_RangedAttack.Default__TicketType_RangedAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTicketType_RangedAttack_C* UTicketType_RangedAttack_C::GetDefaultObj()
{
	static class UTicketType_RangedAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTicketType_RangedAttack_C*>(UTicketType_RangedAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


