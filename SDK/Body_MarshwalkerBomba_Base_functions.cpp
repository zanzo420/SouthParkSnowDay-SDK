#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Body_MarshwalkerBomba_Base.Body_MarshwalkerBomba_Base_C
// (None)

class UClass* UBody_MarshwalkerBomba_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Body_MarshwalkerBomba_Base_C");

	return Clss;
}


// Body_MarshwalkerBomba_Base_C Body_MarshwalkerBomba_Base.Default__Body_MarshwalkerBomba_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBody_MarshwalkerBomba_Base_C* UBody_MarshwalkerBomba_Base_C::GetDefaultObj()
{
	static class UBody_MarshwalkerBomba_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBody_MarshwalkerBomba_Base_C*>(UBody_MarshwalkerBomba_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


