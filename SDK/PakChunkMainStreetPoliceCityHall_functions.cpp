#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PakChunkMainStreetPoliceCityHall.PakChunkMainStreetPoliceCityHall_C
// (None)

class UClass* UPakChunkMainStreetPoliceCityHall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakChunkMainStreetPoliceCityHall_C");

	return Clss;
}


// PakChunkMainStreetPoliceCityHall_C PakChunkMainStreetPoliceCityHall.Default__PakChunkMainStreetPoliceCityHall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPakChunkMainStreetPoliceCityHall_C* UPakChunkMainStreetPoliceCityHall_C::GetDefaultObj()
{
	static class UPakChunkMainStreetPoliceCityHall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakChunkMainStreetPoliceCityHall_C*>(UPakChunkMainStreetPoliceCityHall_C::StaticClass()->DefaultObject);

	return Default;
}

}


