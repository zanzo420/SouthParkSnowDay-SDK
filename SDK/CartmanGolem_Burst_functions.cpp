#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CartmanGolem_Burst.CartmanGolem_Burst_C
// (Actor)

class UClass* ACartmanGolem_Burst_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CartmanGolem_Burst_C");

	return Clss;
}


// CartmanGolem_Burst_C CartmanGolem_Burst.Default__CartmanGolem_Burst_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACartmanGolem_Burst_C* ACartmanGolem_Burst_C::GetDefaultObj()
{
	static class ACartmanGolem_Burst_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACartmanGolem_Burst_C*>(ACartmanGolem_Burst_C::StaticClass()->DefaultObject);

	return Default;
}

}


