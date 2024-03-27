#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DLCInfo_CRED.DLCInfo_CRED_C
// (None)

class UClass* UDLCInfo_CRED_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DLCInfo_CRED_C");

	return Clss;
}


// DLCInfo_CRED_C DLCInfo_CRED.Default__DLCInfo_CRED_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDLCInfo_CRED_C* UDLCInfo_CRED_C::GetDefaultObj()
{
	static class UDLCInfo_CRED_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDLCInfo_CRED_C*>(UDLCInfo_CRED_C::StaticClass()->DefaultObject);

	return Default;
}

}


