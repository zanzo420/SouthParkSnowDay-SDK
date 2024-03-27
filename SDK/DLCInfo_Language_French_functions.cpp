#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DLCInfo_Language_French.DLCInfo_Language_French_C
// (None)

class UClass* UDLCInfo_Language_French_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DLCInfo_Language_French_C");

	return Clss;
}


// DLCInfo_Language_French_C DLCInfo_Language_French.Default__DLCInfo_Language_French_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDLCInfo_Language_French_C* UDLCInfo_Language_French_C::GetDefaultObj()
{
	static class UDLCInfo_Language_French_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDLCInfo_Language_French_C*>(UDLCInfo_Language_French_C::StaticClass()->DefaultObject);

	return Default;
}

}


