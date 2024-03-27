#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CartmanBuddyStaff.CartmanBuddyStaff_C
// (Actor)

class UClass* ACartmanBuddyStaff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CartmanBuddyStaff_C");

	return Clss;
}


// CartmanBuddyStaff_C CartmanBuddyStaff.Default__CartmanBuddyStaff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACartmanBuddyStaff_C* ACartmanBuddyStaff_C::GetDefaultObj()
{
	static class ACartmanBuddyStaff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACartmanBuddyStaff_C*>(ACartmanBuddyStaff_C::StaticClass()->DefaultObject);

	return Default;
}

}


