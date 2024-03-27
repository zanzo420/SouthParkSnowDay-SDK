#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ScheisseBeamDamageType.ScheisseBeamDamageType_C
// (None)

class UClass* UScheisseBeamDamageType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScheisseBeamDamageType_C");

	return Clss;
}


// ScheisseBeamDamageType_C ScheisseBeamDamageType.Default__ScheisseBeamDamageType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScheisseBeamDamageType_C* UScheisseBeamDamageType_C::GetDefaultObj()
{
	static class UScheisseBeamDamageType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScheisseBeamDamageType_C*>(UScheisseBeamDamageType_C::StaticClass()->DefaultObject);

	return Default;
}

}


