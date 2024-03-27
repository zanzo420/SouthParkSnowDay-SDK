#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Head_Goatee.Head_Goatee_C
// (None)

class UClass* UHead_Goatee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Head_Goatee_C");

	return Clss;
}


// Head_Goatee_C Head_Goatee.Default__Head_Goatee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHead_Goatee_C* UHead_Goatee_C::GetDefaultObj()
{
	static class UHead_Goatee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHead_Goatee_C*>(UHead_Goatee_C::StaticClass()->DefaultObject);

	return Default;
}

}


