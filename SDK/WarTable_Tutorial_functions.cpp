#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WarTable_Tutorial.WarTable_Tutorial_C
// (None)

class UClass* UWarTable_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WarTable_Tutorial_C");

	return Clss;
}


// WarTable_Tutorial_C WarTable_Tutorial.Default__WarTable_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWarTable_Tutorial_C* UWarTable_Tutorial_C::GetDefaultObj()
{
	static class UWarTable_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWarTable_Tutorial_C*>(UWarTable_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


