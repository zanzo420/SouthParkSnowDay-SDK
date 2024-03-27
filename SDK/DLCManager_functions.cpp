#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DLCManager.DLCManager_C
// (None)

class UClass* UDLCManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DLCManager_C");

	return Clss;
}


// DLCManager_C DLCManager.Default__DLCManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDLCManager_C* UDLCManager_C::GetDefaultObj()
{
	static class UDLCManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDLCManager_C*>(UDLCManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


