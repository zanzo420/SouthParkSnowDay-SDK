#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ItemGeometryDatabase.ItemGeometryDatabase_C
// (None)

class UClass* UItemGeometryDatabase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemGeometryDatabase_C");

	return Clss;
}


// ItemGeometryDatabase_C ItemGeometryDatabase.Default__ItemGeometryDatabase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemGeometryDatabase_C* UItemGeometryDatabase_C::GetDefaultObj()
{
	static class UItemGeometryDatabase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemGeometryDatabase_C*>(UItemGeometryDatabase_C::StaticClass()->DefaultObject);

	return Default;
}

}


