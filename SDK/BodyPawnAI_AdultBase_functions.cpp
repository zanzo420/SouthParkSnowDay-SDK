#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawnAI_AdultBase.BodyPawnAI_AdultBase_C
// (Actor, Pawn)

class UClass* ABodyPawnAI_AdultBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawnAI_AdultBase_C");

	return Clss;
}


// BodyPawnAI_AdultBase_C BodyPawnAI_AdultBase.Default__BodyPawnAI_AdultBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawnAI_AdultBase_C* ABodyPawnAI_AdultBase_C::GetDefaultObj()
{
	static class ABodyPawnAI_AdultBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawnAI_AdultBase_C*>(ABodyPawnAI_AdultBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


