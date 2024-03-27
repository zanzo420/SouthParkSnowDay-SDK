#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DLCInfo_Language_EsMx.DLCInfo_Language_EsMx_C
// (None)

class UClass* UDLCInfo_Language_EsMx_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DLCInfo_Language_EsMx_C");

	return Clss;
}


// DLCInfo_Language_EsMx_C DLCInfo_Language_EsMx.Default__DLCInfo_Language_EsMx_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDLCInfo_Language_EsMx_C* UDLCInfo_Language_EsMx_C::GetDefaultObj()
{
	static class UDLCInfo_Language_EsMx_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDLCInfo_Language_EsMx_C*>(UDLCInfo_Language_EsMx_C::StaticClass()->DefaultObject);

	return Default;
}

}


