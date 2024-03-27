#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Body_SnackySmores_Brown.Body_SnackySmores_Brown_C
// (None)

class UClass* UBody_SnackySmores_Brown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Body_SnackySmores_Brown_C");

	return Clss;
}


// Body_SnackySmores_Brown_C Body_SnackySmores_Brown.Default__Body_SnackySmores_Brown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBody_SnackySmores_Brown_C* UBody_SnackySmores_Brown_C::GetDefaultObj()
{
	static class UBody_SnackySmores_Brown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBody_SnackySmores_Brown_C*>(UBody_SnackySmores_Brown_C::StaticClass()->DefaultObject);

	return Default;
}

}


