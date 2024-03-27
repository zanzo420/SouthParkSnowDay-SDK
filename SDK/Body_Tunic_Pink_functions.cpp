#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Body_Tunic_Pink.Body_Tunic_Pink_C
// (None)

class UClass* UBody_Tunic_Pink_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Body_Tunic_Pink_C");

	return Clss;
}


// Body_Tunic_Pink_C Body_Tunic_Pink.Default__Body_Tunic_Pink_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBody_Tunic_Pink_C* UBody_Tunic_Pink_C::GetDefaultObj()
{
	static class UBody_Tunic_Pink_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBody_Tunic_Pink_C*>(UBody_Tunic_Pink_C::StaticClass()->DefaultObject);

	return Default;
}

}


