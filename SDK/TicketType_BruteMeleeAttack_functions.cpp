#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TicketType_BruteMeleeAttack.TicketType_BruteMeleeAttack_C
// (None)

class UClass* UTicketType_BruteMeleeAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TicketType_BruteMeleeAttack_C");

	return Clss;
}


// TicketType_BruteMeleeAttack_C TicketType_BruteMeleeAttack.Default__TicketType_BruteMeleeAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTicketType_BruteMeleeAttack_C* UTicketType_BruteMeleeAttack_C::GetDefaultObj()
{
	static class UTicketType_BruteMeleeAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTicketType_BruteMeleeAttack_C*>(UTicketType_BruteMeleeAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


