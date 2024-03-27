#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DLCInfo_Language_German.DLCInfo_Language_German_C
// (None)

class UClass* UDLCInfo_Language_German_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DLCInfo_Language_German_C");

	return Clss;
}


// DLCInfo_Language_German_C DLCInfo_Language_German.Default__DLCInfo_Language_German_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDLCInfo_Language_German_C* UDLCInfo_Language_German_C::GetDefaultObj()
{
	static class UDLCInfo_Language_German_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDLCInfo_Language_German_C*>(UDLCInfo_Language_German_C::StaticClass()->DefaultObject);

	return Default;
}

}


