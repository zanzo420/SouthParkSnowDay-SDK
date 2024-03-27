#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TicketType_MeleeRangedAttack.TicketType_MeleeRangedAttack_C
// (None)

class UClass* UTicketType_MeleeRangedAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TicketType_MeleeRangedAttack_C");

	return Clss;
}


// TicketType_MeleeRangedAttack_C TicketType_MeleeRangedAttack.Default__TicketType_MeleeRangedAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTicketType_MeleeRangedAttack_C* UTicketType_MeleeRangedAttack_C::GetDefaultObj()
{
	static class UTicketType_MeleeRangedAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTicketType_MeleeRangedAttack_C*>(UTicketType_MeleeRangedAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


