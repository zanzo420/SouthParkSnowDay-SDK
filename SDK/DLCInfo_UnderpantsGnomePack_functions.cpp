#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DLCInfo_UnderpantsGnomePack.DLCInfo_UnderpantsGnomePack_C
// (None)

class UClass* UDLCInfo_UnderpantsGnomePack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DLCInfo_UnderpantsGnomePack_C");

	return Clss;
}


// DLCInfo_UnderpantsGnomePack_C DLCInfo_UnderpantsGnomePack.Default__DLCInfo_UnderpantsGnomePack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDLCInfo_UnderpantsGnomePack_C* UDLCInfo_UnderpantsGnomePack_C::GetDefaultObj()
{
	static class UDLCInfo_UnderpantsGnomePack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDLCInfo_UnderpantsGnomePack_C*>(UDLCInfo_UnderpantsGnomePack_C::StaticClass()->DefaultObject);

	return Default;
}

}


