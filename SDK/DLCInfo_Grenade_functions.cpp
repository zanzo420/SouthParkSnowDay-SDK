#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DLCInfo_Grenade.DLCInfo_Grenade_C
// (None)

class UClass* UDLCInfo_Grenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DLCInfo_Grenade_C");

	return Clss;
}


// DLCInfo_Grenade_C DLCInfo_Grenade.Default__DLCInfo_Grenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDLCInfo_Grenade_C* UDLCInfo_Grenade_C::GetDefaultObj()
{
	static class UDLCInfo_Grenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDLCInfo_Grenade_C*>(UDLCInfo_Grenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


