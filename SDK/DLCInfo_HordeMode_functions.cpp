#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DLCInfo_HordeMode.DLCInfo_HordeMode_C
// (None)

class UClass* UDLCInfo_HordeMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DLCInfo_HordeMode_C");

	return Clss;
}


// DLCInfo_HordeMode_C DLCInfo_HordeMode.Default__DLCInfo_HordeMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDLCInfo_HordeMode_C* UDLCInfo_HordeMode_C::GetDefaultObj()
{
	static class UDLCInfo_HordeMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDLCInfo_HordeMode_C*>(UDLCInfo_HordeMode_C::StaticClass()->DefaultObject);

	return Default;
}

}


