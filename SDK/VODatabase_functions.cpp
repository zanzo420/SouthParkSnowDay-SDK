#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VODatabase.VODatabase_C
// (None)

class UClass* UVODatabase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VODatabase_C");

	return Clss;
}


// VODatabase_C VODatabase.Default__VODatabase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVODatabase_C* UVODatabase_C::GetDefaultObj()
{
	static class UVODatabase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVODatabase_C*>(UVODatabase_C::StaticClass()->DefaultObject);

	return Default;
}

}


